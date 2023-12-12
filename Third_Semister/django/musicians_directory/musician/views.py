from django.shortcuts import render,redirect
from musician.forms import MusiciansForm
from musician.models import Musicians
# Create your views here.
def add_musician(request):
    if request.method == 'POST':
        musician_form = MusiciansForm(request.POST)
        if musician_form.is_valid():
            musician_form.save()
            return redirect('add_musician')
    else:
        musician_form = MusiciansForm()
    
    return render(request, 'musician/add_musician.html', {'form': musician_form})

# Edit Musician Informaion
def edit_musician(request,id):
    musician_data = Musicians.objects.get(pk=id)
    musician_form = MusiciansForm(instance=musician_data)

    if request.method == 'POST':
        musician_form = MusiciansForm(request.POST, instance=musician_data)
        if musician_form.is_valid():
            musician_form.save()
            return redirect('home')
        
    return render(request, 'musician/add_musician.html', {'form': musician_form})
