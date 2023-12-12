from django.shortcuts import render,redirect
from posts.forms import Add_post_form
from posts.models import PostsModel

# Create your views here.
def add_post(request):
    if request.method == 'POST':
        post_form = Add_post_form(request.POST)
        if post_form.is_valid():
            post_form.save()
            return redirect('homepage')
    else:
        post_form = Add_post_form()

    return render(request, 'posts/add_post.html', {'form': post_form})


# Edit post 
def edit_post(request, id):
    post = PostsModel.objects.get(pk = id)
    post_form = Add_post_form(instance=post)

    if request.method == 'POST':
        post_form = Add_post_form(request.POST,instance=post)
        if post_form.is_valid():
            post_form.save()
            return redirect('homepage')
    return render(request, 'posts/add_post.html', {'form': post_form})

#Delete Post
def delete_post(request,id):
    post = PostsModel.objects.get(pk = id)
    post.delete()
    return redirect('homepage')
