from django import forms 
from musicians_app.models import Musician

class MusiicanForm(forms.ModelForm):
    class Meta:
        model = Musician
        fields = '__all__'