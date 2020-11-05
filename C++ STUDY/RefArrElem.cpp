#include <iostream>
using namespace std;

int main()
{
	int arr[3]={1, 3, 5};
	int &a=arr[0];
	int &b=arr[1];
	int &c=arr[2];
	
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	
	return 0;
}
