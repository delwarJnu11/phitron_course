from django.shortcuts import render,redirect
from author.forms import RegisterForm, UpdateUserForm
from django.contrib.auth.forms import AuthenticationForm,PasswordChangeForm
from django.contrib.auth.models import User
from django.contrib.auth import authenticate,login,logout,update_session_auth_hash
from django.contrib import messages
from django.contrib.auth.decorators import login_required
from django.utils.decorators import method_decorator
from posts.models import PostsModel
from django.contrib.auth.views import LoginView
from django.urls import reverse_lazy

# Create your views here.
def register(request):
    if request.method == 'POST':
        register_form = RegisterForm(request.POST)
        if register_form.is_valid():
            messages.success(request, 'Account Register Successful!')
            register_form.save()
            return redirect('login')
        else:
            messages.error(request, 'There is something wrong. Try again.')
            return redirect('register')
    else:
        register_form = RegisterForm()
    return render(request, 'author/register.html', {'form': register_form, 'type': 'Register'})


def sign_in(request):
    if request.method == 'POST':
        login_form = AuthenticationForm(request, request.POST)
        if login_form.is_valid():
            user_name = login_form.cleaned_data['username']
            user_pass = login_form.cleaned_data['password']
            user = authenticate(username = user_name, password = user_pass)
            if user is not None:
                login(request, user)
                messages.success(request, 'User Logged In Successful!')
                return redirect('profile')
            else:
                messages.error(request, 'User Not Found')
                return redirect('register')
    else:
        login_form = AuthenticationForm(request)
    return render(request,'author/register.html', {'form': login_form, 'type': 'Login'})


class UserLoginView(LoginView):
    template_name = 'author/register.html'

    def form_valid(self,form):
        messages.success(self.request, 'User Logged In Successful')
        return super().form_valid(form)
    
    def form_invalid(self, form):
        messages.error(self.request, 'User Not found!')
        return super().form_invalid(form)
    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context["type"] = 'Login'
        return context
    def get_success_url(self):
        return reverse_lazy('profile')
    
        
    


def user_logout(request):
    logout(request)
    return redirect('login')

# class UserLogoutView(LogoutView):
#     template_name = 'author/logout.html'

#     def get_success_url(self):
#         messages.success(self.request, 'User Log out Successful')
#         return reverse_lazy('login')

@login_required
def profile(request):
    data = PostsModel.objects.filter(author=request.user)
    return render(request, 'author/profile.html',{'posts':data})

    
@login_required
def edit_profile(request):
    if request.user.is_authenticated:
        if request.method == 'POST':
            profile_form = UpdateUserForm(request.POST, instance= request.user)
            if profile_form.is_valid():
                profile_form.save()
                messages.success(request, 'User Updated Succesful')
                return redirect('profile')
        else:
            profile_form = UpdateUserForm(instance = request.user)
        return render(request, 'author/update_profile.html', {'form': profile_form})
    else:
        messages.error(request, 'Register Or Login first then try to Update profile')
        return redirect('register')

def change_password(request):
    if request.method == 'POST':
        form = PasswordChangeForm(request.user, data = request.POST)
        if form.is_valid():
            form.save()
            messages.success(request,'Password Updated Successful')
            update_session_auth_hash(request,form.user)
            return redirect('profile')
    else:
        form = PasswordChangeForm(request.user)
    return render(request, 'author/change_pass.html', {'form':form})