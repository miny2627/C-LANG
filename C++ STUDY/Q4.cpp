#include <iostream>

int main()
{
	int i, a;
	int result;
	
	for(;;) {
		std::cin>>a;
		if(a==-1) break;
		result=50+a*0.12;
		std::cout<<"Salary : "<<result<<std::endl;	
	}
	
	return 0;
}
