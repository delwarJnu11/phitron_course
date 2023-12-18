from django.db import models
from categories.models import CategoryModel
from django.contrib.auth.models import User

# Create your models here.
class PostsModel(models.Model):
    title = models.CharField(max_length=100)
    content = models.TextField()
    category = models.ManyToManyField(CategoryModel)
    author = models.ForeignKey(User, on_delete=models.CASCADE)
    image = models.ImageField(upload_to='posts/uploads/', blank=True, null= True)

    def __str__(self) -> str:
        return self.title
    
class Comments(models.Model):
    name = models.CharField(max_length = 50)
    email = models.EmailField()
    body = models.TextField()
    created_on = models.DateTimeField(auto_now_add = True)
    post = models.ForeignKey(PostsModel, on_delete = models.CASCADE, related_name = 'comments' )

    def __str__(self) -> str:
        return f'comment by {self.name}'