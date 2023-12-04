from django.shortcuts import render
from . forms import contactForm, studentInfo,passwordMatchedValidation

# Create your views here.

def about(request):
    if request.method == 'POST':
        name = request.POST.get('username')
        email = request.POST.get('useremail')
        
        return render(request, 'form_app/about.html' ,{'name': name, 'email': email})
    else:
        return render(request, 'form_app/about.html')

def form(request):
    return render(request, 'form_app/form.html')

def django_form(request):
    if request.method == 'POST':
        form = contactForm(request.POST, request.FILES)
        if form.is_valid():
            file = form.cleaned_data['file']
            with open('./form/upload/' + file.name, 'wb+') as destination:
                for chunk in file.chunks():
                    destination.write(chunk)
            print(form.cleaned_data)
            return render(request, 'form_app/django_form.html',{'forms': form})
    else:
        form = contactForm()
    return render(request, 'form_app/django_form.html',{'forms': form})

def student_form_info(request):
    if request.method == 'POST':
        student_form = studentInfo(request.POST)
        if student_form.is_valid():
            print(student_form.cleaned_data)
    else:
        student_form = studentInfo()

    return render(request, 'form_app/django_form.html', {'forms': student_form})

def passwordMacthed(request):
    if request.method == 'POST':
        student_form = passwordMatchedValidation(request.POST)
        if student_form.is_valid():
            print(student_form.cleaned_data)
    else:
        student_form = passwordMatchedValidation()

    return render(request, 'form_app/django_form.html', {'forms': student_form})