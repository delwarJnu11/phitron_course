from django.shortcuts import render
from django.views.generic import ListView
from albums_app.models import Album


class ShowAlbums(ListView):
    model = Album
    template_name = 'home.html'
    context_object_name = 'albums'

# def home(request):
#     return render(request, 'home.html')

