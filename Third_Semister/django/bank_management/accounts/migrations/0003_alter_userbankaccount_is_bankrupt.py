# Generated by Django 5.0 on 2023-12-28 11:47

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('accounts', '0002_userbankaccount_is_bankrupt'),
    ]

    operations = [
        migrations.AlterField(
            model_name='userbankaccount',
            name='is_bankrupt',
            field=models.BooleanField(default=False),
        ),
    ]
