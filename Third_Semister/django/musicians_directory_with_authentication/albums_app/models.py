from django.db import models
from musicians_app.models import Musician

# Create your models here.

class Album(models.Model):
    album_name = models.CharField(max_length = 50)
    release_date = models.DateField()
    RATINGS = [
        ('1', '1'),
        ('2', '2'),
        ('3', '3'),
        ('4', '4'),
        ('5', '5'),
    ] 
    ratings = models.CharField(max_length = 10,choices=RATINGS, default='5')
    
    musician = models.ForeignKey(Musician, on_delete = models.CASCADE)


    def __str__(self) -> str:
        return self.album_name
    
    
