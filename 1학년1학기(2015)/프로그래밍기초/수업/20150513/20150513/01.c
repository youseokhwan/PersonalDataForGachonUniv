/*
// ����ڷκ��� ���� n�� �Է¹޾�
// - 1���� n������ ���� for��
// - 1���� n������ Ȧ���� ���� while��
// - 1���� n������ ¦���� ���� do while������ �ۼ��Ͻÿ�

#include <stdio.h>
int main(void)
{
	int n, i, j, k, sum1, sum2, sum3;

	printf("���� n �Է�: ");
	scanf("%d", &n);

	sum1 = 0;
	for(i = 1; i <= n; i++)
		sum1 += i;
	printf("1���� n������ ���� %d�Դϴ�.\n", sum1);

	sum2 = 0;
	j = 1;
	while(j <= n)
	{
		if(j % 2 == 0)
			j++;
		else
		{
			sum2 += j;
			j++;
		}
	}
	printf("1���� n������ Ȧ���� ���� %d�Դϴ�.\n", sum2);

	sum3 = 0;
	k = 1;
	do
	{
		if(k % 2 == 0)
		{
			sum3 += k;
			k++;
		}
		else
			k++;
	}while(k <= n);
	printf("1���� n������ ¦���� ���� %d�Դϴ�.\n", sum3);

	return 0;
}
*/