//#include <stdio.h>
//
//int total = 0;
//void save(int amount);
//void draw(int amount);
//int main(void)
//{
//	int amount;
//
//	while (1)
//	{
//		printf("�󸶸� �����Ͻðڽ��ϱ�? (����� -1): ");
//		scanf("%d", &amount);
//
//		if (amount == -1)
//		{
//			printf("����\n");
//			break;
//		}
//
//		else if (amount >= 0)
//			save(amount);
//
//		else if (amount < 0)
//			draw(amount);
//	}
//
//	return 0;
//}
//void save(int amount)
//{
//	total += amount;
//	
//	printf("���ݱ��� �� ������� %d�Դϴ�.\n", total);
//}
//void draw(int amount)
//{
//	total += amount;
//	
//	printf("���ݱ��� �� ������� %d�Դϴ�.\n", total);
//}