from django.urls import path
from author.views import register,sign_in,profile,change_password,edit_profile,user_logout,UserLoginView
from django.contrib.auth.views import LogoutView

urlpatterns = [
    path('register/', register, name= 'register'),
    # path('login/', sign_in, name= 'login'),
    path('login/', UserLoginView.as_view(), name= 'login'),
    # path('logout/', user_logout, name= 'logout'),
    path('logout/', LogoutView.as_view(), name= 'logout'),
    path('profile/', profile, name= 'profile'),
    path('profile/edit_profile', edit_profile, name= 'edit_profile'),
    path('profile/edit_profile/change_password', change_password, name= 'change_password'),
]
