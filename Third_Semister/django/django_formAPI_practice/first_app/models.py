from django.db import models

# Create your models here.

class Student_model(models.Model):
    auto_field = models.AutoField(primary_key=True)
    name = models.CharField(max_length=20)
    big_integer_field = models.BigIntegerField()
    comma_separated_field = models.CharField(
        max_length=255
    )
    date_field = models.DateField()
    decimal_field = models.DecimalField(max_digits=5, decimal_places=2)
    duration_field = models.DurationField()
    email_field = models.EmailField()
    file_field = models.FileField(upload_to='files/')
    float_field = models.FloatField()
    generic_ip_address_field = models.GenericIPAddressField()
    image_field = models.ImageField(upload_to='images/')
    positive_big_integer_field = models.PositiveBigIntegerField()
    slug_field = models.SlugField()
    url_field = models.URLField()
    uuid_field = models.UUIDField()
    boolean_field = models.BooleanField()
