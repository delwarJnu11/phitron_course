from django.urls import path
from auth_practice.views import user_register,user_login,user_profile,user_logout,change_user_password

urlpatterns = [
    path('register/', user_register, name='register'),
    path('login/', user_login, name='login'),
    path('logout/', user_logout, name='logout'),
    path('profile/', user_profile, name='profile'),
    path('profile/change_password/', change_user_password, name='change_password'),
]
