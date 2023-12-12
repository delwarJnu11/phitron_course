from django.shortcuts import render,redirect
from category.forms import CategoryForm
# Create your views here.

# Add Category
def add_category(request):
    if request.method == 'POST':
        category_form = CategoryForm(request.POST)
        if category_form.is_valid():
            category_form.save()
            return redirect('home')
    else:
        category_form = CategoryForm()
        
    return render(request, 'category/add_category.html', {'form': category_form})