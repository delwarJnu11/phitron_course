from django.shortcuts import render,redirect
from album.forms import AlbumForms
from album.models import Album

# Create your views here.
def add_album(request):
    if request.method == 'POST':
        album_form = AlbumForms(request.POST)
        if album_form.is_valid():
            album_form.save()
            return redirect('home')
    else:
        album_form = AlbumForms()
    return render(request, 'album/add_album.html', {'form': album_form})

# Edit album information
def edit_album(request,id):
    album_data = Album.objects.get(pk=id)
    album_form = AlbumForms(instance=album_data)

    if request.method == 'POST':
         album_form = AlbumForms(request.POST, instance=album_data)
         if album_form.is_valid():
             album_form.save()
             return redirect('home')
         
    return render(request, 'album/add_album.html', {'form': album_form})

# Delete Album
def delete_album(request,id):
    album_data = Album.objects.get(pk=id)
    album_data.delete()
    return redirect('home')