#include <iostream>
using namespace std;

int main()
{
	int num=27;
	int *a=&num;
	int **b=&a;
	
	int &ref=num;
	int *(&x)=a;
	int **(&y)=b;
	
	cout<<ref<<endl;
	cout<<*x<<endl;
	cout<<**y<<endl;
	
	return 0;
}
