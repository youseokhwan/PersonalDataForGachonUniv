//#include <stdio.h>
//
//void func1 (int score[][3]);
//void func2 (int score[][3]);
//
//int main(void)
//{
//	int i, k;
//	int score[10][3];
//	for(i = 0; i < 10; i++)
//	{
//		for (k = 0; k < 3; k++)
//		{
//			printf("�л� %d, %d��° ����: ", i+1, k+1);
//			scanf("%d", &score[i][k]);
//		}
//	}
//
//	func1 (score);
//	func2 (score);
//
//	return 0;
//}
//
//void func1(int score[][3])
//{
//	int i, k, min, max, sum;
//
//	for(k = 0; k < 3; k++)
//	{
//		min = max = score[0][k];
//		sum = 0;
//
//		for (i = 0; i < 10; i++)
//		{
//			if (score[i][k] < min)
//				min=score[i][k];		
//			if (score[i][k] > min)
//				max=score[i][k];		
//			sum += score[i][k];
//		}
//
//		printf("�ִ����� = %d\n", max);
//		printf("�������� = %d\n", min);
//		printf("������� = %f\n", sum / (3.0 * 10));
//	}
//}
//
//void func2 (int score[][3])
//{
//	int i, k, min, max, sum;
//
//	for (i = 0; i < 10; i++)
//	{
//		min = max = score[i][0];
//		sum = 0;
//
//		for (k = 0; k < 3; k++)
//		{
//			if (score[i][k] < min)
//				min=score[i][k];		
//			if (score[i][k] > min)
//				max=score[i][k];		
//			sum += score[i][k];
//		}
//
//		printf("�ִ�����=%d\n", max);
//		printf("��������=%d\n", min);
//		printf("�������=%f\n", sum/(3.0*10));
//	}
//}