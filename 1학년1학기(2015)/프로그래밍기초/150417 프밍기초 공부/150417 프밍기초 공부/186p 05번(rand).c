/*

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int computer, user;

	srand(time(NULL));
	computer = rand()%3;

	printf("����(1), ����(2), ��(3), ����(0) �� �� �� ����: ");
	scanf("%d", &user);

	switch(user)
	{
		case 1:
			printf("�����: ����, ");

			if (computer == 1)
			{
				printf("��ǻ��: ���� -> �����ϴ�.\n");
				break;
			}
			else if (computer == 2)
			{
				printf("��ǻ��: ���� -> �����ϴ�.\n");
				break;
			}
			else
			{
				printf("��ǻ��: �� -> �̰���ϴ�.\n");
				break;
			}

		case 2:
			printf("�����: ����, ");
			
			if (computer == 1)
			{
				printf("��ǻ��: ���� -> �̰���ϴ�.\n");
				break;
			}
			else if (computer == 2)
			{
				printf("��ǻ��: ���� -> �����ϴ�.\n");
				break;
			}
			else
			{
				printf("��ǻ��: �� -> �����ϴ�.\n");
				break;
			}

		case 3:
			printf("�����: ��, ");

			if (computer == 1)
			{
				printf("��ǻ��: ���� -> �����ϴ�.\n");
				break;
			}
			else if (computer == 2)
			{
				printf("��ǻ��: ���� -> �̰���ϴ�.\n");
				break;
			}
			else
			{
				printf("��ǻ��: �� -> �����ϴ�.\n");
				break;
			}

		default:
			printf("�����մϴ�.\n");
	}

	return 0;
}

*/