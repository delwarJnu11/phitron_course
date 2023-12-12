from django import forms 
from album.models import Album

class AlbumForms(forms.ModelForm):
    class Meta:
        model = Album
        fields = '__all__'