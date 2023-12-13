from django.shortcuts import render,redirect
from auth_app.forms import RegisterForm,UserUpdateForm
from django.contrib import messages
from django.contrib.auth.forms import AuthenticationForm,PasswordChangeForm,SetPasswordForm
from django.contrib.auth import login,logout,authenticate,update_session_auth_hash

# Create your views here.
def home(request):
    return render(request, 'home.html')

def register(request):
    if not request.user.is_authenticated:
        if request.method == 'POST':
            form = RegisterForm(request.POST)
            if form.is_valid():
                messages.success(request, 'User Created Successfully Done!!!')
                form.save()
                return render(request, 'register.html', {'form': RegisterForm()})
        else:
            form = RegisterForm()

        return render(request, 'register.html', {'form': form})
    else:
        return redirect('profile')

def sign_in(request):
    if not request.user.is_authenticated:
        if request.method == 'POST':
            login_form = AuthenticationForm(request=request, data = request.POST)
            if login_form.is_valid():
                name = login_form.cleaned_data['username']
                password = login_form.cleaned_data['password']
                user = authenticate( username = name, password = password)
                if user is not None:
                    messages.success(request, 'User Login successful')
                    login(request, user)
                    return redirect('profile')
        else:
            login_form = AuthenticationForm()
        return render(request, 'login.html', {'form': login_form})
    else:
        return redirect('profile')
    
def profile(request):
    if request.user.is_authenticated:
        if request.method == 'POST':
            form = UserUpdateForm(request.POST, instance=request.user)
            if form.is_valid():
                messages.success(request, 'User Data Updated successful!!!')
                form.save()
                return redirect('profile')
        else:
            form = UserUpdateForm(instance = request.user)
        return render(request, 'profile.html',{'form': form})
    else:
        return redirect('sign_in')

def sign_out(request):
    logout(request)
    return redirect('sign_in')

def change_password(request):
    if request.user.is_authenticated:
        if request.method == 'POST':
            form = PasswordChangeForm(user=request.user, data = request.POST)
            if form.is_valid():
                messages.success(request, 'Password Change successful')
                form.save()
                update_session_auth_hash(request, form.user)
                return redirect('profile')
        else:
            form = PasswordChangeForm(user=request.user)
        return render(request, 'change_password.html', {'form': form})
    else:
        return redirect('sign_in')

def set_password(request):
    if request.user.is_authenticated:
        if request.method == 'POST':
            form = SetPasswordForm(user = request.user, data =  request.POST)
            if form.is_valid():
                messages.success(request, 'New Password Set Successfully Done!')
                form.save()
                update_session_auth_hash(request, form.user)
                return redirect('profile')
        else:
            form = SetPasswordForm(user = request.user)
        return render(request, 'change_password.html', {'form': form})
    else:
        return redirect('sign_in')