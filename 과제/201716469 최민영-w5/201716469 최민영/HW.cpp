/*Q1
#include <iostream>
using namespace std;

class Circle{
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() {return 3.14*radius*radius;}
	int getRadius() {return radius;}
	void setRadius(int radius) {this->radius=radius;}
};

Circle::Circle() {
	radius=1;
	cout<<"생성자 실행 radius = "<<radius<<endl;
}

Circle::Circle(int radius) {
	this->radius=radius;
	cout<<"생성자 실행 radius = "<<radius<<endl;
}

Circle::~Circle() {
	cout<<"소멸자 실행 radius = "<<radius<<endl;
}

void increase(Circle c)
{
	int r=c.getRadius();
	c.setRadius(r+1);
}

int main()
{
	Circle waffle(30);
	increase(waffle);
	cout<<waffle.getRadius()<<endl;
}

#include <iostream>
using namespace std;

class Circle{
	int radius;
public:
	Circle() {radius=1;}
	Circle(int radius) {this->radius=radius;}
	void setRadius(int radius) {this->radius=radius;}
	double getArea() {return 3.14*radius*radius;}
};

Circle getCircle() {
	Circle tmp(30);
	return tmp;
}

int main()
{
	Circle c;
	cout<<c.getArea()<<endl;
	c=getCircle();
	cout<<c.getArea()<<endl;
}

#include <iostream>
using namespace std;

int main()
{
	cout<<"i"<<'\t'<<"n"<<'\t'<<"refn"<<endl;
	int i=1;
	int n=2;
	int &refn=n;
	n=4;
	refn++;
	cout<<"i"<<'\t'<<"n"<<'\t'<<"refn"<<endl;

	refn=i;
	refn++;
	cout<<"i"<<'\t'<<"n"<<'\t'<<"refn"<<endl;

	int *p=&refn;
	*p=20;
	cout<<"i"<<'\t'<<"n"<<'\t'<<"refn"<<endl;
}

#include <iostream>
using namespace std;

class Circle{
	int radius;
public:
	Circle() {radius=1;}
	Circle(int radius) {this->radius=radius;}
	void setRadius(int radius) {this->radius=radius;}
	double getArea() {return 3.14*radius*radius;}
};

int main()
{
	Circle circle;
	Circle &refc=circle;
	refc.setRadius(10);
	cout<<refc.getArea()<<" "<<circle.getArea();
}

#include <iostream>
using namespace std;

bool average(int a[], int size, int& avg) {
	if(size<=0) return false;
	int sum=0;
	for(int i=0; i<size; i++) sum+=a[i];
	avg=sum/size;
	return true;
}

int main()
{
	int x[]={0, 1, 2, 3, 4, 5};
	int avg;
	if(average(x, 6, avg)) cout<<"평균은 "<<avg<<endl;
	else cout<<"매개 변수 오류"<<endl;

	if(average(x, -2, avg)) cout<<"평균은 "<<avg<<endl;
	else cout<<"매개 변수 오류"<<endl;
}

#include <iostream>
using namespace std;

class Circle{
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() {return 3.14*radius*radius;}
	int getRadius() {return radius;}
	void setRadius(int radius) {this->radius=radius;}
};

Circle::Circle()
{
	radius=1;
	cout<<"생성자 실행 radius = "<<radius<<endl;
}

Circle::Circle(int radius)
{
	this->radius=radius;
	cout<<"생성자 실행 radius = "<<radius<<endl;
}

Circle::~Circle()
{
	cout<<"소멸자 실행 radius = "<<radius<<endl;
}

void increase(Circle &c)
{
	int r=c.getRadius();
	c.setRadius(r+1);
}

int main()
{
	Circle waffle(30);
	increase(waffle);
	cout<<waffle.getRadius()<<endl;
}

#include <iostream>
using namespace std;

class Circle{
	int radius;
public:
	Circle() {radius=1;}
	Circle(int radius) {this->radius=radius;}
	void setRadius(int radius) {this->radius=radius;}
	double getArea() {return 3.14*radius*radius;}
};

void readRadius(Circle &c)
{
	int r;
	cout<<"정수 값으로 반지름을 입력하세요>>";
	cin>>r;
	c.setRadius(r);
}
int main()
{
	Circle donut;
	readRadius(donut);
	cout<<"donut의 면적 = "<<donut.getArea()<<endl;
}

#include <iostream>
using namespace std;

char& find(char s[], int index)
{
	return s[index];
}

int main()
{
	char name[]="Mike";
	cout<<name<<endl;

	find(name, 0)='S';
	cout<<name<<endl;

	char& ref=find(name, 2);
	ref='t';
	cout<<name<<endl;
}

#include <iostream>
using namespace std;

class Circle{
private:
	int radius;
public:
	Circle(Circle &c);
	Circle() {radius=1;}
	Circle(int radius) {this->radius=radius;}
	double getArea() {return 3.14*radius*radius;}
};

Circle::Circle(Circle &c)
{
	this->radius=c.radius;
	cout<<"복사 생성자 실행 radius = "<<radius<<endl;
}

int main()
{
	Circle src(30);
	Circle dest(src);

	cout<<"원본의 면적 = "<<src.getArea()<<endl;
	cout<<"사본의 면적 = "<<dest.getArea()<<endl;
}

#include <iostream>
#include <cstring>
using namespace std;

class Person{
	char* name;
	int id;
public:
	Person(int id, char* name);
	~Person();
	void changeName(char *name);
	void show() {cout<<id<<','<<name<<endl;}
};

Person::Person(int id, char* name)
{
	this->id=id;
	int len=strlen(name);
	this->name=new char [len+1];
	strcpy(this->name, name);
}

Person::~Person()
{
	if(name)
		delete []name;
}

void Person::changeName(char* name)
{
	if(strlen(name)>strlen(this->name)) return;
	strcpy(this->name, name);
}

int main()
{
	Person father(1, "Kitae");
	Person daughter(father);

	cout<<"daughter 객체 생성 직후 ----"<<endl;
	father.show();
	daughter.show();
	daughter.changeName("Grace");
	cout<<"daughter 이름을 Grace로 변경한 후 ----"<<endl;
	father.show();
	daughter.show();

	return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

class Person{
	char* name;
	int id;
public:
	Person(int id, char* name);
	Person(Person& person);
	~Person();
	void changeName(char *name);
	void show() {cout<<id<<','<<name<<endl;}
};

Person::Person(int id, char* name)
{
	this->id=id;
	int len=strlen(name);
	this->name=new char [len+1];
	strcpy(this->name, name);
}

Person::Person(Person& person)
{
	this->id=person.id;
	int len=strlen(person.name);
	this->name=new char [len+1];
	strcpy(this->name, person.name);
	cout<<"복사 생성자 실행. 원본 객체의 이름"<<this->name<<endl;
}

Person::~Person()
{
	if(name) delete [] name;
}

void Person::changeName(char* name)
{
	if(strlen(name)>strlen(this->name)) return;
	strcpy(this->name, name);
}

int main()
{
	Person father(1, "Kitae");
	Person daughter(father);

	cout<<"daughter 객체 생성 직후 ----"<<endl;
	father.show();
	daughter.show();
	
	daughter.changeName("Grace");
	cout<<"daughter 이름을 Grace로 변경한 후 ----"<<endl;
	father.show();
	daughter.show();

	return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

class Person{
	char* name;
	int id;
public:
	Person(int id, char* name);
	Person(Person& person);
	~Person();
	void changeName(char *name);
	void show() {cout<<id<<','<<name<<endl;}
};

Person::Person(int id, char* name)
{
	this->id=id;
	int len=strlen(name);
	this->name=new char [len+1];
	strcpy(this->name, name);
}

Person::Person(Person& person)
{
	this->id=person.id;
	int len=strlen(person.name);
	this->name=new char [len+1];
	strcpy(this->name, person.name);
	cout<<"복사 생성자 실행. 원본 객체의 이름"<<this->name<<endl;
}

Person::~Person()
{
	if(name) delete [] name;
}

void Person::changeName(char* name)
{
	if(strlen(name)>strlen(this->name)) return;
	strcpy(this->name, name);
}

void f(Person person)
{
	person.changeName("dummy");
}

Person g()
{
	Person mother(2, "Jane");
	return mother;
}

int main()
{
	Person father(1, "Kitae");
	Person son=father;
	f(father);
	g();
}
*/

