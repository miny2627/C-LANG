#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	char *a="I am so happy! ";
	char *b="I am so sad.";
	char c[50];
	
	cout<<strlen(a)<<endl;
	cout<<strlen(b)<<endl;
	
	strcpy(c, a);
	strcat(c, b);
	cout<<c<<endl;
	
	if(strcmp(a, b)==0) cout<<"Same"<<endl;
	else cout<<"Different"<<endl;
	
	return 0;
}
