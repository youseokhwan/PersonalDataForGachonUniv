//#include <iostream>
//using namespace std;
//struct score {
//	char name[10];
//	int kor, eng, mat, tot;
//	double ave;
//};
//void init(score *s);
//void main( )
//{
//	score s;
//	init(&s);
//
//	cout<<"\n�̸�\t����\t����\t����\t����\t���\n";
//	cout<<"-----------------------------------------------\n";
//	cout<<s.name<<"\t"<<s.kor<<"\t"<<s.eng<<"\t"<<s.mat<<"\t"<<s.tot<<"\t"<<s.ave<<"\n";
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