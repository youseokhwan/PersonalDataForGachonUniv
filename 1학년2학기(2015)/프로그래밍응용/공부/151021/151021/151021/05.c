//#include <stdio.h>
//
//int add(int x, int y);
//int sub(int x, int y);
//int mul(int x, int y);
//int div(int x, int y);
//
//int main()
//{
//	int choice, a, b;
//	int (*pf[4])(int, int) = {add, sub, mul, div};
//
//	printf("0. ����\n");
//	printf("1. ����\n");
//	printf("2. ����\n");
//	printf("3. ������\n\n");
//	
//	printf("�޴� ����: ");
//	scanf("%d", &choice);
//
//	printf("���� 2�� �Է�: ");
//	scanf("%d %d", &a, &b);
//
//	printf("���: %d\n", pf[choice](a, b));
//
//	return 0;
//}
//
//int add (int x, int y)
//{
//	return x+y;
//}
//
//int sub (int x, int y)
//{
//	return x-y;
//}
//
//int mul (int x, int y)
//{
//	return x*y;
//}
//
//int div (int x, int y)
//{
//	return x/y;
//}