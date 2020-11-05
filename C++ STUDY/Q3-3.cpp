#include <iostream>
#include <cstring>
using namespace std;

class Printer
{
	private:
		char s[50];
		
	public:
		void SetString(char* string);
		void ShowString();	
		
};

void Printer::SetString(char* string)
{
	strcpy(s, string);
}

void Printer::ShowString()
{
	cout<<s<<endl;
}

int main()
{
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();
	
	pnt.SetString("I love C++");
	pnt.ShowString();
	
	return 0;
}
