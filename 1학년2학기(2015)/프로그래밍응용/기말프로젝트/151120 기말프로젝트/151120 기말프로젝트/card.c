#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <string.h>

#define PRODUCTIONMODE // ���δ��Ǹ�� ���� �� �ּ� ����
//#define TESTMODE // �׽�Ʈ��� ���� �� �ּ� ���� (�����)

// �޴�, �� ��
void menu();
void rules();

void present_money(); // �� ǥ���ϴ� �Լ�

// �¸� �� ����Լ�
void com_win();
void com_win2();
void user_win();
void user_win2();

// ��ǻ�� ������� �Լ�
void st_flush_c();
void fourcard_c();
void fullhouse_c();
void flush_c();
void straight_c();
void triple_c();
void two_pair_c();
void one_pair_c();
void high_card_c();

// ���� ������� �Լ�
void st_flush_u();
void fourcard_u();
void fullhouse_u();
void flush_u();
void straight_u();
void triple_u();
void two_pair_u();
void one_pair_u();
void high_card_u();

char *card[4][13] = { "��A", "��2", "��3", "��4", "��5", "��6", "��7", "��8", "��9", "��10", "��J", "��Q", "��K"
					,"��A", "��2", "��3", "��4", "��5", "��6", "��7", "��8", "��9", "��10", "��J", "��Q", "��K"
					,"��A", "��2", "��3", "��4", "��5", "��6", "��7", "��8", "��9", "��10", "��J", "��Q", "��K"
					,"��A", "��2", "��3", "��4", "��5", "��6", "��7", "��8", "��9", "��10", "��J", "��Q", "��K" };
int com_money = 10, user_money = 10, match_money = 0; // ��ǻ��, ������ �����ݾ� �� �ǵ�
double com_comp = 0.0, user_comp = 0.0; // ������ ���ϱ� ���� �ӽ� ����

int *handcard[10]; // 0~4�� ��ǻ���� ��, 5~9�� ������ ��
int *handcard2[5]; // ������ �� ���� �и�
int *check[10] = { NULL }; // check �迭�� ī�尡 �ߺ������ʱ� ���� ���

char treename_com[100] = { NULL }; // ��ǻ���� ������ �̸��� �����ϴ� �迭
char treename_user[100] = { NULL }; // ������ ������ �̸��� �����ϴ� �迭

