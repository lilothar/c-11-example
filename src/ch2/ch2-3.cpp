#include <iostream>
#include <ostream>

using namespace  std;

struct test{
	int a = 1;
	int b = 2;
};
int main()
{
	test t;
	
	cout<<t.a<<" "<<t.b<<endl;
}
