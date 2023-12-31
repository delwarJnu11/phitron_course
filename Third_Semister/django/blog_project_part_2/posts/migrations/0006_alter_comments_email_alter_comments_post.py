# Generated by Django 5.0 on 2023-12-18 04:57

import django.db.models.deletion
from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('posts', '0005_alter_postsmodel_image_comments'),
    ]

    operations = [
        migrations.AlterField(
            model_name='comments',
            name='email',
            field=models.EmailField(max_length=254),
        ),
        migrations.AlterField(
            model_name='comments',
            name='post',
            field=models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, related_name='comments', to='posts.postsmodel'),
        ),
    ]