int main(void)
{
#ifdef TESTMODE
	system("color 0E");
#endif

	srand((unsigned)time(NULL)); // ���� ��ġ

#ifdef TESTMODE
	int k;

	for (k = 0; k < 52; k++)
		printf("%s %d\n", *(card[0] + k), card[0][0] + k); // ��ü ī�� �� ���� �ּ� ���
	printf("�׽�Ʈ ����Դϴ�.\n");
	system("pause");
#endif

	int menu_select, game_stacks = 0, card_select, temp, bet_select; //menu_select�� �޴� ����, gamestacks�� �Ǽ�, card_select�� ����ī�� ����, bet_select�� ���� ����
	int i, l, m, n, o; // for���� ����ϴ� ����
	
	menu(); // �޴� ��� (���� ���� or ����)
	scanf("%d", &menu_select); // menu_select �Է¹���

	if (menu_select == 2) // 2. ���Ḧ �����ϸ� ���α׷� ����
	{
		printf("\n�����մϴ�.\n\n");
		exit(0); // ���������� ����
	}
	else if (menu_select != 1 && menu_select != 2) // 1, 2 �̿��� ���� �� �����޽��� ��� �� ���α׷� ����
	{
		printf("\n�߸��� �Է��Դϴ�.\n\n");
		exit(1); // ������������ ����
	}

	rules(); // �� �� ���� ���

	while (1)
	{
		game_stacks++; // �Ǽ� ����

		if (com_money <= 0) // ��ǻ���� ���� 0���� �Ǹ� ������ �¸��� ����
		{
			system("cls");
			for (i = 0; i < 2; i++)
			{
				user_win();
				Sleep(500);
				user_win2();
				Sleep(500);
			}

			exit(0); // �������� ����
		}

		if (user_money <= 0) // ������ ���� 0���� �Ǹ� ��ǻ���� �¸��� ����
		{
			system("cls");
			for (i = 0; i < 2; i++)
			{
				com_win();
				Sleep(500);
				com_win2();
				Sleep(500);
			}

			exit(0); // �������� ����
		}

		system("cls"); // �ܼ�ȭ�� �ʱ�ȭ
		printf("Game %d\n", game_stacks); // ���� �� �� �ߴ��� ǥ��

		present_money(); // ���� ��ǻ�Ϳ� ������ ���� ���� ǥ��

#ifdef PRODUCTIONMODE
		for (l = 0; l < 5; l++) // computer �迭�� card�� ���ҵ� ������ ��ġ
		{
			handcard[l] = &card[0][0] + rand() % 52; // ��ǻ�� �� ���� ��ġ
			for (n = 0; n < l; n++)
			{
				if (handcard[l] == check[n])
				{
					l--;
					break;
				}
			}

			check[l] = handcard[l]; // �ߺ� �����ϱ����� check �迭�� ����
		}

		for (l = 0; l < 5; l++) // user �迭�� card�� ���ҵ� ������ ��ġ
		{
			handcard[l + 5] = &card[0][0] + rand() % 52; // ���� �� ���� ��ġ

			for (n = 0; n < 10; n++) // �ߺ��Ǵ��� �˻��ϰ� �ߺ��Ǹ� l--
			{
				if (handcard[l + 5] == check[n])
				{
					l--;
					break;
				}
			}

			check[l + 5] = handcard[l + 5]; // �ߺ��� �����ϱ����� check �迭�� ���� �� ����
		}
#endif

#ifdef TESTMODE
		// ī�� ��ġ ���Ƿ� �׽�Ʈ
		handcard[0] = &card[0][1];
		handcard[1] = &card[1][1];
		handcard[2] = &card[2][1];
		handcard[3] = &card[3][1];
		handcard[4] = &card[0][4];

		handcard[5] = &card[3][3];
		handcard[6] = &card[3][2];
		handcard[7] = &card[3][7];
		handcard[8] = &card[3][11];
		handcard[9] = &card[3][6];
#endif

		for (o = 0; o < 5; o++)
		{
			handcard2[o] = handcard[o + 5]; // ����� ���ϰ� �ϱ� ���� ��ǻ��, ������ �� ���� �迭�� �и�
		}

		printf("�ǵ����� 1�� ����\n\n"); // �ǵ� 1���� ����

		if (com_money <= 0)
		{
			com_money = 0;
			user_money--;
			match_money++;
		}
		else if (user_money <= 0)
		{
			com_money--;
			user_money = 0;
			match_money++;
		}
		else
		{
			com_money--;
			user_money--;
			match_money += 2;
		}

		system("pause");

		system("cls");

		printf("Game %d\n", game_stacks); // ���� �� �� �ߴ��� ǥ��
		present_money(); // ���� ��ǻ�Ϳ� ������ ���� ���� ǥ��

		printf("��ǻ���� ��: (??) (??) %s\n", *handcard[2]);
		printf("������ ��: (%s) (%s) %s\n\n", *handcard2[0], *handcard2[1], *handcard2[2]);

		printf("1. ����(1�� ����)\n");
		printf("2. ���(���)\n\n");

		printf("����(�߸��� �Է� �� ���): ");
		scanf("%d", &bet_select);

		if (bet_select == 2 || bet_select != 1) // 1�� �ƴ� �ٸ� ���� �������� ���
		{
			printf("\n���. ��ǻ�� �¸�\n");
			com_money = com_money + match_money;
			match_money = 0;

			system("pause");
		}
		else
		{
			if (com_money <= 0) // ���� 0�� �̸��� �� �� �����Ƿ� 0������ ����
			{
				com_money = 0;
				user_money--;
				match_money++;
			}
			else if (user_money <= 0) // ���� 0�� �̸��� �� �� �����Ƿ� 0������ ����
			{
				com_money--;
				user_money = 0;
				match_money++;
			}
			else
			{
				com_money--;
				user_money--;
				match_money += 2;
			}

			system("cls");

			printf("Game %d\n", game_stacks); // ���� �� �� �ߴ��� ǥ��
			present_money(); // ���� ��ǻ�Ϳ� ������ ���� ���� ǥ��

			printf("��ǻ���� ��: (??) (??) %s %s\n", *handcard[2], *handcard[3]); // ()�� ����� ��
			printf("������ ��: (%s) (%s) %s %s\n\n", *handcard2[0], *handcard2[1], *handcard2[2], *handcard2[3]);

			printf("1. ����(1�� ����)\n");
			printf("2. ���(���)\n\n");

			printf("����(�߸��� �Է� �� ���): ");
			scanf("%d", &bet_select);

			if (bet_select == 2 || bet_select != 1) // 2�� �ƴ� ���� �������� �� ���
			{
				printf("\n���. ��ǻ�� �¸�\n");
				com_money = com_money + match_money;
				match_money = 0;

				system("pause");
			}
			else
			{
				if (com_money <= 0) // ���� 0�� �̸��� �� �ʿ䰡 �����Ƿ� 0������ ����
				{
					com_money = 0;
					user_money--;
					match_money++;
				}
				else if (user_money <= 0) // ���� 0�� �̸��� �� �ʿ䰡 �����Ƿ� 0������ ����
				{
					com_money--;
					user_money = 0;
					match_money++;
				}
				else
				{
					com_money--;
					user_money--;
					match_money += 2;
				}

				system("cls");

				printf("Game %d\n", game_stacks); // ���� �� �� �ߴ��� ǥ��
				present_money(); // ���� ��ǻ�Ϳ� ������ ���� ���� ǥ��

				printf("��ǻ���� ��: (??) (??) %s %s (??)\n", *handcard[2], *handcard[3]); // ()�� ����� ��
				printf("������ ��: (%s) (%s) %s %s (%s)\n\n", *handcard2[0], *handcard2[1], *handcard2[2], *handcard2[3], *handcard2[4]);

				printf("1. ����\n");
				printf("2. ���(���)\n\n");

				printf("����(�߸��� �Է� �� ���): ");
				scanf("%d", &bet_select);

				if (bet_select == 2 || bet_select != 1) // 2�� �ƴ� ���� ���� �� ���
				{
					printf("\n���. ��ǻ�� �¸�\n");
					com_money += match_money;
					match_money = 0;

					system("pause");
				}

				else
				{
					high_card_c(); // ��ǻ�� ���� ���
					one_pair_c();
					two_pair_c();
					triple_c();
					straight_c();
					flush_c();
					fullhouse_c();
					fourcard_c();
					st_flush_c();

					high_card_u(); // ���� ���� ���
					one_pair_u();
					two_pair_u();
					triple_u();
					straight_u();
					flush_u();
					fullhouse_u();
					fourcard_u();
					st_flush_u();

					system("cls");
					printf("Game %d\n", game_stacks); // ���� �� �� �ߴ��� ǥ��
					present_money(); // ���� ��ǻ�Ϳ� ������ ���� ���� ǥ��

					printf("<���>\n\n");

					if (com_comp > user_comp)
					{
						printf("��ǻ���� �¸��Դϴ�.\n\n");
						com_money += match_money;
						match_money = 0;
					}
					else
					{
						printf("������ �¸��Դϴ�.\n\n");
						user_money += match_money;
						match_money = 0;
					}

					printf("��ǻ���� ��: "); // ��ǻ���� �� ���
					for (m = 0; m < 5; m++)
						printf("%s ", *handcard[m]);

#ifdef TESTMODE
					printf("\t%.2lf\t", com_comp);
#endif

					printf("\t  %s\n", treename_com);

					printf("  ������ ��: "); // ������ �� ���
					for (m = 0; m < 5; m++)
						printf("%s ", *handcard[m + 5]);

#ifdef TESTMODE
					printf("\t%.2lf\t", user_comp);
#endif

					printf("\t  %s\n", treename_user);

					printf("\n");

					system("pause");
				}
			}
		}
	}

	return 0;
}

