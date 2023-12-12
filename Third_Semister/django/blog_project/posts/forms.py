from django import forms 
from posts.models import PostsModel

class Add_post_form(forms.ModelForm):
    class Meta:
        model = PostsModel
        fields = '__all__'