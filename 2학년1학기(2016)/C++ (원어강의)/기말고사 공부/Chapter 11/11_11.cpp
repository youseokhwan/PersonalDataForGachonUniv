//#include <iostream>
//#include <string>
//using namespace std;
//class CStud {
//	char name[30];
//	char hphone[20];
//	char email[30];
//	static int cnt;
//public:
//	CStud(char *n = "������", char *h = "017-777-7777", char *e = "pink@daum.net");
//	~CStud( );
//	void prn( );
//	static void prn_cnt( );
//};
//
//int CStud::cnt = 0;
//
//CStud::CStud(char *n, char *h, char *e)
//{
//	strcpy(name, n);
//	strcpy(hphone, h);
//	strcpy(email, e);
//	cnt++;
//}
//
//CStud::~CStud( )
//{
//	cnt--;
//}
//
//void CStud::prn( )
//{
//	cout<<"�̸� : "<<name<<endl;
//	cout<<"�ڵ��� : "<<hphone<<endl;
//	cout<<"�̸��� : "<<email<<endl;
//}
//
//void CStud::prn_cnt( )
//{
//	cout<<"\n������� ��ϵ� �ο��� : "<<cnt<<"\n\n";
//}
//
//void main( )
//{
//	CStud::prn_cnt( );
//
//	CStud man1("������", "010-9087-0975", "subin@pride.com");
//	man1.prn( );
//	CStud man2("������", "017-9087-0975", "won@pride.com");
//	man2.prn( );
//	cout<<"\n# �߰��� �ο����� �ľ��մϴ�.";
//	man2.prn_cnt( );
//	CStud man3;
//	man3.prn( );
//	cout<<"\nŬ������ �Ҵ�� �޸� ������ : "<<sizeof(CStud);
//	cout<<"\n";
//	CStud::prn_cnt( );
//}