/*
// ����ڷκ��� �޴� ��ȣ�� �Է¹޾Ƽ� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// 1. Ȧ�� ¦�� Ȯ��
// 2. n������ �հ� ���ϱ�
// 3. n ���丮�� ���ϱ�(n!)
// 0. ����

#include <stdio.h>
int main(void)
{
	int select, n, i, j, sum1 = 0, sum2 = 1;

	while(1)
	{
		printf("1. Ȧ�� ¦�� Ȯ��\n");
		printf("2. n������ �հ� ���ϱ�\n");
		printf("3. n ���丮�� ���ϱ�\n");
		printf("0. ����\n\n");
	
		printf("����: ");
		scanf("%d", &select);
		
		if(select == 0)
		{
			printf("�����մϴ�.\n");
			break;
		}
		else
		{
			printf("������ �Է��Ͻÿ�: ");
			scanf("%d", &n);

			if(select == 1)
			{
				if(n % 2 == 0)
					printf("n�� ¦���Դϴ�.\n\n");
				else
					printf("n�� Ȧ���Դϴ�.\n\n");
			}	
			else if(select == 2)
			{
				for(i = 1; i <= n; i++)
					sum1 += i;
				printf("1���� n������ ���� %d�Դϴ�.\n\n", sum1);
			}
			else if(select == 3)
			{
				for(j = 1; j <= n; j++)
					sum2 *= j;
				printf("n ���丮���� %d�Դϴ�.\n\n", sum2);
			}
		}
	}

	return 0;
}
*/