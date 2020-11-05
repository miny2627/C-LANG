/*Q1
#include <iostream>
using namespace std;
 
class Circle{
		int radius;
	public:
		Circle() {radius=1;}
		Circle(int r) {radius=r;}
		double getArea();
};
 
double Circle::getArea() {
	return 3.14*radius*radius;
}
 
int main()
{
	Circle donut;
	Circle pizza(30);
 
	cout<<donut.getArea()<<endl;
 
	Circle *p;
	p=&donut;
	cout<<p->getArea()<<endl;
	cout<<(*p).getArea()<<endl;
	
	p=&pizza;
	cout<<p->getArea()<<endl;
	cout<<(*p).getArea()<<endl;
}
 
#include <iostream>
using namespace std;
 
class Circle{
		int radius;
	public:
		Circle() {radius=1;}
		Cirlce(int r) {radius=r;}
		void setRadius(int r) {radius=r;}
		double getArea();
};
 
double Circle::getArea() {
	return 3.14*radius*radius;
}
 
int main()
{
	Circle circleArray[3];
 
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);
 
	for(int i=0; i<3; i++) 
		cout<<"Circle "<<i<<"의 면적은 "<<circleArray[i}.getArea()<<endl;
 
	Circle *p;
	p=circleArray;
	for(int i=0; i<3; i++) {
	cout<<"Circle "<<i<<"의 면적은 "<<p->getArea()<<endl;
	p++
	}
	}
 
#include <iostream>
using namespace std;
 
class Circle{
		int radius;
	public:
		Circle() {radius=1;}
		Cirlce(int r) {radius=r;}
		void setRadius(int r) {radius=r;}
		double getArea();
};
 
double Circle::getArea() {
	return 3.14*radius*radius;
}
 
int main()
{
	Circle circleArray[3]={Circle(10), Circle(20), Circle() };
	for(int i=0; i<3; i++) 
	cout<<"Circle "<<i<<"의 면적은 "<<circleArray[i}.getArea()<<endl;
}
 
#include <iostream>
using namespace std;
 
class Circle{
		int radius;
	public:
		Circle() {radius=1;}
		Circle(int r) {radius=r;}
		void setRadius(int r) {radius=r;}
		double getArea();
};
 
double Circle::getArea() {
	return 3.14*radius*radius;
}
 
int main()
{
	Circle circles[2][3];
 
	circle[0][0].setRadius(1);
	circle[0][1].setRadius(2);
	circle[0][2].setRadius(3);
	circle[1][0].setRadius(4);
	circle[1][1].setRadius(5);
	circle[1][2].setRadius(6);
 
	for(int i=0; i<2; i++) {
		for(int j=0; j<3; j++) {
			cout<<"Circle ["<<i<<","<<j<<"]의 면적은 ";
			cout<<circles[i][j].getArea()<<endl;
			}
}
 
#include <iostream>
using namespace stdl
 
int main()
{
	int *p;
	p=new int;
	if(!p) {
		cout<<"메모리를 할당할 수 없습니다.";
		return 0;
	}
 
	*p=5;
	int n=*p;
	cout<<"*p = "<<*p<<endl;
	cout<<"n = "<<n<<endl;
 
	delete p;
}
 
#include <iostream>
using namespace std;
 
int main() {
	cout<<"입력할 정수의 개수는?";
	int n;
	cin>>n;
	if(n<=0) return 0;
	int *p=new int[n];
	if(!p) {
		cout<<"메모리를 할당할 수 없습니다.";
		return 0;
		}
 
	for(int i=0; i<n; i++) {
		cout<<i+1<<"번째 정수 :  ";
		cin>>p[i];
		}
		
	int sum=0;
	for(int i=0; i<n; i++)
	sum+=p[i];
	cout<<"평균 = "<<sum/n<<endl;
 
	delete [] p;
	}
 
#include <iostream>
using namespace std;
 
class Circle{
		int radius;
	public:
		Circle();
		Circle(int r);
		~Circle();
		void setRadius(int r) {radius=r;}
		double getArea() {return 3.14*radius*radius;}
};
 
Circle::Circle() {
	radius=1;
	cout<<"생성자 실행 radius = "<<radius<<endl;
}
 
Circle::Circle(int r) {
	radius=r;
	cout<<"생성자 실행 radius = "<<radius<<endl;
}
 
Circle::~Circle() {
	cout<<"소멸자 실행 radius = "<<radius<<endl;
}
 
int main() {
	Circle *p, *q;
	p=new Circle;
	q=new Circle(30);
	cout<<p->getArea()<<endl<<q->getArea()<<endl;
	delete p;
	delete q;
}
 
#include <iostream>
using namespace std;
 
class Circle{
		int radius;
	public:
		Circle();
		Circle(int r);
		~Circle();
		void setRadius(int r) {radius=r;}
		double getArea() {return 3.14*radius*radius;}
};
 
Circle::Circle() {
	radius=1;
	cout<<"생성자 실행 radius = "<<radius<<endl;
}
 
Circle::Circle(int r) {
	radius=r;
	cout<<"생성자 실행 radius = "<<radius<<endl;
}
 
Circle::~Circle() {
	cout<<"소멸자 실행 radius = "<<radius<<endl;
}
 
int main()
{
	int radius;
	while(true) {
		cout<<"정수 반지름 입력(음수이면 종료)>> ";
		cin>>radius;
		if(radius<0) break;
		Circle *p=new Circle(radius);
		cout<<"원의 면적은 "<<p->getArea()<<endl;
		delete p;
		}
}
 
#include <iostream>
using namespace std;
 
class Circle{
		int radius;
	public:
		Circle();
		Circle(int r);
		~Circle();
		void setRadius(int r) {radius=r;}
		double getArea() {return 3.14*radius*radius;}
};
 
Circle::Circle() {
	radius=1;
	cout<<"생성자 실행 radius = "<<radius<<endl;
}
 
Circle::Circle(int r) {
	radius=r;
	cout<<"생성자 실행 radius = "<<radius<<endl;
}
 
Circle::~Circle() {
	cout<<"소멸자 실행 radius = "<<radius<<endl;
}
 
int main()
{
	Circle *pArray=new Circle[3];
	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);
 
	for(int i=0; i<3; i++) {
		cout<<pArray[i].getArea()<<endl;
	}
 
	Circle*p=pArray;
	for(int i=0; i<3;i++) {
		cout<<p->getArea()<<endl;
		p++;
	}
 
	delete [] pArray;
}
 
#include <iostream>
using namespace std;
 
class Circle{
		int radius;
	public:
		Circle();
		~Circle();
		void setRadius(int r) {radius=r;}
		double getArea() {return 3.14*radius*radius;}
};
 
Circle::Circle() {
	radius=1;
}
 
int main()
{
	cout<<"생성하고자 하는 원의 개수?";
	int n, radius;
	cin>>n;
	if(n<=0) return 0;
	Circle *pArray=new Circle[n];
	for(int i=0; i<n; i++) {
		cout<<"원"<<i+1<<" : ";
		cin>>radius;
		pArray[i].setRadius(radius);
	}
 
	int count=0;
	Circle *p=pArray;
	for(int i=0; i<n; i++) {
		cout<<p->getArea()<<' ';
		if(p->getArea()>=100 && p->getArea() <=200) count++;
		p++;
	}
 
	cout<<endl;
	delete [] pArray;
}
 
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	string str;
	string address("서울시 성북구 삼선동  389");
	string copyAddress(address);
 
	char text[]= {'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0'};
	string title(text);
 
	cout<<str<<endl;
	cout<<address<<endl;
	cout<<copyAddress<<endl;
	cout<<title<<endl;
}
 
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	string names[5];
 
	for(int i=0; i<5; i++) {
		cout<<"이름 >> ";
		getline(cin, names[i], '\n');
	}
 
	string latter=names[0];
	for(int i=1; i<5; i++) {
		if(latter <names[i]) {
			latter=names[i];
			}
		}
	cout<<"사전에서 가장 뒤에 나오는 문자열은 "<<latter<<endl;
}
 
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	string s;
 
	cout<<"아래에 문자열을 입력하세요. 빈 칸이 있어도 됩니다.(한글 안됨) "<<endl;
	getline(cin, s, '\n');
	int len=s.length();
 
	for(int i=0; i<len; i++) {
		string first=s.substr(0, 1);
		string sub=s.substr(1, len-1);
		s=sub+first;
		cout<<s<<endl;
	}
}
 
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	string s;
	cout<<"7+23+5+100+25와 같이 덧셈 문자열을 입력하세요."<<endl;
	getline(cin, s, '\n');
	int sum=0;
	int startIndex=0;
 
	while(true) {
		int fIndex =s.find('+', startIndex);
		if(fIndex==-1) {
			string part=s.substr(startIndex);
			if(part=="") break;
			cout<<part<<endl;
			sum+=stoi(part);
			break;
		}
		int count=fIndex-startIndex;
		string part=s.substr(startIndex, count);
 
		cout<<part<<endl;
		sum+=stoi(part);
		startIndex =fIndex+1;
	}
	cout<<"숫자들의 합은 "<<sum;
}
 
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	string s;
	cout<<"여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다."<<endl;
	getline(cin, s, '&');
	cin.ignore();
 
	string f, r;
	cout<<endl<<"find: ";
	getline(cin, f, '\n');
	cout<<"replace : ";
	getline(cin, r, '\n');
 
	int startIndex=0;
	while(true) {
		int fIndex=s.find(f, startIndex);
		if(fIndex==-1) break;
		s.replace(fIndex, f.length(), r);
		startIndex=fIndex+r.length();
	}
	cout<<s<<endl;
}
*/
 
