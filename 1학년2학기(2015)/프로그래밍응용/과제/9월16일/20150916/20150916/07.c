//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int rand_num();
//int main (void)
//{
//	int game_num, i, com_num, user_select, count_win = 0, count_lose = 0;
//
//	printf("������ ����Ͻðڽ��ϱ�? ");
//	scanf("%d", &game_num);
//
//	for (i = 1; i <= game_num; i++)
//	{
//		printf("1. ��\n");
//		printf("2. ��\n");
//		printf("����: ");
//		scanf("%d", &user_select);
//
//		com_num = rand_num();
//
//		if (com_num == user_select)
//		{
//			printf("�����Դϴ�.\n");
//			count_win++;
//		}
//		else
//		{
//			printf("�����Դϴ�.\n");
//			count_lose++;
//		}
//	}
//	
//	printf("�¸�: %d, �й�: %d\n", count_win, count_lose);
//
//	return 0;
//}
//
//int rand_num()
//{
//	int i;
//
//	i = ((rand()%2) * time(NULL)) + 1;
//
//	return i;
//}