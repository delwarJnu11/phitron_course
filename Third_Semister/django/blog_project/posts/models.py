from django.db import models
from categories.models import CategoryModel
from author.models import AuthorModel

# Create your models here.
class PostsModel(models.Model):
    title = models.CharField(max_length=100)
    content = models.TextField()
    category = models.ManyToManyField(CategoryModel)
    author = models.ForeignKey(AuthorModel, on_delete=models.CASCADE)

    def __str__(self) -> str:
        return self.title