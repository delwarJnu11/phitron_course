# Generated by Django 4.2.6 on 2023-12-12 16:50

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('album', '0001_initial'),
    ]

    operations = [
        migrations.RemoveField(
            model_name='album',
            name='musician',
        ),
    ]
