//#include <stdio.h>
//#define MAX_DEGREE 50
//#define ADD(a,b) (a+b)
//
//typedef struct {
//	int degree; // ���׽��� ����
//	double coef[MAX_DEGREE]; // ���׽��� ����� ������ �迭
//} polynomial; // ���׽� ����ü ����
//
//polynomial multPoly(polynomial A, polynomial B); // �� ���׽��� �����ִ� �Լ�
//void printPoly(polynomial P); // ���׽� ����ϴ� �Լ�
//
//void main()
//{
//	polynomial A, B, C; // A, B�� �Է¹ް� C�� multPoly(A, B)�� ��(��� ��)
//	int i; // for�� ������ ���� ����
//	
//	for (i = 0; i<MAX_DEGREE; i++)
//		A.coef[i] = B.coef[i] = C.coef[i] = 0; // ���� �Է¹ޱ� �� ���� 0���� �ʱ�ȭ
//
//	printf("���׽� A�� �ְ����� �Է�: ");
//	scanf("%d", &A.degree);
//	printf("���׽� A�� ����� ���� �������� �Է�: ");
//	for (i = A.degree; i>=0; i--)
//		scanf("%lf", &A.coef[i]);
//	printf("\n"); // ���׽� A�� ���� input
//
//	printf("���׽� B�� �ְ����� �Է�: ");
//	scanf("%d", &B.degree);
//	printf("���׽� B�� ����� ���� �������� �Է�: ");
//	for (i = B.degree; i>=0; i--)
//		scanf("%lf", &B.coef[i]);
//	printf("\n"); // ���׽� B�� ���� input
//
//	C = multPoly(A, B); // ���׽� C = ���׽� A*���׽� B;
//
//	printf("A(x) = ");
//	printPoly(A); // ���׽� A ���
//	printf("B(x) = ");
//	printPoly(B); // ���׽� B ���
//	printf("C(x) = ");
//	printPoly(C); // ���׽� C ���
//}
//
//polynomial multPoly(polynomial A, polynomial B)
//{
//	polynomial C; // ���׽� ���� ��� ������ ���׽� C ����
//	int i, j; // i, j�� for�� ������ ���� �Լ�
//	C.degree = ADD(A.degree, B.degree); // C�� ������ A�� ����+B�� ����
//
//	for (i = 0; i<=C.degree; i++)
//		C.coef[i] = 0; // C.coef �迭�� ���ҵ� 0���� �ʱ�ȭ
//
//	for (i = 0; i<=A.degree; i++)
//	{
//		for (j = 0; j<=B.degree; j++)
//			C.coef[i+j] += A.coef[i]*B.coef[j];
//	}
//
//	return C; // ���׽� C ��ȯ
//}
//
//void printPoly(polynomial P) // ���� �״�� �ο� �� ���� i�� ������ ����
//{
//	int i, degree; // i�� for�� ������ ���� ����, degree�� ���� ����
//	degree = P.degree;
//
//	for (i = P.degree; i>=0; i--)
//		printf("%3.0fx^%d", P.coef[i], degree--);
//	printf("\n");
//}