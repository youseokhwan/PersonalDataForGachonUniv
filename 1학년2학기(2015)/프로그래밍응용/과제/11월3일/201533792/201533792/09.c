//#include <stdio.h>
//#include <string.h>
//#include <conio.h>
//
//int main(void)
//{
//	char seps[] = " ";
//	char text[100], search[100], change[100], finish[100] = "";
//	char *token;
//
//	printf("���ڿ��� �Է��Ͻÿ�: ");
//	gets(text);
//
//	printf("ã�� ���ڿ�: ");
//	gets(search);
//
//	printf("�ٲ� ���ڿ�: ");
//	gets(change);
//
//	token = strtok(text, seps);
//
//	while (token != NULL)
//	{
//		if (strcmp(token, search) == 0)
//			strcat(finish, change);
//		else
//			strcat(finish, token);
//		token = strtok(NULL, seps);
//		strcat(finish, " ");
//	}
//
//	printf("���: %s\n", finish);
//
//	return 0;
//}