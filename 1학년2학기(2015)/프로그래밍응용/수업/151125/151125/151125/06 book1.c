//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define S_SIZE 50
//#define MAX_BOOKS 10
//
//struct book {
//	char title[S_SIZE];
//	int year;
//};
//
//int main(void)
//{
//	struct book books[MAX_BOOKS];
//	char buffer[S_SIZE];
//	int n = 0, i, year;
//
//	while (n < MAX_BOOKS)
//	{
//		printf("å�� ������ �Է��Ͻÿ�: (�����Ϸ��� ����)");
//		gets(buffer);
//		if (buffer[0] == '\0')
//			break;
//		strcpy(books[n].title, buffer);
//		printf("å�� ���� ������ �Է��Ͻÿ�: ");
//		gets(buffer);
//		year = atoi(buffer);
//		books[n].year = year;
//		n++;
//	}
//	printf("\n");
//
//	for (i = 0; i < n; i++)
//		printf("å�� ����: %s ���� ����: %d\n", books[i].title, books[i].year);
//
//	return 0;
//}