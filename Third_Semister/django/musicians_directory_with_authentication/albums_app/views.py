from django.shortcuts import render
from albums_app.forms import AlbumForm
from django.views.generic import CreateView,UpdateView,DeleteView
from albums_app.models import Album
from django.urls import reverse_lazy
from django.contrib import messages

# Create your views here.
class AddCreateView(CreateView):
    model = Album
    form_class = AlbumForm
    template_name = 'albums_app/add_album.html'
    success_url = reverse_lazy('home')
    

    def form_invalid(self, form):
        messages.error(self.request, 'There is something wrong!')
        return super().form_invalid(form)
    
    def form_valid(self, form):
        messages.success(self.request, 'Album added successfully!')
        return super().form_valid(form)
    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context["type"] = "Add"
        return context
    
    
class AlbumUpdateView(UpdateView):
    model = Album
    form_class = AlbumForm
    template_name = 'albums_app/add_album.html'
    success_url = reverse_lazy('home')

    def form_invalid(self, form):
        messages.error(self.request, 'There is something wrong update album!')
        return super().form_invalid(form)
    
    def form_valid(self, form):
        messages.success(self.request, 'Album updated successfully!')
        return super().form_valid(form)
    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context["type"] = "Update"
        return context
    

class AlbumDeleteView(DeleteView):
    model = Album
    template_name = 'albums_app/delete.html'
    success_url = reverse_lazy('home')

    def form_invalid(self, form):
        messages.error(self.request, 'There is something wrong delete album!')
        return super().form_invalid(form)
    
    def form_valid(self, form):
        messages.success(self.request, 'Album deleted successfully!')
        return super().form_valid(form)
    