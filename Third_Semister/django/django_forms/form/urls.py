from django.urls import path
from . import views

urlpatterns = [
    path('form_page/', views.form, name='form'),
    path('about/', views.about, name='about'),    
    path('django_form/', views.passwordMacthed, name='django_form'),
    # path('django_form/', views.student_form_info, name='django_form'),
    # path('django_form/', views.django_form, name='django_form'),
]