/*Q2
#include <iostream>
using namespace std;

class Circle{
	int radius;
public:
	Circle(int radius) {this->radius=radius;}
	void setRadius(int radius) {this->radius=radius;}
	int getRadius() {return radius;}
	
};

void swap(Circle &a, Circle &b)
{
	int tmp;
	tmp=a.getRadius();
	a.setRadius(b.getRadius());
	b.setRadius(tmp);
}

int main()
{
	Circle a(1);
	Circle b(10);
	cout<<"swap 전"<<endl;
	cout<<"a 반지름 : "<<a.getRadius()<<endl;
	cout<<"b 반지름 : "<<b.getRadius()<<endl;
	swap(a, b);
	cout<<"swap 후"<<endl;
	cout<<"a 반지름 : "<<a.getRadius()<<endl;
	cout<<"b 반지름 : "<<b.getRadius()<<endl;
}
*/

/*Q3
#include <iostream>
using namespace std;

class Circle{
	int radius;
public:
	Circle(int r) {radius=r;}
	int getRadius() {return radius;}
	void setRadius(int r) {radius=r;}
	void show() {cout<<"반지름이 "<<radius<<"인 원"<<endl;}
};

void increaseBy(Circle &a, Circle &b) {
	int r=a.getRadius()+b.getRadius();
	a.setRadius(r);
}

int main()
{
	Circle x(10), y(5);
	increaseBy(x, y);
	x.show();
}
*/

