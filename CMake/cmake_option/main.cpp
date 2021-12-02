#include<iostream>
using namespace std;
 
int main()
{
	#ifdef TEST
		cout << "hello TEST" << endl;
	#else
		cout << "hello world" << endl;
	#endif
	
	return 0;
}
