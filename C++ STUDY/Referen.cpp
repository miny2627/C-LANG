#include <iostream>
using namespace std;

int main()
{
	int num1=1020;
	int &num2=num1;
	
	num2=20120321;
	cout<<"Val : "<<num1<<endl;
	cout<<"Ref : "<<num2<<endl;
	
	cout<<"Val-s : "<<&num1<<endl;
	cout<<"Ref-s : "<<&num2<<endl;
	
	return 0;
}
