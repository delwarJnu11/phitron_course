from django.db import models

# Create your models here.
class CategoryModel(models.Model):
    category = models.CharField(max_length=50)

    def __str__(self) -> str:
        return self.category