from django.shortcuts import render
from posts.models import PostsModel
from categories.models import CategoryModel

def home(request,category_slug=None):
    data = PostsModel.objects.all()
    if category_slug is not None:
        category = CategoryModel.objects.get(slug = category_slug)
        data = PostsModel.objects.filter(category = category)
    categories = CategoryModel.objects.all()
    return render(request, 'home.html', {'posts': data, 'categories':categories})