from django.urls import path
# from namecard.views import NamecardLV, NamecardDV, SearchFormView  # 11장 주석처리
from namecard import views  # 11장 추가


app_name = 'namecard'
urlpatterns = [
    path('', views.NamecardLV.as_view(), name='index'),
    path('<int:pk>/', views.NamecardDV.as_view(), name='detail'),
    path('search/', views.SearchFormView.as_view(), name='search'),

    # 11장 추가
    path('add/', views.NamecardCreateView.as_view(), name='add'),
    path('change/', views.NamecardChangeLV.as_view(), name='change'),
    path('<int:pk>/update/', views.NamecardUpdateView.as_view(), name='update'),
    path('<int:pk>/delete/', views.NamecardDeleteView.as_view(), name='delete')
]
