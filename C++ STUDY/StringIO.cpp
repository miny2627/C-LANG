#include <iostream>

int main()
{
	char name[100];
	char lang[200];
	
	std::cout<<"이 름은 무엇입니까? ";
	std::cin>>name;
	
	std::cout<<"좋 아하는 프로그래밍 언어는 무엇인가요? ";
	std::cin>>lang;
	
	std::cout<<"내 이름은 "<<name<<"입 니다."<<std::endl;
	std::cout<<"제일 좋아하는 언어는 "<<lang<<"입니 다."<<std::endl;
	
	return 0;  
}
