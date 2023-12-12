from django.shortcuts import render,redirect
from author.forms import Add_author_form

# Create your views here.
def add_author(request):
    if request.method == 'POST':
        author_form = Add_author_form(request.POST)
        if author_form.is_valid():
            author_form.save()
            return redirect('add_author')
    else:
        author_form = Add_author_form()
    return render(request, 'author/add_author.html', {'form': author_form})