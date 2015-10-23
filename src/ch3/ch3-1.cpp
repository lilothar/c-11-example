#include <iostream>

using namespace std;

class Base{
	public:
		Base(int i) {cout << "int: "<<i<<endl;}
		Base(int i, double d) {cout <<"int:" <<i <<" double: "<<d<<endl;}
		
};

class child:public Base {
	public:
	using Base::Base;
	void interFace(double d){cout<<d<<endl;}
};

int main()
{
	child c1(1);
	child  c2(1,1.1);
	return 0;
}