from django.shortcuts import render,redirect
from . import models
# Create your views here.

def home(request):
    students = models.Students.objects.all()
    return render(request, 'model_form_app/home.html',{'students': students})

def delete_student(request, roll):
    models.Students.objects.get(pk = roll).delete()
    return redirect('home')
