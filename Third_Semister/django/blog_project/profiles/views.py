from django.shortcuts import render,redirect
from profiles.forms import Add_profile_form
# Create your views here.

def add_profile(request):
    if request.method == 'POST':
        profile_form = Add_profile_form(request.POST)
        if profile_form.is_valid():
            profile_form.save()
            return redirect('add_profile')
    else:
        profile_form = Add_profile_form()
    
    return render(request, 'profiles/add_profile.html', {'form': profile_form})