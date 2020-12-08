from django.views.generic import ListView, DetailView, FormView
from bookmark.models import Bookmark
from bookmark.forms import BookmarkSearchForm
from django.db.models import Q
from django.shortcuts import render

# 11장 추가
from django.views.generic import CreateView, UpdateView, DeleteView
from django.contrib.auth.mixins import LoginRequiredMixin
from django.urls import reverse_lazy
from mysite.views import OwnerOnlyMixin


# Create your views here.
class BookmarkLV(ListView):
    model = Bookmark


class BookmarkDV(DetailView):
    model = Bookmark


#--- FormView
class SearchFormView(FormView):
    form_class = BookmarkSearchForm
    template_name = 'bookmark/bookmark_search.html'

    def form_valid(self, form):
        searchWord = form.cleaned_data['search_word']
        bookmark_list = Bookmark.objects.filter(Q(title__icontains=searchWord) | Q(url__icontains=searchWord)).distinct()

        context = {}
        context['form'] = form
        context['search_term'] = searchWord
        context['object_list'] = bookmark_list

        return render(self.request, self.template_name, context)


# 11장 추가
class BookmarkCreateView(LoginRequiredMixin, CreateView):
    model = Bookmark
    fields = ['title', 'url']
    success_url = reverse_lazy('bookmark:index')

    def form_valid(self, form):
        form.instance.owner = self.request.user
        return super().form_valid(form)

class BookmarkChangeLV(LoginRequiredMixin, ListView):
    template_name = 'bookmark/bookmark_change_list.html'

    def get_queryset(self):
        return Bookmark.objects.filter(owner=self.request.user)

class BookmarkUpdateView(OwnerOnlyMixin, UpdateView):
    model = Bookmark
    fields = ['title', 'url']
    success_url = reverse_lazy('bookmark:index')

class BookmarkDeleteView(OwnerOnlyMixin, DeleteView):
    model = Bookmark
    success_url = reverse_lazy('bookmark:index')
