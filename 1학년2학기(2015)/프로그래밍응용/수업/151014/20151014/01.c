///*
//A[] = "A B C D"
//B[] = "1 2 3 4"
//�� ���� �迭�� ���� swap.
//<���>
//A = 1 2 3 4
//B = A B C D
//*/
//
//#include <stdio.h>
//void swap (char *a, char *b)
//{
//	char temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main()
//{
//	int i;
//	char A[] = {'A','B','C','D','\0'};
//	char B[] = {'1','2','3','4','\0'}; //\0�� NULL, char�� �迭���� {}�� �����Ҷ����� ������ �������
//	// char A[]= "ABCD" ����� �� ����. " ' ����
//
//	printf("A = {%s}\n", A);
//	printf("B = {%s}\n\n", B);
//
//	for(i = 0; i < 4; i++)
//	{
//		char *ap = &A[i];
//		char *bp = &B[i];
//		swap (ap, bp);
//	}
//
//	printf("���� ��\n\nA = {%s}\n", A);
//	printf("B = {%s}\n", B);
//
//	return 0;
//}