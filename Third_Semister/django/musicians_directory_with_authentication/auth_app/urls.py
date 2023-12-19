from django.urls import path
from auth_app.views import RegisterView, UserLoginView
# from django.contrib.auth.views import LogoutView
from . import views
from django.conf import settings

urlpatterns = [
    path('register/', RegisterView.as_view(), name='register' ),
    path('login/', UserLoginView.as_view(), name='user_login' ),
    path('logout/', views.LogoutView.as_view(), name='user_logout' ),
]
