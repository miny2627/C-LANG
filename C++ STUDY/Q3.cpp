#include <iostream>

int main()
{
	int n;
	int i;
	int result;
	std::cin>>n;
	
	for(i=1; i<=9; i++){
		result=i*n;
		std::cout<<n<<'x'<<i<<'='<<result<<std::endl;
	}
	
	return 0;
}
