from django import forms 
from musician.models import Musicians

class MusiciansForm(forms.ModelForm):
    class Meta:
        model = Musicians
        fields = '__all__'