/*Q2
#include <iostream>
using namespace std;
 
class Sample{
		int *p;
		int size;
	public:
		Sample(int n) {
			size=n; p=new int [n];
		}
		void read();
		void write();
		int big();
		~Sample();
};
 
void Sample::read() {
	for(int i=0; i<size; i++) cin>>p[i];
}
 
void Sample::write() {
	for(int i=0; i<size; i++)
		cout<<p[i]<<" ";
		cout<<endl;
}
 
int Sample::big() {
	int b;
	b=p[0];
	for(int i=0; i<size; i++) {
		if(b<=p[i]) b=p[i];
	}
	return b;
}
 
Sample::~Sample()
{
	delete []p;
}
int main()
{
	Sample s(10);
	s.read();
	s.write();
	cout<<"가장 큰 수는 "<<s.big()<<endl;
}
*/
 
/*Q3
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cout<<"아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)"<<endl;

	for(;;){
		cout<<">>";
		getline(cin, s, '\n');
		if(s=="exit") break;
		int len=s.length();
		for(int i=0; i<len; i++) {
				cout<<s[len-i-1];
		}
		cout<<endl;
	}
}
*/

/*Q4
#include <iostream>
#include <string>
using namespace std;

class Person{
	string name;
public:
	Person(){;}
	Person(string name) {this->name=name;}
	string getName() {return name;}
	void setname(string name) {this->name=name;}
};

class Family{
	Person *p;
	int size;
	string name;
public:
	Family(string name, int size);
	void setName(int n, string name);
	void show();
	~Family();
};

Family::Family(string name, int size)
{
	p = new Person[size];
	this->size=size;
	this->name=name;
}

void Family::setName(int n, string name)
{
	p[n].setname(name);
}

void Family::show()
{
	cout<<name<<"가족은 다음과 같이 "<<size<<"명 입니다."<<endl;
	for(int i=0; i<size; i++) cout<<p[i].getName()<<"\t";
	cout<<endl;
}

Family::~Family()
{
	delete [] p;
}

int main()
{
	Family *simpson=new Family("Simpson", 3);
	simpson->setName(0, "Mr.Simpson");
	simpson->setName(1, "Mrs.Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}
*/

