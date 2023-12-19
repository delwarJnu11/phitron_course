from django.shortcuts import render
from musicians_app.models import Musician
from musicians_app.forms import MusiicanForm
from django.contrib import messages
from django.urls import reverse_lazy
from django.views.generic import CreateView,UpdateView

# Create your views here.
class AddCreateView(CreateView):
    model = Musician
    form_class = MusiicanForm
    template_name = 'musicians/add_musician.html'
    success_url = reverse_lazy('home')

    def form_valid(self, form):
        messages.success(self.request, 'Musicain added succesfully')
        return super().form_valid(form)
    
    def form_invalid(self, form):
        messages.error(self.request, 'There is something wrong!')
        return super().form_invalid(form)
    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context["type"] = 'Add'
        return context
    
    
class UserUpdateView(UpdateView):
    model = Musician
    form_class = MusiicanForm
    template_name = 'musicians/add_musician.html'
    success_url = reverse_lazy('home')

    def form_valid(self, form):
        messages.success(self.request, 'Musicain Updated succesfully')
        return super().form_valid(form)
    
    def form_invalid(self, form):
        messages.error(self.request, 'There is something wrong in update musician!')
        return super().form_invalid(form)
    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context["type"] = 'Update'
        return context
    
    