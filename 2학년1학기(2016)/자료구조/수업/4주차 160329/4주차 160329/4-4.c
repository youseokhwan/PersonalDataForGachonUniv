//#include <stdio.h>
//#define MAX(a,b) ((a>b)?a:b)
//#define MAX_DEGREE 50
//
//typedef struct { // ����ü polynomial ����
//	int degree; // ���׽��� ������ ������ ����
//	float coef[MAX_DEGREE]; // ���׽��� �� ���� ����� ������ 1���� �迭
//} polynomial;
//
//polynomial addPoly(polynomial A, polynomial B)
//{
//	polynomial C; // ���׽� ������ ��� ���׽��� ������ polynomial ����ü ���� ����
//	int A_index = 0, B_index = 0, C_index = 0;
//	int A_degree = A.degree, B_degree = B.degree;
//	C.degree = MAX(A.degree, B.degree);
//
//	while (A_index <= A.degree && B_index <= B.degree) {
//		if (A_degree > B_degree) {
//			C.coef[C_index++] = A.coef[A_index++];
//			A_degree--;
//		}
//		else if (A_degree == B_degree) {
//			C.coef[C_index++] = A.coef[A_index++] + B.coef[B_index++];
//			A_degree--;
//			B_degree--;
//		}
//		else {
//			C.coef[C_index++] = B.coef[B_index++];
//			B_degree--;
//		}
//	}
//
//	return C; // ���׽� ������ ��� ���׽� C�� ��ȯ
//}
//
//void printPoly(polynomial P)
//{
//	int i, degree;
//	degree = P.degree;
//
//	for (i = 0; i <= P.degree; i++)
//		printf("%3.0fx^%d", P.coef[i], degree--);
//	printf("\n");
//}
//
//void main()
//{
//	polynomial A = { 3,{4,3,5,0} }; // ���׽� A�� �ʱ�ȭ
//	polynomial B = { 4, {3,1,0,2,1} }; // ���׽� B�� �ʱ�ȭ
//
//	polynomial C;
//	C = addPoly(A, B); // ���׽� A, B�� ���� ������ �����ϱ� ���� addPoly �Լ� ȣ��
//
//	printf("\n A(x)="); printPoly(A); // ���׽� A ���
//	printf("\n B(x)="); printPoly(B); // ���׽� B ���
//	printf("\n C(x)="); printPoly(C); // ���׽� C ���
//
//	getchar();
//}