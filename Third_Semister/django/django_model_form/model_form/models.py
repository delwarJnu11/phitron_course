from django.db import models

# Create your models here.

class Students(models.Model):
    name = models.CharField(max_length=10)
    roll = models.IntegerField(primary_key= True)
    address = models.TextField()
    father_name = models.CharField(max_length=10, default="Delwar")

    def __str__(self):
        return f'Roll: {self.roll} - {self.name}'
    