void st_flush_c() // ��Ʈ����Ʈ�÷������� �˻��ϴ� �Լ�
{
	int stacks = 0, max, i;

	max = handcard[0];

	for (i = 0; i < 5; i++)
	{
		if (handcard[i] > max)
			max = handcard[i];
	}

	for (i = 0; i < 5; i++)
	{
		if (handcard[i] == max - 4)
			stacks++;
		if (handcard[i] == max - 8)
			stacks++;
		if (handcard[i] == max - 12)
			stacks++;
		if (handcard[i] == max - 16)
			stacks++;
	}

	if (stacks == 4)
	{
		com_comp = 8.0;
		strcpy(treename_com, "Straight Flush");
	}
}

void st_flush_u() // ��Ʈ����Ʈ�÷������� �˻��ϴ� �Լ�
{
	int stacks = 0, max, i;

	max = handcard2[0];

	for (i = 0; i < 5; i++)
	{
		if (handcard2[i] > max)
			max = handcard2[i];
	}

	for (i = 0; i < 5; i++)
	{
		if (handcard2[i] == max - 4)
			stacks++;
		if (handcard2[i] == max - 8)
			stacks++;
		if (handcard2[i] == max - 12)
			stacks++;
		if (handcard2[i] == max - 16)
			stacks++;
	}

	if (stacks == 4)
	{
		user_comp = 8.0;
		strcpy(treename_user, "Straight Flush");
	}
}

