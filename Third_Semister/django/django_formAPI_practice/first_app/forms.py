from django import forms
from .models import Student_model
import datetime

class ExampleForm(forms.Form):
    name = forms.CharField(max_length=10)
    email = forms.CharField(widget=forms.EmailInput)
    date = forms.DateField(widget= forms.NumberInput(attrs={'type': 'date'}), initial=datetime.date.today)
    BIRTH_YEAR_CHOICES = ['1980', '1981', '1982']
    birth_year = forms.DateField(widget= forms.SelectDateWidget(years = BIRTH_YEAR_CHOICES))
    decimal = forms.DecimalField()
    FAVORITE_COLORS_CHOICES = [
    ('blue', 'Blue'),
    ('green', 'Green'),
    ('black', 'Black'),
]
    favourite_color = forms.ChoiceField(widget= forms.RadioSelect,choices= FAVORITE_COLORS_CHOICES)
    favourite_colors = forms.MultipleChoiceField(widget= forms.CheckboxSelectMultiple,choices=FAVORITE_COLORS_CHOICES)
    check = forms.BooleanField(label='Are you agree with our terms and condition?')

class Student_form(forms.ModelForm):
    class Meta:
        model = Student_model
        fields = '__all__'
        labels = {
            'name': 'Full Name',
            'age': 'Age',
            'boolean_field': 'Is Student Active?',
        }
        widgets = {
            'name': forms.TextInput(attrs={'placeholder': 'Enter your name'}),
            'slug_field': forms.TextInput(attrs={'placeholder': 'Enter your slug'}),
            'big_integer_field': forms.TextInput(attrs={'placeholder': 'Enter Big Integer'}),
            'date_field': forms.DateInput(attrs={'type' : 'date'})
        }