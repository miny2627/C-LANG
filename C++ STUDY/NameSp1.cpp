#include <iostream>

namespace BestcomImpl
{
	void SimpleFunc(void){
		std::cout<<"BestCom이 정의한 함수"<<std::endl;
	}
}

namespace ProcomImpl
{
	void SimpleFunc(void)
	{
		std::cout<<"ProCom이 정의한 함수"<<std::endl; 
	}
}

int main()
{
	BestcomImpl::SimpleFunc();
	ProcomImpl::SimpleFunc();
	return 0;
}
