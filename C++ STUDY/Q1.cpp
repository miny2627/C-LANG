#include <iostream>

int main()
{
	int i, a;
	int result=0;
	
	for(i=0; i<5; i++) {
		std::cout<<i+1<<" ��° ���� �Է�: ";
		std::cin>>a;
		result+=a;
	}
	
	std::cout<<"�հ�: "<<result<<std::endl; 
	
	return 0;
}
