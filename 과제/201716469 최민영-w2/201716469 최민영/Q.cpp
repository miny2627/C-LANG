/* Q1
#include <iostream>

int main(void)
{
	std::cout<<"Hello\n";
	std::cout<<"ù ��° �������Դϴ�.";
	return 0;
}


#include <iostream>

double area(int r);

double area(int r) {
	return 3.14*r*r;
}

int main(void)
{
	int n=3;
	char c='#';
	std::cout<<c<<5.5<<'-'<<n<<"hello"<<true<<std::endl;
	std::cout<<"n+5="<<n+5<<'\n';
	std::cout<<"������ "<<area(n);
}


#include <iostream>
using namespace std;

int main(void)
{
	cout<<"�ʺ� �Ԏ��ϼ���>>";
	
	int width;
	cin>>width;

	cout<<"���̸� �Է��ϼ���>>";

	int height;
	cin>>height;

	int area=width*height;
	cout<<"������ "<<area<<"\n";
}


#include <iostream>
using namespace std;

int main(void)
{
	cout<<"�̸��� �Է��ϼ���>>";
	char name[11];
	cin>>name;

	cout<<"�̸��� "<<name<<"�Դϴ�\n";
}


#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char password[11];
	cout<<"���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���."<<endl;
	while(true) {
		cout<<"��ȣ>>";
		cin>>password;
		if(strcmp(password, "C++")==0) {
			cout<<"���α׷��� ���� �����մϴ�."<<endl;
			break;
		}
		else cout<<"��ȣ�� Ʋ���ϴ�~~"<<endl;
	}
}

#include <iostream>
using namespace std;

int main(void)
{
	cout<<"�ּҸ� �Է��ϼ���>>";

	char address[100];
		cin.getline(address, 100, '\n');

		cout<<"�ּҴ� "<<address<<"�Դϴ�\n";
}

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;

	cout<<song + "�� �θ� ������";
	cout<<"(��Ʈ : ù���ڴ� "<<elvis[0]<<")?";
	
	getline(cin, singer);
	if(singer==elvis) cout<<"�¾ҽ��ϴ�.";
	else cout<<"Ʋ�Ƚ��ϴ�. " + elvis + "�Դϴ�."<<endl;
}
*/

/*Q2
#include <iostream>
using namespace std;

int main(void)
{
	int i, j;
	for(j=1; j<=9; j++) {
		for(i=1; i<=9; i++){ if((i*j)<10) {cout<<i<<"x"<<j<<" = "<<i*j<<" "<<" ";}
		else cout<<i<<"x"<<j<<" = "<<i*j<<" ";
		}
			cout<<endl;
	}
	return 0;
}
*/

/*Q3
#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	cout<<"���ڵ��� �Է��϶�(100�� �̸�)"<<endl;
	char word[100];
	int i, j=0;

	cin.getline(word, 100, '\n');
	for(i=0; word[i]!='\0'; i++) {
		if(word[i]=='x') j++;
	}
	cout<<"x�� ������ "<<j<<endl;
	return 0;
}
*/

/*Q4
#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	int i=0;
	char name[100];

	cout<<"5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���."<<endl;
	cout<<"<<";
	cin.getline(name, 100, '\n');
	cout<<name<<endl;
	
	char *pch;
	char large[100]="";
	pch = strtok(name, ";");

	while(pch!=NULL)
	{
		cout<<i+1<<" : "<<pch<<endl;
		if(strlen(large)<strlen(pch)) strcpy(large, pch);
		pch=strtok(NULL, ";");
		i++;
	}
	cout<<"�� �̸��� "<<large<<endl;
	
	return 0; 
}
*/

/*Q5
#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	int i, j;
	char str[100];
	cout<<"���ڿ� �Է�>>";
	cin.getline(str, 100, '\n'); 
	int len=strlen(str);
	
	for(i=0; i<len; i++) {
		for(j=0; j<=i; j++) {
			cout<<str[j]; }
			cout<<endl;
	}	
	return 0;
}
*/

/*Q6*/
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int i, j, n;
	
	string str;
	
	cout<<"�Է� : ";
	cin>>str;
	int len=str.length();
	
	for(i=0; i<len; i++) {
		n=i;
		for(j=i+1; j<len; j++) {
			if(str[j]<str[n]) n=j;
		}
		swap(str[i], str[n]);
	}
	
	cout<<"��� : ";
	for(i=0; i<10; i++) {
		cout<<str[i];
	}
	cout<<endl;
	
	return 0;	
}
