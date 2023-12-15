from django.contrib.auth.forms import UserCreationForm
from django.contrib.auth.models import User
from django import forms

class RegisterForm(UserCreationForm):
    first_name = forms.CharField(widget= forms.TextInput(attrs={'id': 'required', 'placeholder': 'Enter First Name...'}))
    last_name = forms.CharField(widget= forms.TextInput(attrs={'id': 'required', 'placeholder': 'Enter Last Name...'}))
    email = forms.CharField(widget= forms.EmailInput(attrs={'id': 'required', 'placeholder': 'Enter Email...'}))
    class Meta:
        model = User
        fields = ['username', 'first_name', 'last_name', 'email']
        widgets = {
            'username' : forms.TextInput(attrs={'placeholder': 'Enter Username...'}),
        }