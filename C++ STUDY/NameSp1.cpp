#include <iostream>

namespace BestcomImpl
{
	void SimpleFunc(void){
		std::cout<<"BestCom�� ������ �Լ�"<<std::endl;
	}
}

namespace ProcomImpl
{
	void SimpleFunc(void)
	{
		std::cout<<"ProCom�� ������ �Լ�"<<std::endl; 
	}
}

int main()
{
	BestcomImpl::SimpleFunc();
	ProcomImpl::SimpleFunc();
	return 0;
}
