from django.shortcuts import render
from .forms import ExampleForm,Student_form
# from .models import Student_model
# Create your views here.
def home(request):
    return render(request, 'first_app/home.html')

def form(request):
    if request.method == 'POST':
        form = ExampleForm(request.POST)
        if form.is_valid():
            print(form.cleaned_data)
    else:
        form = ExampleForm()
    return render(request, 'first_app/form.html', {'form': form})

def model_form(request):
    if request.method == 'POST':
        form = Student_form(request.POST)
        if form.is_valid():
            print(form.cleaned_data)
    else:
        form = Student_form
    return render(request, 'first_app/model_form.html', {'form': form})