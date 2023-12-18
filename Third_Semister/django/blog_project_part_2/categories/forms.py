from django import forms 
from categories.models import CategoryModel

class Add_category_form(forms.ModelForm):
    class Meta:
        model = CategoryModel
        fields = '__all__'