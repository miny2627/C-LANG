#include <iostream>

int main()
{
	char name[100];
	char lang[200];
	
	std::cout<<"�� ���� �����Դϱ�? ";
	std::cin>>name;
	
	std::cout<<"�� ���ϴ� ���α׷��� ���� �����ΰ���? ";
	std::cin>>lang;
	
	std::cout<<"�� �̸��� "<<name<<"�� �ϴ�."<<std::endl;
	std::cout<<"���� �����ϴ� ���� "<<lang<<"�Դ� ��."<<std::endl;
	
	return 0;  
}
