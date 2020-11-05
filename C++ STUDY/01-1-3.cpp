#include <iostream>

int main()
{
	int a, b, i;
	int result=0;
	
	std::cout<<"두 개의 숫자 입력 : ";
	std::cin>>a>>b;
	
	if(a<b) {
		for(i=a+1; i<b; i++) result+=i;
	}	
	
	else{
		for(i=b+1; i<a; i++) result+=i;
	}
	
	std::cout<<result<<std::endl;
	
	return 0;
}
