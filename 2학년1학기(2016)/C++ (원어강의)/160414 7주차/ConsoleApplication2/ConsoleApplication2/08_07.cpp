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
//void structInput(namecard *pTemp);
//
//void main( )
//{
//	namecard x, y, z;
//
//	structInput(&x);
//	structInput(&y);
//	structInput(&z);
//
//	cout<<"�̸�\t����\t\t����ó\t\t�̸���";
//	cout<<"\n===============================================================";
//	structPrn(x);
//	structPrn(y);
//	structPrn(z);
//	cout<<"\n===============================================================\n";
//}
//
//void structPrn(namecard temp)
//{
//	cout<<"\n"<<temp.name<<"\t"<<temp.job<<"\t"<<temp.tel<<"\t"<<temp.email;
//}
//
//void structInput(namecard *pTemp)
//{
//	cout<<"\n�̸��� �Է��ϼ���=>";
//	cin>>pTemp->name;
//	cout<<"������ �Է��ϼ���=>";
//	cin>>pTemp->job;
//	cout<<"����ó�� �Է��ϼ���=>";
//	cin>>pTemp->tel;
//	cout<<"�̸����� �Է��ϼ���=>";
//	cin>>pTemp->email;
//}