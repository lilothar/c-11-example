#include <iostream>
#include <string>

using namespace std;

struct testFunc{
	testFunc():_name(__func__){}
	string _name;

};
int main()
{
	testFunc ts;
	cout<<ts._name<<endl;
}

