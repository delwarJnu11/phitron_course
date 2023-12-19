from django.shortcuts import render,redirect
from django.views.generic import CreateView,View
from django.contrib.auth.views import LoginView
from django.contrib.auth import logout
from auth_app.forms import RegisterForm
from django.contrib.auth.models import User
from django.contrib.auth.forms import AuthenticationForm
from django.urls import reverse_lazy
from django.contrib.messages.views import SuccessMessageMixin
from django.contrib import messages

# Create your views here.
class RegisterView(SuccessMessageMixin,CreateView):
    model = User
    form_class = RegisterForm
    success_url = reverse_lazy('login')
    template_name = 'auth_app/form.html'
    success_message = 'User Register Successfully Done!'

    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context['type'] = 'Register'
        return context

class UserLoginView(LoginView):
    form_class = AuthenticationForm
    template_name = 'auth_app/form.html'
    success_message = 'User Logged In Successful!'
    error_message = 'Please, provide valid user credentials!'

    def get_success_url(self):
        return reverse_lazy('home') #home page e redirect korte hbe
    
    def form_valid(self, form):
        messages.success(self.request, self.success_message)
        return super().form_valid(form)
    
    def form_invalid(self, form):
        messages.error(self.request, self.error_message)
        return super().form_invalid(form) 
    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context['type'] = 'Login'
        return context

class LogoutView(View):
    def get(self, request):
        logout(request)
        messages.success(self.request, 'Logged Out Successfully')
        return redirect('user_login')
        



