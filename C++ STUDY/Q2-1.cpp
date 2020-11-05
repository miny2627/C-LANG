#include <iostream>
using namespace std;

int Add(int &num)
{
	return num+1;
}

int Change(int &num)
{
	return -num;
}

int main()
{
	int a=27;
	Add(a);
	cout<<Add(a)<<endl;
	Change(a);
	cout<<Change(a)<<endl;
	
	return 0;
	
}
