# Generated by Django 5.0 on 2023-12-28 05:15

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('accounts', '0001_initial'),
    ]

    operations = [
        migrations.AddField(
            model_name='userbankaccount',
            name='is_bankrupt',
            field=models.BooleanField(blank=True, default=False, null=True),
        ),
    ]
