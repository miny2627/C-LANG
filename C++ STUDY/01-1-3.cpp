#include <iostream>

int main()
{
	int a, b, i;
	int result=0;
	
	std::cout<<"�� ���� ���� �Է� : ";
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
