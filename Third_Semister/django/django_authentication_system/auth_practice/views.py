from django.shortcuts import render,redirect
from auth_practice.forms import RegisterForm
from django.contrib import messages
from django.contrib.auth import authenticate,update_session_auth_hash,login,logout
from django.contrib.auth.forms import AuthenticationForm,PasswordChangeForm,SetPasswordForm
from django.contrib.auth.models import User
# Create your views here.

# Register User
def user_register(request):
    if request.method == 'POST':
        register_form = RegisterForm(request.POST)
        if register_form.is_valid():
            messages.success(request, 'User registration successful')
            register_form.save()
            return redirect('login')
    else:
        register_form = RegisterForm()

    return render(request, 'auth/form.html', {'form': register_form, 'type': 'Register'})

#Login User
def user_login(request):
    if request.method == 'POST':
        login_form = AuthenticationForm(request=request.user, data=request.POST)
        if login_form.is_valid():
            user_name = login_form.cleaned_data['username']
            user_pass = login_form.cleaned_data['password']
            user = authenticate(username = user_name, password = user_pass)
            if user is not None:
                login(request, user)
                messages.success(request, 'User Logged In successful')
                return redirect('profile') 
    else:
        login_form = AuthenticationForm()
    return render(request, 'auth/form.html', {'form': login_form, 'type': 'Login'})

# Profile
def user_profile(request):
    users = User.objects.all()
    return render(request, 'auth/profile.html',{'users': users})

# Change user Password with Old password
def change_user_password(request):
    if request.method == 'POST':
        form = PasswordChangeForm( request.user, data=request.POST)
        if form.is_valid():
            form.save()
            update_session_auth_hash(request, form.user)
            messages.success(request, 'Password Changed Successful.')
            return redirect('profile')
    else:
        form = PasswordChangeForm(request.user)
    return render(request, 'auth/form.html', {'form': form, 'type': 'Change Password'})

# set user Password without Old password
def set_user_password(request):
    if request.method == 'POST':
        form = SetPasswordForm(request.user, data=request.POST)
        if form.is_valid():
            form.save()
            messages.success(request, 'New Password Set Successful')
            update_session_auth_hash(request, form.user)
            return redirect('profile')
    else:
        form = SetPasswordForm(request.user)
    return render(request, 'auth/form.html', {'form': form, 'type': 'Set Password'})
# Logout
def user_logout(request):
    logout(request)
    messages.success(request, 'User LogOut Successful')
    return redirect('login')



