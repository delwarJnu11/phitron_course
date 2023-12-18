from django.db import models

# Create your models here.
class CategoryModel(models.Model):
    category = models.CharField(max_length=50)
    slug = models.SlugField(max_length=100, unique=True, null=True, blank=True)

    def __str__(self) -> str:
        return self.category