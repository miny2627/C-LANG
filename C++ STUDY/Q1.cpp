#include <iostream>

int main()
{
	int i, a;
	int result=0;
	
	for(i=0; i<5; i++) {
		std::cout<<i+1<<" 번째 정수 입력: ";
		std::cin>>a;
		result+=a;
	}
	
	std::cout<<"합계: "<<result<<std::endl; 
	
	return 0;
}
