//#include <iostream>
//using namespace std;
//
//struct time { // ��, ��, �ʸ� �ϳ��� ��� ������ �� �ִ� ����ü ����
//	int hour, minute, second;
//};
//
//void get(time *list) { // ��, ��, �ʸ� �Է¹޾� ����ü ������ �����ϴ� get() �Լ��� �ּ� ȣ�� ������� ����
//	cout<<"�ð��� �Է��ϼ���(�� �� ��) >> ";
//	cin>>list->hour>>list->minute>>list->second;
//}
//
//void prn(time list) { // �ð��� ����ϴ� prn() �Լ��� �� ȣ�� ������� ����
//	cout<<list.hour<<"\t"<<list.minute<<"\t"<<list.second<<"\n";
//}
//
//void main( )
//{
//	// ����ü �迭�� �����ϸ鼭 �ʱ�ȭ�϶�.
//	struct time list[3];
//	int i;
//
//	for (i = 0; i<3; i++) {
//		get(&list[i]);
//	}
//
//	for (i = 0; i<3; i++) {
//		prn(list[i]);
//	}
//}