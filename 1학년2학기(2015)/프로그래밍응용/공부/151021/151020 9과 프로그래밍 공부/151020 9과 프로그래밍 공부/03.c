//#include <stdio.h>
//
//void get(int num1, int num2, int *G);
//
//int main()
//{
//	int num1, num2, L, G;
//
//	printf("���� 2�� �Է�: ");
//	scanf("%d %d", &num1, &num2);
//
//	get(num1, num2, &G);
//	L = (num1 * num2) / G;
//
//	printf("�ִ� �����: %d\n", G);
//	printf("�ּ� �����: %d\n", L);
//
//	return 0;
//}
//
//void get(int num1, int num2, int *G)
//{
//	int r, temp;
//
//	if (num2 > num1)
//	{
//		temp = num1;
//		num1 = num2;
//		num2 = temp;
//	}
//
//	while (1)
//	{
//		if (num2 == 0)
//		{
//			*G = num1;
//			break;
//		}
//		else
//		{
//			r = num1 % num2;
//			num1 = num2;
//			num2 = r;
//		}
//	}
//}