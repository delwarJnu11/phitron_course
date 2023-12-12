from django.shortcuts import render
from posts.models import PostsModel

def home(request):
    data = PostsModel.objects.all()
    return render(request, 'home.html', {'posts': data})