void fourcard_c() // ��ī������ �˻��ϴ� �Լ�
{
	int stacks = 0, i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 4; j > i; j--)
		{
			if ((handcard[i] - handcard[j]) % 13 == 0)
				stacks++;
		}
	}
	
	if (stacks == 6)
	{
		com_comp = 7.0;
		strcpy(treename_com, "Four Of A Kind");
	}
}

void fourcard_u() // ��ī������ �˻��ϴ� �Լ�
{
	int stacks = 0, i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 4; j > i; j--)
		{
			if ((handcard2[i] - handcard2[j]) % 13 == 0)
				stacks++;
		}
	}

	if (stacks == 6)
	{
		user_comp = 7.0;
		strcpy(treename_user, "Four Of A Kind");
	}
}

void fullhouse_c() // Ǯ�Ͽ콺���� �˻��ϴ� �Լ�
{
	int stacks = 0, i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 4; j > i; j--)
		{
			if ((handcard[i] - handcard[j]) % 13 == 0)
				stacks++;
		}
	}

	if (stacks == 4)
	{
		com_comp = 6.0;
		strcpy(treename_com, "Fullhouse");
	}
}

void fullhouse_u() // Ǯ�Ͽ콺���� �˻��ϴ� �Լ�
{
	int stacks = 0, i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 4; j > i; j--)
		{
			if ((handcard2[i] - handcard2[j]) % 13 == 0)
				stacks++;
		}
	}

	if (stacks == 4)
	{
		user_comp = 6.0;
		strcpy(treename_user, "Fullhouse");
	}
}

