from django.urls import path
from albums_app.views import AddCreateView,AlbumUpdateView,AlbumDeleteView

urlpatterns = [
    path('add_album/', AddCreateView.as_view(), name='add_album'),
    path('edit_album/<int:pk>/', AlbumUpdateView.as_view(), name='edit_album'),
    path('delete_album/<int:pk>/', AlbumDeleteView.as_view(), name='delete_album'),
]
