from django import forms 
from posts.models import PostsModel,Comments

class Add_post_form(forms.ModelForm):
    class Meta:
        model = PostsModel
        exclude = ['author']

class CommentForm(forms.ModelForm):
    class Meta:
        model = Comments
        fields = ['name', 'email', 'body']