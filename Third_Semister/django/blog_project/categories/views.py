from django.shortcuts import render,redirect
from categories.forms import Add_category_form

# Create your views here.
def add_category(request):
    if request.method == 'POST':
        category_form = Add_category_form(request.POST)
        if category_form.is_valid():
            category_form.save()
            redirect('add_category')
    else:
        category_form = Add_category_form()
    return render(request, 'categories/add_category.html', {'form': category_form})