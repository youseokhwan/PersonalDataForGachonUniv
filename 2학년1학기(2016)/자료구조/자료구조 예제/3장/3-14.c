//#include <stdio.h>
//
//long int fact(int);
//
//void main()
//{
//	int n, result;
//	
//	printf("������ �Է��ϼ���: ");
//	scanf("%d", &n);
//	result = fact(n);
//	printf("%d�� factorial ���� %ld�Դϴ�.\n", n, result);
//}
//
//long int fact(int n)
//{
//	int value;
//	
//	if (n <= 1)
//	{
//		printf("fact(1) �Լ� ȣ��!\n");
//		printf("fact(1) �� 1 ��ȯ!\n");
//
//		return 1;
//	}
//	else
//	{
//		printf("fact(%d) �Լ� ȣ��!\n", n);
//		value = (n * fact(n - 1));
//		printf("fact(%d) �� %ld ��ȯ!\n", n, value);
//
//		return value;
//	}
//}