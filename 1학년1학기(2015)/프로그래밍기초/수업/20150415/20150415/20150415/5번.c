/*
// 5��
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int a, b; //a�� ��ǻ�Ͱ� �� ��, b�� ����ڰ� �� ��

	loop:

		srand(time(NULL));
		a = rand()%3;

		printf("����(1), ����(2), ��(3) �� �ϳ��� �����Ͻÿ�(���ڸ� �Է�, ����(0)) : ");
		scanf("%d", &b);
	
		if(b == 1 && a == 0)
		{
			printf("����� : ����, ��ǻ�� : ���� -> �����ϴ�.\n");
			goto loop;
		}
		else if(b == 1 && a == 1)
		{
			printf("����� : ����, ��ǻ�� : ���� -> �̰���ϴ�.\n");
			goto loop;
		}
		else if(b == 1 && a == 2)
		{
			printf("����� : ����, ��ǻ�� : �� -> �����ϴ�.\n");
			goto loop;
		}

		else if(b == 2 && a == 0)
		{
			printf("����� : ����, ��ǻ�� : ���� -> �̰���ϴ�.\n");
			goto loop;
		}
		else if(b == 2 && a == 1)
		{
			printf("����� : ����, ��ǻ�� : ���� -> �����ϴ�.\n");
			goto loop;
		}
		else if(b == 2 && a == 2)
		{
			printf("����� : ����, ��ǻ�� : �� -> �����ϴ�.\n");
			goto loop;
		}

		else if(b == 3 && a == 0)
		{
			printf("����� : ��, ��ǻ�� : ���� -> �����ϴ�.\n");
			goto loop;
		}

		else if(b == 3 && a == 1)
		{
			printf("����� : ��, ��ǻ�� : ���� -> �̰���ϴ�.\n");
			goto loop;
		}
		else if(b == 3 && a == 2)
		{
			printf("����� : ��, ��ǻ�� : �� -> �����ϴ�.\n");
			goto loop;
		}

		else if(b == 0)
			printf("�����մϴ�.\n"); goto end;

	end:

	return 0;
}
*/