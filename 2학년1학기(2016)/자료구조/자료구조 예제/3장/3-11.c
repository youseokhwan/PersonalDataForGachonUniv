//#include <stdio.h>
//void main()
//{
//	char *ptrArray[2];
//	char **ptrptr;
//	int i;
//
//	ptrArray[0] = "Korea";
//	ptrArray[1] = "Seoul";
//	ptrptr = ptrArray;
//
//	printf("ptrArray[0]�� �ּ� (&ptrArray[0]) = %u\n", &ptrArray[0]);
//	printf("ptrArray[0]�� �� (ptrArray[0]) = %u\n", ptrArray[0]);
//	printf("ptrArray[0]�� ������ (*ptrArray[0]) = %c\n", *ptrArray[0]);
//	printf("ptrArray[0]�� �������ڿ� (*ptrArray[0]) = %s\n\n", *ptrArray);
//
//	printf("ptrArray[1]�� �ּ� (&ptrArray[1]) = %u\n", &ptrArray[1]);
//	printf("ptrArray[1]�� �� (ptrArray[1]) = %u\n", ptrArray[1]);
//	printf("ptrArray[1]�� ������ (*ptrArray[1]) = %c\n", *ptrArray[1]);
//	printf("ptrArray[1]�� �������ڿ� (*ptrArray[1]) = %s\n\n", *(ptrArray + 1));
//
//	printf("ptrptr�� �ּ� (&ptrptr) = %u\n", &ptrptr);
//	printf("ptrptr�� �� (ptrptr) = %u", ptrptr);
//	printf("ptrptr�� 1�� ������ (*ptrptr) = %u\n", *ptrptr);
//	printf("ptrptr�� 2�� ������ (**ptrptr) = %c\n", **ptrptr);
//	printf("ptrptr�� 2�� �������ڿ� (**ptrptr) = %s\n\n", *ptrptr);
//
//	printf("*ptrArray[0]: ");
//	for (i = 0; i < 5; i++)
//		printf("%c", *(ptrArray[0] + i));
//	printf("\n**ptrptr: ");
//	for (i = 0; i < 5; i++)
//		printf("%c", *(*ptrptr + i));
//
//	printf("\n*ptrArray[1]: ");
//	for (i = 0; i < 5; i++)
//		printf("%c", *(ptrArray[1] + i));
//	printf("\n**ptrptr: ");
//	for (i = 0; i < 5; i++)
//		printf("%c", *(*(ptrptr+1) + i));
//
//	printf("\n");
//}