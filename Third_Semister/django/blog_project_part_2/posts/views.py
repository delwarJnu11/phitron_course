from django.shortcuts import render,redirect
from django.urls import reverse_lazy
from posts.forms import Add_post_form,CommentForm
from posts.models import PostsModel
from django.contrib import messages
from django.contrib.auth.decorators import login_required
from django.utils.decorators import method_decorator
from django.views.generic import CreateView,UpdateView,DeleteView,DetailView
from django.contrib.messages.views import SuccessMessageMixin

# Create your views here.
@login_required
def add_post(request):
    if request.method == 'POST':
        post_form = Add_post_form(request.POST)
        if post_form.is_valid():
            post_form.instance.author = request.user
            post_form.save()
            messages.success(request, 'Post added successful')
            return redirect('homepage')
    else:
        post_form = Add_post_form()

    return render(request, 'posts/add_post.html', {'form': post_form})

@method_decorator(login_required, name='dispatch')
class AddPostView(SuccessMessageMixin,CreateView):
    model = PostsModel
    form_class = Add_post_form
    template_name = 'posts/add_post.html'
    success_url = reverse_lazy('homepage')
    success_message = "Post Added Successfully done!"
    def form_valid(self, form):
        form.instance.author = self.request.user
        return super().form_valid(form)



# Edit post 
@login_required
def edit_post(request, id):
    post = PostsModel.objects.get(pk = id)
    post_form = Add_post_form(instance=post)

    if request.method == 'POST':
        post_form = Add_post_form(request.POST,instance=post)
        if post_form.is_valid():
            post_form.instance.author = request.user
            post_form.save()
            return redirect('homepage')
    return render(request, 'posts/add_post.html', {'form': post_form})

@method_decorator(login_required, name='dispatch')
class EditPostView(UpdateView):
    model = PostsModel
    form_class = Add_post_form
    template_name = 'posts/add_post.html'
    pk_url_kwarg = 'id'
    success_url = reverse_lazy('profile')

#Delete Post
@login_required
def delete_post(request,id):
    post = PostsModel.objects.get(pk = id)
    post.delete()
    return redirect('homepage')

@method_decorator(login_required, name='dispatch')
class DeletePostView(DeleteView):
    model = PostsModel
    template_name = 'posts/delete.html'
    pk_url_kwarg = 'id'
    success_url = reverse_lazy('profile')

class DetailsPostView(DetailView):
    model = PostsModel
    template_name = 'posts/details_post.html'
    pk_url_kwarg = 'id'

    def post(self,request,*args, **kwargs):
        post = self.get_object()
        if self.request.method == 'POST':
            comment_form = CommentForm(data= self.request.POST)
            if comment_form.is_valid():
                new_comment = comment_form.save(commit=False)
                new_comment.post = post
                new_comment.save()
            return self.get(request,*args, **kwargs)

    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        post = self.object
        comments = post.comments.all()
        comment_form = CommentForm()
        
        context['post'] = self.get_object()
        context['comments'] = comments
        context['comment_form'] = comment_form

        return context
