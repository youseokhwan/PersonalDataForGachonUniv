///*
//�迭 A[5][5]�� 1���� ���� �ְ� �����͸� �̿��Ͽ� �밢���� ���� ���϶�.
//*/
//
//#include <stdio.h>
//int main()
//{
//	int A[5][5] = {0, };
//	int i, j, num = 1, sum1 = 0, sum2 = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//			A[i][j] = num++;
//	}
//	
//	for (i = 0; i < 5; i++)
//		sum1 += A[i][i];
//
//	for (i = 0, j = 4; i < 5 && 0 <= j < 5; i++, j--)
//		sum2 += A[i][j];
//
//	printf("sum1 = %d\n", sum1);
//	printf("sum2 = %d\n", sum2);
//
//	return 0;
//}