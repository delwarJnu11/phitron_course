from typing import Any
from django import forms
from django.core import validators

class contactForm(forms.Form):
    name = forms.CharField()
    file = forms.FileField()
    # email = forms.EmailField()
    # age = forms.IntegerField()
    # weight = forms.FloatField()
    # balance = forms.DecimalField()
    # date = forms.DateField()
    # date_time = forms.DateTimeField()
    # CHOICES = [('S', 'Small'), ('M', 'Medium'), ('L', 'Large')]
    # size = forms.ChoiceField(choices = CHOICES)
    # FOODS = [('P', 'Pepperoni'), ('B', 'Beef'), ('M', 'Mashroom')]
    # pizza = forms.MultipleChoiceField(choices=FOODS)
    # check = forms.BooleanField(label='Aceepet Terms and Conditions')

# class studentInfo(forms.Form):
#     name = forms.CharField(widget= forms.TextInput)
#     email = forms.EmailField(widget=forms.EmailInput)

    # def clean_name(self):
    #     user_name = self.cleaned_data['name']
    #     if len(user_name) < 10:
    #         raise forms.ValidationError('Name Must be 6 characters or more!')
    #     return user_name
    
    # def clean_email(self):
    #     user_email = self.cleaned_data['email']
    #     if '.com' not in user_email:
    #         raise forms.ValidationError('Invalid email! Please provide  a valid email!')
    #     return user_email

    # def clean(self):
    #     cleaned_data = super().clean()
    #     name = cleaned_data.get('name')
    #     email = cleaned_data.get('email')

    #     if len(name) <= 6:
    #         raise forms.ValidationError('Name Must be 6 characters or more !!!')
        
    #     if '.com' not in email:
    #         raise forms.ValidationError('Invalid Email !! Please provide a valid Email !!!')

# built in validators 
class studentInfo(forms.Form):
    name = forms.CharField(widget=forms.TextInput, validators=[validators.MinLengthValidator(10, message='Enter a name with at least 10 characters')])
    email = forms.CharField(widget=forms.EmailInput, validators=[validators.EmailValidator(message = 'Enter a valid email')])
    age = forms.IntegerField(validators=[validators.MaxValueValidator(50, message = 'You can not add age more than 50'), validators.MinValueValidator(18, message= 'You can not Resgister under 18')] )

class passwordMatchedValidation(forms.Form):
    name = forms.CharField(widget= forms.TextInput)
    password = forms.CharField(widget= forms.PasswordInput)
    confirm_password = forms.CharField(widget= forms.PasswordInput)

    def clean(self):
        cleaned_data = super().clean()
        # user_name = self.cleaned_data['name']
        # user_password = self.cleaned_data['password']
        # user_confirm_password = self.cleaned_data['confirm_password']
        user_name = cleaned_data.get('name')
        user_password = cleaned_data.get('password') 
        user_confirm_password = cleaned_data.get('confirm_password')

        if user_password != user_confirm_password:
            raise forms.ValidationError('Password does not matched!!!')
        
        if len(user_name) < 10:
            raise forms.ValidationError('Name Must be at least 10 characters!')