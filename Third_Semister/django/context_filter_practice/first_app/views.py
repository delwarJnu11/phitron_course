from django.shortcuts import render
import datetime
# Create your views here.

def about(request):
    data = {
        'name': 'delwar',
        'languages': ['I', 'Love','Python,', 'Javascript,', 'C++'],
        'date': datetime.datetime.now(),
        'nums': [1,2,3],
        'num': 20,
        'str': 'Python is fun',
        'person': [
            {'name': 'Josh', 'age': 19},
            {'name': 'Dave', 'age': 22},
            {'name': 'Joe', 'age': 31},
        ],

    }
    return render(request, 'first_app/about.html', data)

def contact(request):
    return render(request, 'first_app/contact.html')