/*Q4
#include <iostream>
#include <cstring>
using namespace std;

char& find(char a[], char c, bool& success)
{
	for(int i=0; strlen(a); i++) {
		if(a[i]==c) {
			success=true;
			return a[i];
		}
		else success=false;
	}
}

int main()
{
	char s[]="Mike";
	bool b=false;
	char& loc=find(s, 'M', b);
	if(b==false) {
		cout<<"M을 발견할 수 없다."<<endl;
		return 0;
	}
	loc='m';
	cout<<s<<endl;
}
*/

/*Q5
#include <iostream>
using namespace std;

class MyIntStack{
	int p[10];
	int tos;
public:
	MyIntStack();
	bool push(int n);
	bool pop(int &n);
};

MyIntStack::MyIntStack()
{
	tos=0;
}

bool MyIntStack::push(int n)
{
	if(tos==10) return false;
	else {
		p[tos]=n;
		tos++;
		return true;
	}
}

bool MyIntStack::pop(int &n)
{
	tos--;
	if(tos==-1) return false;
	else {
		n=p[tos];
		return true;
	}
}

int main()
{
	MyIntStack a;
	for(int i=0; i<11; i++) {
		if(a.push(i)) cout<<i<<' ';
		else cout<<endl<<i+1<<" 번째 stack full"<<endl;
	}
	int n;
	for(int i=0; i<11; i++) {
		if(a.pop(n)) cout<<n<<' ';
		else cout<<endl<<i+1<<" 번째 stack empty";
	}
	cout<<endl;
}
*/

/*Q6
#include <iostream>
using namespace std;

class MyIntStack{
	int *p;
	int size;
	int tos;
public:
	MyIntStack() {tos=0;}
	MyIntStack(int size) {p=new int[size]; tos=0; this->size=size;}
	MyIntStack(MyIntStack& s) {
		this->p=new int [s.size]; 
		this->tos=s.tos;
		this->size=s.size;
		for(int i=0; i<s.size; i++) this->p[i]=s.p[i];
	}
	~MyIntStack() {delete [] p;}
	bool push(int n);
	bool pop(int &n);
};

bool MyIntStack::push(int n)
{
	if(tos==size) return false;
	else {
		p[tos]=n;
		tos++;
		return true;
	}
}

bool MyIntStack::pop(int &n)
{
	tos--;
	if(tos==-1) return false;
	else {
		n=p[tos];
		return true;
	}
}

int main()
{
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b=a;
	b.push(30);
	
	int n;
	a.pop(n);
	cout<<"스택 a에서 팝한 값 "<<n<<endl;
	b.pop(n);
	cout<<"스택 b에서 팝한 값 "<<n<<endl;
}
*/

/*Q7*/
#include <iostream>
using namespace std;

class Accumulator{
	int value;
public:
	Accumulator(int value) {this->value=value;}
	Accumulator& add(int n) {value+=n; return *this;}
	int get() {return value;}
};

int main()
{
	Accumulator acc(10);
	acc.add(5).add(6).add(7);
	cout<<acc.get()<<endl;
}