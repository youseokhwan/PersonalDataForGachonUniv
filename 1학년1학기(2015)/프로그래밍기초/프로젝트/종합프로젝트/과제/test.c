#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void start();
void end();
void updown_rule_explain();
void updown_select_menu();
void updown_o();
void updown_x();
void updown_end();
void sightcheck_rule();
void sightcheck_start();
void sightcheck_countdown();
void star_print();
void star_print2();
void star_print3();
void star_c_answer();
void star_w_answer();
void sightcheck_end();

int user_select, i, com_number, user_number, j, updown_score = 0;
int k, sightcheck_score = 0, star_number, l, star_answer;

int main(void)
{
	while (1)
	{
		start();

		if (user_select == 0)
			end();

		if (user_select == 1)
		{
			for (i = 1; i <= 5; i++)
			{
				updown_rule_explain();

				com_number = (rand() * time(NULL))%10 + 1;
				user_number = (rand() * time(NULL))%10 + 1;

				updown_select_menu();

				if (com_number > user_number)
				{
					if (j == 2)
						updown_o();
					else
						updown_x();
				}

				if (com_number < user_number)
				{ 
					if (j == 1)
						updown_o();
					else
						updown_x();
				}

				if (com_number == user_number)
				{
					if (j == 2)
						updown_o();
					else
						updown_x();
				}
			}

			updown_end();
		}

		if (user_select == 2)
		{
			for (k = 1; k <= 5; k++)
			{
				sightcheck_rule();
				printf("\n");
				system("pause");

				sightcheck_countdown();

				star_number = (rand() * time(NULL)) % 11 + 10;

				system("cls");
				sightcheck_rule();
				sightcheck_start();

				star_print2();

				star_print3();

				if (star_answer == star_number)
					star_c_answer();
				
				else
					star_w_answer();
			}

			sightcheck_end();
		}
	}

	return 0;
}

void start()
{
	printf("��������������\n");
	printf("��\t\t\t��\n");
	printf("��    <<MINI GAME>>     ��\n");
	printf("��\t\t\t��\n");
	printf("��������������\n\n");
	printf("1. Reverse Up-Down ����\n");
	printf("2. ��ü�÷� ��������\n");
	printf("0. ����\n\n");
	printf("������ �����ϼ���: ");
	scanf_s("%d", &user_select);
}

void end()
{
	system("cls");
	printf("������ �����մϴ�.\n\n"); exit(0);
}

void updown_rule_explain()
{
	system("cls");
	printf("<<Reverse Up-Down ����>>\n");
	printf("��ǻ���� ���ڸ� ���� �ڽ��� ���ڸ� �����Ͽ� �ڽ��� ���ڰ� ���ٰ� �����ϸ� 1����, ���ų� ���ٰ� �����ϸ� 2���� �����մϴ�.\n");
	printf("������ ���ڴ� �˷����� �ʽ��ϴ�.\n");
	printf("5�� �÷����ϸ�, ���߸� 1���� ȹ���մϴ�. ������ ������ 1~10�Դϴ�.\n");
}

void updown_select_menu()
{
	printf("\n���� %d / 5\t���� ���ھ�: %d\n\n", i, updown_score);
	printf("��ǻ���� ���ڴ� %d�Դϴ�.\n", com_number);
	printf("1. ������ ���ڰ� ��ǻ���� ���ں��� ����\n");
	printf("2. ������ ���ڰ� ��ǻ���� ���ں��� ���ų� ����\n");
	printf("����: ");
	scanf_s("%d", &j);
}

void updown_o()
{
	printf("\n�����Դϴ�. 1���� ȹ���ϼ̽��ϴ�.\n");
	printf("��ǻ�� ����: %d, ���� ����: %d\n\n", com_number, user_number);
	updown_score++;
	system("pause");
}

void updown_x()
{
	printf("\nƲ�Ƚ��ϴ�.\n");
	printf("��ǻ�� ����: %d, ���� ����: %d\n\n", com_number, user_number);
	system("pause");
}

void updown_end()
{
	system("cls");
	printf("<<Reverse Up-Down ����>> �������\n\n");
	printf("���� ������ %d�� �Դϴ�. ���ϵ帳�ϴ�.\n\n", updown_score);
	updown_score = 0;
	system("pause");
	system("cls");
}

void sightcheck_rule()
{
	system("cls");
	printf("<<��ü�÷� ��������>>\n");
	printf("ȭ�鿡 ��µ� ���� ������ ���ߴ� �����Դϴ�.\n");
	printf("3�ʵ��� ��µǸ� �� ������ ������ 10 ~ 20���Դϴ�.\n");
	printf("5�� �÷����ϸ�, ���߸� 1���� ȹ���մϴ�. EnterŰ�� ������ �����մϴ�.\n");
}

void sightcheck_start()
{
	printf("\n���� %d / 5\t ���� ���ھ�: %d\n\n", k, sightcheck_score);
}

void sightcheck_countdown()
{
	sightcheck_start();
	Sleep(1000);
	system("cls");

	sightcheck_rule();
	sightcheck_start();
	printf("�� ���� 3����...");
	Sleep(1000);
	system("cls");

	sightcheck_rule();
	sightcheck_start();
	printf("�� ���� 2����...");
	Sleep(1000);
	system("cls");

	sightcheck_rule();
	sightcheck_start();
	printf("�� ���� 1����...");
	Sleep(1000);
	system("cls");
}

void star_print()
{
	for (l = 1; l <= star_number; l++)
	{
		printf("��");
	}
}

void star_print2()
{
	star_print();
	Sleep(1000);
	system("cls");

	sightcheck_rule();
	sightcheck_start();
	star_print();
	printf("\t���� �ð�: 1��");
	Sleep(1000);
	system("cls");

	sightcheck_rule();
	sightcheck_start();
	star_print();
	printf("\t���� �ð�: 0��");
	Sleep(1000);
	system("cls");
}

void star_print3()
{
	system("cls");
	sightcheck_rule();
	sightcheck_start();
	printf("���� ����: ");
	scanf_s("%d", &star_answer);
}

void star_c_answer()
{
	sightcheck_score++;
	system("cls");
	sightcheck_rule();
	sightcheck_start();
	printf("�����Դϴ�!\n");
	printf("Enter�� ������ ���� ������ �����մϴ�.\n\n");
	system("pause");
	system("cls");
}

void star_w_answer()
{
	system("cls");
	sightcheck_rule();
	sightcheck_start();
	printf("Ʋ�Ƚ��ϴ�.\n");
	printf("Enter�� ������ ���� ������ �����մϴ�.\n\n");
	system("pause");
	system("cls");
}

void sightcheck_end()
{
	system("cls");
	printf("<<��ü�÷� ��������>> �������\n\n");
	printf("���� ������ %d�� �Դϴ�. ���ϵ帳�ϴ�.\n\n", sightcheck_score);
	sightcheck_score = 0;
	system("pause");
	system("cls");
}