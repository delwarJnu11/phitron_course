from django import forms
from profiles.models import ProfileModel

class Add_profile_form(forms.ModelForm):
    class Meta:
        model = ProfileModel
        fields = '__all__'