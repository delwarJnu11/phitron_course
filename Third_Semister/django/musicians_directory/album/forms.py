from django import forms 
from album.models import Album

class AlbumForms(forms.ModelForm):
    class Meta:
        model = Album
        fields = '__all__'
        widgets = {
            'release_date': forms.DateInput(attrs={'type': 'date'}),
        }