void flush_c() // �÷������� �˻��ϴ� �Լ�
{
	int stacks = 0, i, j;

	for (i = 0; i < 4; i++)
	{
		if (handcard[0] >= &card[i][0] && handcard[0] <= &card[i][13])
		{
			for (j = 1; j < 5; j++)
			{
				if (handcard[j] >= &card[i][0] && handcard[j] <= &card[i][13])
					stacks++;
			}
		}
	}

	if (stacks == 4)
	{
		com_comp = 5.0;
		strcpy(treename_com, "Flush");
	}
}

void flush_u() // �÷������� �˻��ϴ� �Լ�
{
	int stacks = 0, i, j, max;

	for (i = 0; i < 4; i++)
	{
		if (handcard2[0] >= &card[i][0] && handcard2[0] <= &card[i][13])
		{
			for (j = 1; j < 5; j++)
			{
				if (handcard2[j] >= &card[i][0] && handcard2[j] <= &card[i][13])
					stacks++;
			}
		}
	}

	if (stacks == 4)
	{
		user_comp = 5.0;
		strcpy(treename_user, "Flush");
	}
}

void straight_c() // ��Ʈ����Ʈ������ �˻��ϴ� �Լ�
{
	int stacks[5] = { 0 };
	int i, j, max, stack2 = 0;
	int clipboard[5] = { NULL };
	int a, b;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (handcard[i] >= &card[j][0] && handcard[i] <= &card[j][13])
			{
				a = handcard[i];
				b = &card[j][0];
				clipboard[i] = a - b;
			}
		}
	}

	max = clipboard[0];
	for (i = 1; i < 5; i++)
	{
		if (clipboard[i] > max)
			max = clipboard[i];
	}

	for (i = 0; i < 5; i++)
	{
		if (clipboard[i] == max)
			stacks[0]++;
		if (clipboard[i] == max - 4)
			stacks[1]++;
		if (clipboard[i] == max - 8)
			stacks[2]++;
		if (clipboard[i] == max - 12)
			stacks[3]++;
		if (clipboard[i] == max - 16)
			stacks[4]++;
	}

	for (i = 0; i < 5; i++)
		if (stacks[i] >= 1)
			stack2++;

	if (stack2 == 5)
	{
		com_comp = 4.0;
		strcpy(treename_com, "Straight");
	}
}

void straight_u() // ��Ʈ����Ʈ������ �˻��ϴ� �Լ�
{
	int stacks[5] = { 0 };
	int i, j, max, stack2 = 0;
	int clipboard[5] = { NULL };
	int a, b;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (handcard2[i] >= &card[j][0] && handcard2[i] <= &card[j][13])
			{
				a = handcard2[i];
				b = &card[j][0];
				clipboard[i] = a - b;
			}
		}
	}

	max = clipboard[0];
	for (i = 1; i < 5; i++)
	{
		if (clipboard[i] > max)
			max = clipboard[i];
	}

	for (i = 0; i < 5; i++)
	{
		if (clipboard[i] == max)
			stacks[0]++;
		if (clipboard[i] == max - 4)
			stacks[1]++;
		if (clipboard[i] == max - 8)
			stacks[2]++;
		if (clipboard[i] == max - 12)
			stacks[3]++;
		if (clipboard[i] == max - 16)
			stacks[4]++;
	}

	for (i = 0; i < 5; i++)
		if (stacks[i] >= 1)
			stack2++;

	if (stack2 == 5)
	{
		user_comp = 4.0;
		strcpy(treename_user, "Straight");
	}
}

void triple_c() // Ʈ�������� �˻��ϴ� �Լ�
{
	int stacks = 0, i, j;
	int a, b, clipboard;

	for (i = 0; i < 4; i++)
	{
		for (j = 4; j > i; j--)
		{
			if ((handcard[i] - handcard[j]) % 13 == 0)
			{
				stacks++;
				a = handcard[i];
				b = &card[0][0];
				clipboard = a - b;
			}
		}
	}

	if (stacks == 3)
	{
		if (clipboard % 52 == 0)
			com_comp = 3.13;
		else
			for (i = 1; i < 13; i++)
			{
				if (clipboard % 52 == (i * 4))
					com_comp = 3.00 + (i * 0.01);
			}

		strcpy(treename_com, "Triple");
	}
}

