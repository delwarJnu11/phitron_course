from django.urls import path
from auth_app.views import register,home,sign_in,profile,sign_out,change_password,set_password

urlpatterns = [
    path('', home, name='home'),
    path('register/', register, name='register'),
    path('sign_in/', sign_in, name='sign_in'),
    path('sign_out/', sign_out, name='sign_out'),
    path('profile/', profile, name='profile'),
    path('change_password/', change_password, name='change_password'),
    path('set_password/', set_password, name='set_password'),
]
