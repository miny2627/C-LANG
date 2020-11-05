#include <iostream>

int BoxVolume(int a, int b, int c);
int BoxVolume(int a, int b);
int BoxVolume(int a);

int main()
{
	std::cout<<"[3, 3, 3] : "<<BoxVolume(3, 3, 3)<<std::endl;
	std::cout<<"[5, 5, D] : "<<BoxVolume(5, 5)<<std::endl;
	std::cout<<"[7, D, D] : "<<BoxVolume(7)<<std::endl;
	
	return 0;
	
}

int BoxVolume(int a, int b, int c)
{
	return a*b*c;
}

int BoxVolume(int a, int b)
{
	return a*b*1;
}

int BoxVolume(int a)
{
	return a*1*1;
}