void triple_u() // Ʈ�������� �˻��ϴ� �Լ�
{
	int stacks = 0, i, j;
	int a, b, clipboard;

	for (i = 0; i < 4; i++)
	{
		for (j = 4; j > i; j--)
		{
			if ((handcard2[i] - handcard2[j]) % 13 == 0)
			{
				stacks++;
				a = handcard2[i];
				b = &card[0][0];
				clipboard = a - b;
			}
		}
	}

	if (stacks == 3)
	{
		if (clipboard % 52 == 0)
			user_comp = 3.13;
		else
			for (i = 1; i < 13; i++)
			{
				if (clipboard % 52 == (i * 4))
					user_comp = 3.00 + (i * 0.01);
			}

		strcpy(treename_user, "Triple");
	}
}

void two_pair_c() // ��������� �˻��ϴ� �Լ�
{
	int stacks = 0, i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 4; j > i; j--)
		{
			if ((handcard[i] - handcard[j]) % 13 == 0)
				stacks++;
		}
	}

	if (stacks == 2)
	{
		com_comp = 2.0;
		strcpy(treename_com, "Two Pair");
	}
}

void two_pair_u() // ��������� �˻��ϴ� �Լ�
{
	int stacks = 0, i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 4; j > i; j--)
		{
			if ((handcard2[i] - handcard2[j]) % 13 == 0)
				stacks++;
		}
	}

	if (stacks == 2)
	{
		user_comp = 2.0;
		strcpy(treename_user, "Two Pair");
	}
}

void one_pair_c() // ��������� �˻��ϴ� �Լ�
{
	int stacks = 0, i, j;
	int a, b, clipboard;

	for (i = 0; i < 4; i++)
	{
		for (j = 4; j > i; j--)
		{
			if ((handcard[i] - handcard[j]) % 13 == 0)
			{
				stacks++;
				a = handcard[i];
				b = &card[0][0];
				clipboard = a - b;
			}
		}
	}

	if (stacks == 1)
	{
		if (clipboard % 52 == 0)
			com_comp = 1.13;
		else
			for (i = 1; i < 13; i++)
			{
				if (clipboard % 52 == (i * 4))
					com_comp = 1.00 + (i * 0.01);
			}

		strcpy(treename_com, "One Pair");
	}
}

void one_pair_u() // ��������� �˻��ϴ� �Լ�
{
	int stacks = 0, i, j;
	int a, b, clipboard;

	for (i = 0; i < 4; i++)
	{
		for (j = 4; j > i; j--)
		{
			if ((handcard2[i] - handcard2[j]) % 13 == 0)
			{
				stacks++;
				a = handcard2[i];
				b = &card[0][0];
				clipboard = a - b;
			}
		}
	}

	if (stacks == 1)
	{
		if (clipboard % 52 == 0)
			user_comp = 1.13;
		else
			for (i = 1; i < 13; i++)
			{
				if (clipboard % 52 == (i * 4))
					user_comp = 1.00 + (i * 0.01);
			}

		strcpy(treename_user, "One Pair");
	}
}

void high_card_c() // �� ���� ����ī�带 ã�� �Լ�
{
	int i, j, k;
	double tree_comp = 0.0;

	for (k = 1; k < 13; k++)
	{
		for (j = 3; j >= 0; j--)
		{
			tree_comp += 0.01;
			for (i = 0; i < 5; i++)
			{
				if (handcard[i] == &card[j][k])
					com_comp = tree_comp;
			}
		}

		for (j = 3; j >= 0; j--)
		{
			tree_comp += 0.01;
			for (i = 0; i < 5; i++)
			{
				if (handcard[i] == &card[j][0])
					com_comp = tree_comp;
			}
		}
	}

	strcpy(treename_com, "High Card");
}

