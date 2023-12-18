from django.contrib import admin
from posts.models import PostsModel,Comments

# Register your models here.
admin.site.register(PostsModel)
admin.site.register(Comments)
