#include<iostream>
using namespace std;
 
int main()
{
	#ifdef TEST_DEBUG
		cout << "hello TEST" << endl;
	#else
		cout << "hello world" << endl;
	#endif
	
	return 0;
}