/*Q5
#include <iostream>
#include <string>
using namespace std;

class Circle{
	int radius;
	string name;
public:
	Circle(){;}
	void setCircle(string name, int radius) {this->name=name; this->radius=radius;}
	double getArea(){return 3.14*radius*radius;}
	string getName(){return name;}
};

class CircleManager{
	Circle *p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();
	void setCircleManager(int i, string name, int radius) {p[i].setCircle(name, radius);}
};

CircleManager::CircleManager(int size)
{
	p=new Circle[size];
	this->size=size;
}

CircleManager::~CircleManager()
{
	delete [] p;
}

void CircleManager::searchByName()
{
	string str;
	cout<<"검색하고자 하는 원의 이름 >> ";
	cin>>str;
	for(int i=0; i<size; i++) {
		if(p[i].getName()==str) cout<<p[i].getName()<<"의 면적은 "<<p[i].getArea()<<endl;
	}
}

void CircleManager::searchByArea()
{
	int m;
	cout<<"최소 면적을 정수로 입력하세요 >> ";
	cin>>m;
	for(int i=0; i<size; i++) {
		if(p[i].getArea()>m) cout<<p[i].getName()<<"의 면적은 "<<p[i].getArea()<<", ";
	}
	cout<<endl;
}

int main()
{
	string s;
	int n, r;
	cout<<"원의 개수 >> ";
	cin>>n;
	CircleManager *cm=new CircleManager(n);
	for(int i=0; i<n; i++) {
		cout<<"원 "<<i+1<<"의 이름과 반지름 >> ";
		cin>>s>>r;
		cm->setCircleManager(i, s, r);
	}
	cm->searchByName();
	cm->searchByArea();
}
*/

/*Q6*/
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
 
class Player {
    string player[2];
    int i;
public:
    Player() {i=0;}
    void setName(string name) { player[i] = name; i++; }
    string getName() {
        i++;
        if(i>=2) {
            i=0;
            return player[i];
        }
        else
            return player[i];
    }
};
 
class GamblingGame {
    int num[3];
public :
    GamblingGame(){srand((unsigned)time(0));}
    void Game(int n);
};

void GamblingGame::Game(int n) {
    Player p;
	string name;
    cout << "첫번째 선수 이름>>";
    cin>>name;
    p.setName(name);
    cout << "두번째 선수 이름>>";
    cin>>name;
    p.setName(name);
 
    string pl;
    
    for(;;) {
        pl = p.getName();
        cout << pl << ":<Enter>";
        getline(cin,name);
		cout<<endl;
        for(int i=0; i<3; i++)
            num[i] = rand() % n;
        cout << "\t\t" << num[0] << "\t" << num[1] << "\t" << num[2] << "\t";
        if( num[0] == num[1] && num[1] == num[2]) {
            cout << pl << "님 승리!!" << endl;
            break;
        }
        else
            cout << "아쉽군요!" << endl;
    }
}

int main() {
	GamblingGame g;
	int n;
	cout << "***** 갬블링 게임을 시작합니다. *****" << endl;
	cout<<"숫자 범위를 입력하세요.(3개 or 4개 or 5개)";
	cin>>n;
	g.Game(n);
	cout<<endl;
}