void high_card_u() // �� ���� ����ī�带 ã�� �Լ�
{
	int i, j, k;
	double tree_comp = 0.0;

	for (k = 1; k < 13; k++)
	{
		for (j = 3; j >= 0; j--)
		{
			tree_comp += 0.01;
			for (i = 0; i < 5; i++)
			{
				if (handcard2[i] == &card[j][k])
					user_comp = tree_comp;
			}
		}

		for (j = 3; j >= 0; j--)
		{
			tree_comp += 0.01;
			for (i = 0; i < 5; i++)
			{
				if (handcard2[i] == &card[j][0])
					user_comp = tree_comp;
			}
		}
	}

	strcpy(treename_user, "High Card");
}

void menu() // �޴� ����ϴ� �Լ�
{
	int select;

	system("cls");
	printf("��������������\n");
	printf("��\t\t\t��\n");
	printf("��      <<POKER>>       ��\n");
	printf("��\t\t\t��\n");
	printf("��������������\n\n");
	printf("1. ���� ����\n");
	printf("2. ����\n\n");
	printf("����: ");
}

void rules() // �� ����ϴ� �Լ�
{
	system("cls");
	printf("<<Rules>>\n");
	printf("�� 5�徿 �޾Ƽ� �� ���� ������ ������ �¸��մϴ�.\n");
	printf("�� �ǵ�(1��)�� �ɰ� �����ϸ�, 3���� �޽��ϴ�.\n");
	printf("�� �и� �ޱ� �� ������ �ؾ��ϸ�, ����ϰ� ����� �� �ֽ��ϴ�.\n");
	printf("�� ������ �� 3�� �����ϸ�, �ǵ��� ���� ���� ��(�Ļ��� ��) �й��մϴ�.\n\n");
	printf("\t\t����\t\t\t����\n");
	printf("\t  ��Ʈ����Ʈ�÷���\t��9 ��8 ��7 ��6 ��5\n");
	printf("\t       ��ī��\t\t��8 ��8 ��8 ��8\n");
	printf("\t      Ǯ�Ͽ콺\t\t��8 ��8 ��8 ��2 ��2\n");
	printf("\t     ��Ʈ����Ʈ\t\t��8 ��7 ��6 ��5 ��4\n");
	printf("\t       Ʈ����\t\t��8 ��8 ��8\n");
	printf("\t       �����\t\t��8 ��8 ��6 ��6\n");
	printf("\t       �����\t\t��8 ��8\n");
	printf("\t         ž\t\t��8\n\n");
	system("pause");
}

void present_money() // ���� ��ǻ��, ���� ���� �� ���� �ǵ��� ������ִ� �Լ�
{
	printf("��ǻ�� ��: %d\t\t���� ��: %d\t\t�ǵ�: %d\n\n", com_money, user_money, match_money);
}

void com_win()
{
	system("cls");
	printf("��������������\n");
	printf("��\t\t\t��\n");
	printf("��    COMPUTER WIN!!    ��\n");
	printf("��\t\t\t��\n");
	printf("��������������\n\n");
	system("color 0E");
}

void com_win2()
{
	system("cls");
	printf("��������������\n");
	printf("��\t\t\t��\n");
	printf("��     ��ǻ�� �¸�!     ��\n");
	printf("��\t\t\t��\n");
	printf("��������������\n\n");
	system("color 0F");
}

void user_win()
{
	system("cls");
	printf("��������������\n");
	printf("��\t\t\t��\n");
	printf("��      USER WIN!!      ��\n");
	printf("��\t\t\t��\n");
	printf("��������������\n\n");
	system("color 0E");
}

void user_win2()
{
	system("cls");
	printf("��������������\n");
	printf("��\t\t\t��\n");
	printf("��      ���� �¸�!      ��\n");
	printf("��\t\t\t��\n");
	printf("��������������\n\n");
	system("color 0F");
}