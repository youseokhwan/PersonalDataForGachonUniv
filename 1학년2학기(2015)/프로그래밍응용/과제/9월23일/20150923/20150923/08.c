//#include <stdio.h>
//
//void print(int seat[], int n);
//
//int main(void)
//{
//	int answer1;
//	int answer2;
//	int seat[10] = {0};
//
//	while(1)
//	{		
//		printf("�¼��� �����Ͻðڽ��ϱ�?(0 �Ǵ� 1) ");
//		scanf("%d", &answer1);
//
//		if (answer1 == 1)
//		{
//			printf("���° �¼��� �����Ͻðڽ��ϱ�? ");
//			scanf("%d", &answer2);
//
//			if (answer2 >= 1 && answer2 <= 10)
//			{
//				if(seat[answer2-1] == 0)
//				{
//					seat[answer2-1] = 1;
//					printf("����Ǿ����ϴ�.\n");
//				}
//				else
//				{
//					printf("�̹� ����� �ڸ��Դϴ�. �ٸ� �¼��� �����ϼ���\n");
//				}
//
//				print(seat, 10);
//			}
//		}
//		else
//			break;
//	}
//
//	return 0;
//}
//
//void print(int seat[], int n)
//{
//	int i;
//
//	printf("-------------------------------\n");
//	printf("  1  2  3  4  5  6  7  8  9  10\n");
//	printf("-------------------------------\n");
//
//	for (i = 0; i < n; i++)
//	{
//		printf("  %d",seat[i]);
//	}
//
//	printf("\n\n");
//
//}
