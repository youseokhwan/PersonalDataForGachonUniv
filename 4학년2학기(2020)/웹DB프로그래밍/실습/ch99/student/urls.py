from django.urls import path
# from student.views import StudentLV, StudentDV, SearchFormView  # 11장 주석처리
from student import views  # 11장 추가

app_name = 'student'
urlpatterns = [
    path('', views.StudentLV.as_view(), name='index'),
    path('<int:pk>/', views.StudentDV.as_view(), name='detail'),
    path('search/', views.SearchFormView.as_view(), name='search'),

    # 11장 추가
    path('add/', views.StudentCreateView.as_view(), name='add'),
    path('change/', views.StudentChangeLV.as_view(), name='change'),
    path('<int:pk>/update/', views.StudentUpdateView.as_view(), name='update'),
    path('<int:pk>/delete/', views.StudentDeleteView.as_view(), name='delete')
]
