//#include <stdio.h>
//
//int add (int x, int y);
//int sub (int x, int y);
//int mul (int x, int y);
//int div (int x, int y);
//
//int main()
//{
//	int select, result;
//	int a, b;
//	int (*pf[4])(int, int) = {add, sub, mul, div};
//
//	printf("==========\n");
//	printf("0. ����\n");
//	printf("1. ����\n");
//	printf("2. ����\n");
//	printf("3. ������\n");
//	printf("4. ����\n");
//	printf("==========\n");
//	
//	printf("�޴� ����: ");
//	scanf("%d", &select);
//	
//	printf("���� 2�� �Է�: ");
//	scanf("%d %d", &a, &b);
//
//	result = pf[select](a, b);
//
//	printf("���� ���: %d\n", result);
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
