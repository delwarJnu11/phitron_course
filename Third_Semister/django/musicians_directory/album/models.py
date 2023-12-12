from django.db import models
from musician.models import Musicians

# Create your models here.
class Album(models.Model):
    album_name = models.CharField(max_length=100)
    release_date = models.DateField()
    rating = models.IntegerField()
    musician = models.ForeignKey(Musicians, on_delete=models.CASCADE)

    def __str__(self):
        return self.album_name
    
