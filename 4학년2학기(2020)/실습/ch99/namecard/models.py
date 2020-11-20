from django.db import models
from django.contrib.auth.models import User  # 11장 추가


# Create your models here.
class Namecard_TBL(models.Model):
    name = models.CharField('NAME', max_length=100, blank=False)
    tel = models.CharField('MOBILE', max_length=50, blank=False)
    company = models.CharField('COMPANY', max_length=50, blank=True)
    email = models.EmailField('EMAIL', max_length=50, blank=True)
    group = models.CharField('Group', max_length=50, blank=True)
    create_dt = models.DateTimeField('CREATE DATE', auto_now_add=True)
    modify_dt = models.DateTimeField('MODIFY DATE', auto_now=True)
    birth_dt = models.DateTimeField('BIRTH DATE', auto_now=False)
    owner = models.ForeignKey(User, on_delete=models.CASCADE, blank=True, null=True)  # 11장

    def __str__(self):
        return self.name

    class Meta:
        ordering = ('group', 'name',)