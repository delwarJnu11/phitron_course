from django.urls import path
from first_app.views import home,form,model_form

urlpatterns = [
    path('', home, name='home'),
    path('form/', form, name='form'),
    path('model_form/', model_form, name='model_form'),
]
