/*
// �������� ���ڷ� �޾Ƽ�
// - ���� ������ ���ϴ� �Լ�
// - ���� �ѷ��� ���ϴ� �Լ��� �ۼ��Ͻÿ�.

#include <stdio.h>
#define PI 3.14
float get_cir(float r);
float get_area(float r);
int main(void)
{
	float r;
	printf("������ �Է�: ");
	scanf("%f", &r);
	
	printf("�ѷ�: %f\n", get_cir(r));
	printf("����: %f\n", get_area(r));

	return 0;
}

float get_cir(float r)
{
	float result;
	
	result = 2 * PI * r;

	return result;
}

float get_area(float r)
{
	float result;

	result = PI * r * r;

	return result;
}
*/