from django.db import models
from author.models import AuthorModel

# Create your models here.

class ProfileModel(models.Model):
    name = models.CharField(max_length=100)
    about = models.TextField()
    author = models.OneToOneField(AuthorModel, on_delete=models.CASCADE, default = None)

    def __str__(self) -> str:
        return self.name
