# Generated by Django 4.2.6 on 2023-12-04 08:10

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('model_form', '0001_initial'),
    ]

    operations = [
        migrations.AddField(
            model_name='students',
            name='father_name',
            field=models.CharField(default='Delwar', max_length=10),
        ),
    ]