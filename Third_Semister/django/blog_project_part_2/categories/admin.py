from django.contrib import admin
from categories.models import CategoryModel

# Register your models here.
class Category_admin(admin.ModelAdmin):
    prepopulated_fields = {'slug': ('category',)}
    list_display = ['category','slug']

admin.site.register(CategoryModel,Category_admin)