//#include <iostream>
//using namespace std;
//
//struct score {
//	char name[10];
//	int kor, eng, mat, tot;
//	double ave;
//};
//
//void init(score *s);
//void prn(score *s);
//
//void main( )
//{
//	score s[5];
//
//	for (int i = 0; i<5; i++)
//		init(&s[i]);
//
//	cout<<"\n�̸�\t����\t����\t����\t����\t���\n";
//	cout<<"-----------------------------------------------\n";
//	for (int i = 0; i<5;i++)
//		prn(&s[i]);
//}
//
//void init(score *s)
//{
//	cout<<"�̸��� �Է��Ͻÿ� -> ";
//	cin>>s->name;
//	cout<<"���� ������ �Է��Ͻÿ� -> ";
//	cin>>s->kor;
//	cout<<"���� ������ �Է��Ͻÿ� -> ";
//	cin>>s->eng;
//	cout<<"���� ������ �Է��Ͻÿ� -> ";
//	cin>>s->mat;
//
//	s->tot = s->kor+s->eng+s->mat;
//	s->ave = s->tot/3.0;
//}
//
//void prn(score *s)
//{
//	cout<<s->name<<"\t"<<s->kor<<"\t"<<s->eng<<"\t"<<s->mat<<"\t"<<s->tot<<"\t"<<s->ave<<"\n";
//}