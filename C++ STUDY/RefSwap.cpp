#include <iostream>
using namespace std;

void Swap(int &a, int &b)
{
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
}

int main()
{
	int val1=10;
	int val2=20;
	Swap(val1, val2);
	cout<<"Val1 : "<<val1<<endl;
	cout<<"Val2 : "<<val2<<endl;
	
	return 0;
}
