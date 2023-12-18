from django.shortcuts import render
from datetime import datetime, timedelta

def set_cookie(request):
    response = render(request, 'set_cookie.html')
    response.set_cookie('name', 'delwar', expires=datetime.utcnow()+timedelta(days=10))
    return response

def get_cookie(request):
    cookie = request.COOKIES.get('name')
    return render(request, 'get_cookie.html', {'name': cookie})

def delete_cookie(request):
    response = render(request, 'del_cookie.html')
    response.delete_cookie('name')
    return response

def set_session(request):
    data = {
        'name': 'delwar',
        'age': 26,
        'language': 'Bangla'
    }
    request.session.update(data)
    return render(request, 'set_cookie.html')

def get_session(request):
    name = request.session.get('name')
    age = request.session.get('age')

    return render(request, 'get_cookie.html', {'name': name, 'age': age})

def delete_session(request):
    request.session.flush()
    return render(request, 'del_cookie.html')