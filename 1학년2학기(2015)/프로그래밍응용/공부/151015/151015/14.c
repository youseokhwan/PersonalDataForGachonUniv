////302p 8��
//#include <stdio.h>
//#include <Windows.h>
//#define SIZE 10
//
//void menu();
//
//int main()
//{
//	int user_select, i, user_num;
//	int seat_num[SIZE] = {0, };
//
//	printf("�¼��� �����Ͻðڽ��ϱ�? (1 �Ǵ� 0) ");
//	scanf("%d", &user_select);
//
//	while (1)
//	{
//		if (user_select == 0)
//		{
//			printf("�����մϴ�.\n");
//			break;
//		}
//		else
//		{
//			menu();
//
//			for (i = 0; i < SIZE; i++)
//			{
//				printf("%d ", seat_num[i]);
//			}
//			printf("\n");
//
//			printf("\n�� ��° �¼��� �����Ͻðڽ��ϱ�? ");
//			scanf("%d", &user_num);
//
//			if (seat_num[user_num - 1] == 0)
//			{
//				seat_num[user_num - 1] += 1;
//				printf("\n����Ǿ����ϴ�.\n");
//				system("pause");
//			}
//			else
//			{
//				printf("\n�̹� ����� �¼��Դϴ�.\n");
//				system("pause");
//			}
//			
//			for (i = 0; i < SIZE; i++)
//			{
//				printf("%d ", seat_num[i]);
//			}
//		}
//	}
//
//	return 0;
//}
//
//void menu()
//{
//	int i;
//
//	system("cls");
//	printf("������ ���� ���´� ������ �����ϴ�.\n");
//	printf("--------------------\n");
//	printf("1 2 3 4 5 6 7 8 9 10\n");
//	printf("--------------------\n");
//}