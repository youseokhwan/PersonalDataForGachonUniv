//#include <stdio.h>
//void plus(int num1, int num2);
//void minus(int num1, int num2);
//void multiply(int num1, int num2);
//void divide(int num1, int num2);
//int main (void)
//{
//	int num1 = 0, num2 = 0;
//	char op = 0;
//
//	while(1)
//	{
//		printf("������ �Է��Ͻÿ�: ");
//		scanf("%d %c %d", &num1, &op, &num2);
//
//		if (op = '+')
//			plus(num1, num2);
//
//		else if (op = '-')
//			minus(num1, num2);
//
//		else if (op = '*')
//			multiply(num1, num2);
//		
//		else if (op = '/')
//			divide(num1, num2);
//	}
//
//	return 0;
//}
//void plus(int num1, int num2)
//{
//	static int p_count;
//
//	p_count++;
//
//	printf("���� ���: %d\n", num1 + num2);
//	printf("������ �� %d�� ����Ǿ����ϴ�.\n\n", p_count);
//}
//void minus(int num1, int num2)
//{
//	static int mi_count;
//
//	mi_count++;
//
//	printf("���� ���: %d\n", num1 - num2);
//	printf("������ �� %d�� ����Ǿ����ϴ�.\n\n", mi_count);
//}
//void multiply(int num1, int num2)
//{
//	static int mu_count;
//
//	mu_count++;
//
//	printf("���� ���: %d\n", num1 * num2);
//	printf("������ �� %d�� ����Ǿ����ϴ�.\n\n", mu_count);
//}
//void divide(int num1, int num2)
//{
//	static int d_count;
//
//	d_count++;
//
//	printf("���� ���: %d\n", num1 / num2);
//	printf("�������� �� %d�� ����Ǿ����ϴ�.\n\n", d_count);
//}