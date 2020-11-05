#include <iostream>

int main(void)
{
	int a;
	std::cout<<"첫 번째 숫자 : ";
	std::cin>>a;
	
	int b;
	std::cout<<"두 번째 숫자 : ";
	std::cin>>b;
	
	int result=a+b;
	std::cout<<"덧 셈 결과: "<<result<<std::endl;
	
	return 0; 
}
