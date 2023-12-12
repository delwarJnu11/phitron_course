from django import forms 
from author.models import AuthorModel

class Add_author_form(forms.ModelForm):
    class Meta:
        model = AuthorModel
        fields = '__all__'
