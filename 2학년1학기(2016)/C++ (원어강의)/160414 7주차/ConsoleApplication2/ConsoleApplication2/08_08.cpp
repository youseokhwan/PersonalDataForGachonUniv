//#include <iostream>
//using namespace std;
//struct namecard {
//	char name[20];
//	char job[30];
//	char tel[20];
//	char email[40];
//};
//
//void structPrn(namecard temp);
//void structInput(namecard &temp);
//
//void main( )
//{
//	namecard x, y, z;
//
//	structInput(x);
//	structInput(y);
//	structInput(z);
//
//	cout<<"�̸�\t����\t\t����ó\t\t�̸���";
//	cout<<"\n===============================================================";
//	structPrn(x);
//	structPrn(y);
//	structPrn(z);
//	cout<<"\n===============================================================\n";
//}
//
//void structPrn(namecard temp) // �Լ��� ����
//{
//	cout<<"\n"<<temp.name<<"\t"<<temp.job<<"\t"<<temp.tel<<"\t"<<temp.email;
//}
//
//void structInput(namecard &temp)
//{
//	cout<<"\n�̸��� �Է��ϼ���=>";
//	cin>>temp.name;
//	cout<<"������ �Է��ϼ���=>";
//	cin>>temp.job;
//	cout<<"����ó�� �Է��ϼ���=>";
//	cin>>temp.tel;
//	cout<<"�̸����� �Է��ϼ���=>";
//	cin>>temp.email;
//}