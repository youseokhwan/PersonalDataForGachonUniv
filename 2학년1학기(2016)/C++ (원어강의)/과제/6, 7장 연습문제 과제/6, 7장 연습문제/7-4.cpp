//#include <iostream>
//using namespace std;
//void add(int *pa, int *pb, int *pc, int size); // �Լ��� ���� ����
//void main( )
//{
//	int a[ ] = {10,20,30};
//	int b[ ] = {40,50,60};
//	int c[3];
//	int size = sizeof(a)/sizeof(a[0]); // �迭 ������ ������ ���Ѵ�.
//
//	add(a, b, c, size); // �Լ� ȣ��迭�� ���� �ּҿ� ������ ������ ������ �ش�.
//
//	for (int i = 0; i<size; i++)
//		cout<<c[i]<<"\t";
//	cout<<"\n";
//}
//void add(int *pa, int *pb, int *pc, int size) // �Լ��� ����
//{
//	for (int i = 0; i<size; i++)
//		*(pc+i) = *(pa+i)+*(pb+i);
//}