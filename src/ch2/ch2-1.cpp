#include <iostream>
using namespace std;

int main(int argc, char**argv) 
{
	cout<< "standary clib: " <<__STDC_HOSTED__<<endl;
	cout<< "standary C: " <<__STDC__<<endl;
	#ifdef __STD__VERSION__
	cout<< "C standary version"<<__STDC__VERSION__<<endl;
	#else
	cout<< "C standary version not defined"<<endl;
	#endif
	cout<< "ISO/IEC"<<__STDC_ISO_10646__ <<endl;
}
