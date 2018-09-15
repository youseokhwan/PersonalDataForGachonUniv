//#include <iostream>
//using namespace std;
//class Complex {
//private:
//	int real;
//	int image;
//public:
//	Complex(int r = 0, int i = 0);
//	void ShowComplex( );
//	Complex operator+(Complex rightHand);
//	Complex operator-(Complex rightHand);
//	Complex operator-( );
//};
//
//Complex::Complex(int r, int i): real(r), image(i) {
//
//}
//
//void Complex::ShowComplex( ) {
//	if(this->image>0)
//		cout<<real<<"+"<<image<<"i\n";
//	else if(this->image<0)
//		cout<<real<<image<<"i\n";
//	else
//		cout<<real<<"\n";
//}
//
//Complex Complex::operator+(Complex rightHand) {
//	Complex res;
//	res.real = this->real+rightHand.real;
//	res.image = this->image+rightHand.image;
//	return res;
//}
//
//Complex Complex::operator-(Complex rightHand) {
//	Complex res;
//	res.real = this->real - rightHand.real;
//	res.image = this->image - rightHand.image;
//	return res;
//}
//
//Complex Complex::operator-( ) {
//	Complex res;
//	res.real = -this->real;
//	res.image = -this->image;
//	return res;
//}
//
//void main( )
//{
//	Complex x(10, 20), y(20, 40), z;
//
//	cout<<"--- �� Complex ��ü�� ���� ���� ---\n";
//	z = x+y;
//	x.ShowComplex( );
//	y.ShowComplex( );
//	z.ShowComplex( );
//
//	cout<<"\n--- �� Complex ��ü�� ���� ���� ---\n";
//	z = x-y;
//	x.ShowComplex( );
//	y.ShowComplex( );
//	z.ShowComplex( );
//
//	cout<<"\n--- Complex ��ü�� ��ȣ ���� ---\n";
//	z = -x;
//	x.ShowComplex( );
//	z.ShowComplex( );
//}