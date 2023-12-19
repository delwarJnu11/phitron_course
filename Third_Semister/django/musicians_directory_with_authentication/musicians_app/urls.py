from django.urls import path
from musicians_app.views import AddCreateView,UserUpdateView


urlpatterns = [
    path('add_musician/', AddCreateView.as_view(), name='add_musician'),
    path('edit_musician/<int:pk>/', UserUpdateView.as_view(), name='edit_musician'),
]
