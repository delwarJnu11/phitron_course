# Generated by Django 5.0 on 2023-12-18 17:40

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('musicians_app', '0002_alter_musicians_phone'),
    ]

    operations = [
        migrations.CreateModel(
            name='Musician',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('first_name', models.CharField(max_length=50)),
                ('last_name', models.CharField(max_length=50)),
                ('email', models.EmailField(max_length=254)),
                ('phone', models.IntegerField()),
                ('instrument_type', models.CharField(max_length=50)),
            ],
        ),
        migrations.DeleteModel(
            name='Musicians',
        ),
    ]
