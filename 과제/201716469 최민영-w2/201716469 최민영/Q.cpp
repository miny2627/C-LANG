/* Q1
#include <iostream>

int main(void)
{
	std::cout<<"Hello\n";
	std::cout<<"첫 번째 맛보기입니다.";
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
	std::cout<<"면적은 "<<area(n);
}


#include <iostream>
using namespace std;

int main(void)
{
	cout<<"너비를 입렧하세요>>";
	
	int width;
	cin>>width;

	cout<<"높이를 입력하세요>>";

	int height;
	cin>>height;

	int area=width*height;
	cout<<"면적은 "<<area<<"\n";
}


#include <iostream>
using namespace std;

int main(void)
{
	cout<<"이름을 입력하세요>>";
	char name[11];
	cin>>name;

	cout<<"이름은 "<<name<<"입니다\n";
}


#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char password[11];
	cout<<"프로그램을 종료하려면 암호를 입력하세요."<<endl;
	while(true) {
		cout<<"암호>>";
		cin>>password;
		if(strcmp(password, "C++")==0) {
			cout<<"프로그램을 정상 종료합니다."<<endl;
			break;
		}
		else cout<<"암호가 틀립니다~~"<<endl;
	}
}

#include <iostream>
using namespace std;

int main(void)
{
	cout<<"주소를 입력하세요>>";

	char address[100];
		cin.getline(address, 100, '\n');

		cout<<"주소는 "<<address<<"입니다\n";
}

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;

	cout<<song + "를 부른 가수는";
	cout<<"(힌트 : 첫글자는 "<<elvis[0]<<")?";
	
	getline(cin, singer);
	if(singer==elvis) cout<<"맞았습니다.";
	else cout<<"틀렸습니다. " + elvis + "입니다."<<endl;
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
	cout<<"문자들을 입력하라(100개 미만)"<<endl;
	char word[100];
	int i, j=0;

	cin.getline(word, 100, '\n');
	for(i=0; word[i]!='\0'; i++) {
		if(word[i]=='x') j++;
	}
	cout<<"x의 개수는 "<<j<<endl;
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

	cout<<"5명의 이름을 ';'으로 구분하여 입력하세요."<<endl;
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
	cout<<"긴 이름은 "<<large<<endl;
	
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
	cout<<"문자열 입력>>";
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
	
	cout<<"입력 : ";
	cin>>str;
	int len=str.length();
	
	for(i=0; i<len; i++) {
		n=i;
		for(j=i+1; j<len; j++) {
			if(str[j]<str[n]) n=j;
		}
		swap(str[i], str[n]);
	}
	
	cout<<"출력 : ";
	for(i=0; i<10; i++) {
		cout<<str[i];
	}
	cout<<endl;
	
	return 0;	
}
