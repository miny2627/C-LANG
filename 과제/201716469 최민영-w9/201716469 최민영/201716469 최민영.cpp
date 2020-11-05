/*Q1-1
#include <iostream>
using namespace std;
class Base{
public:
void f() {cout<<"Base::f() called"<<endl;}
};
class Derived : public Base {
public:
void f() {cout<<"Derived::f() called"<<endl;}
};
void main()
{
Derived d, *pDer;
pDer=&d;
pDer->f();
Base* pBase;
pBase=pDer;
pBase->f();
}
Q1-2
#include <iostream>
using namespace std;
class Base{
public:
virtual void f() {cout<<"Base::f() called"<<endl;}
};
class Derived : public Base{
public:
virtual void f() {cout<<"Derived::f() called"<<endl;}
};
void main() {
Derived d, *pDer;
pDer=&d;
pDer->f();
Base* pBase;
pBase=pDer;
pBase->f();
}
Q1-3
#include <iostream>
using namespace std;
class Base {
public:
virtual void f() {cout<<"Base::f() called"<<endl;}
};
class Derived : public Base{
public:
void f() {cout<<"Derived::f() called"<<endl;}
};
class GrandDerived: public Derived {
public:
void f() {cout<<"GrandDerived::f() called"<<endl;}
};
int main()
{
GrandDerived g;
Base *bp;
Derived *dp;
GrandDerived *gp;
bp=dp=gp=&g;
bp->f();
dp->f();
gp->f();
}
Q1-4
#include <iostream>
using namespace std;
class Shape{
public:
virtual void draw() {
cout<<"--Shape--";
}
};
class Circle : public Shape{
public:
int x;
virtual void draw() {
Shape::draw();
cout<<"Circle"<<endl;
}
};
int main() {
Circle circle;
Shape *pShape=&circle;
pShape->draw();
pShape->Shape::draw();
}
Q1-5
#include <iostream>
using namespace std;
class Base{
public:
virtual ~Base() {cout<<"~Base()"<<endl;}
};
class Derived: public Base{
public:
virtual ~Derived() {cout<<"~Derived()"<<endl;}
};
int main(){
Derived *dp=new Derived();
Base *bp=new Derived();
delete dp;
delete bp;
}
Q1-6
#include <iostream>
using namespace std;
class Calculator{
public:
virtual int add(int a, int b)=0;
virtual int subtract(int a, int b)=0;
virtual double average(int a[], int size)=0;
};
class GoodCalc : public Calculator{
public:
int add(int a, int b) {return a+b;}
int subtract(int a, int b) {return a-b;}
double average(int a[], int size) {
double sum=0;
for(int i=0; i<size; i++) sum+=a[i];
return sum/size;
}
};
int main()
{
int a[]={1, 2, 3, 4, 5};
Calculator *p=new GoodCalc();
cout<<p->add(2, 3)<<endl;
cout<<p->subtract(2, 3)<<endl;
cout<<p->average(a, 5)<<endl;
delete p;
}
Q1-7
#include <iostream>
using namespace std;
class Calculator{
void input() {
cout<<"정수 2개를 입력하세요>> ";
cin>>a>>b;
}
protected:
int a, b;
virtual int calc(int a, int b)=0;
public:
void run() {
input();
cout<<"계산된 값은 "<<calc(a, b)<<endl;
}
};
class Adder : public Calculator{
protected:
int calc(int a, int b) {
return a+b;
}
};
class Subtractor : public Calculator {
protected:
int calc(int a, int b) {
return a-b;
}
};
int main() {
Adder adder;
Subtractor subtractor;
adder.run();
subtractor.run();
}
*/
/*Q2
#include <iostream>
#include <string>
using namespace std;
class Converter {
protected:
double ratio;
virtual double convert(double src)=0;
virtual string getSourceString()=0;
virtual string getDestString()=0;
public:
Converter(double ratio) {this->ratio=ratio;}
void run() {
double src;
cout<<getSourceString()<<"을 "<<getDestString()<<"로 바꿉니다. ";
cout<<getSourceString()<<"을 입력하세요>> ";
cin>>src;
cout<<"변환 결과 : "<<convert(src)<<getDestString()<<endl;
}
};
class WonToDollar : public Converter {
protected:
virtual double convert(double src) {
return src/ratio;
}
virtual string getSourceString() { return "원"; }
virtual string getDestString() { return "달러"; }
public:
WonToDollar(double ratio) : Converter(ratio) {}
};
int main() {
WonToDollar wd(1010);
wd.run();
}
*/
/*Q3
#include <iostream>
#include <string>
using namespace std;
class LoopAdder {
string name;
int x, y, sum;
void read();
void write();
protected:
LoopAdder(string name="") {
this->name=name;
}
int getX() {return x;}
int getY() {return y;}
virtual int calculate()=0;
public:
void run();
};
void LoopAdder::read() {
cout<<name<<":"<<endl;
cout<<"처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
cin>>x>>y;
}
void LoopAdder::write() {
cout<<x<<"에서 "<<y<<"까지의 합 = "<<sum<<" 입니다"<<endl;
}
void LoopAdder::run() {
read();
sum=calculate();
write();
}
class ForLoopAdder : public LoopAdder{
protected:
int calculate() {
int sum=0;
for(int i=getX(); i<=getY(); i++) {
sum+=i;
}
return sum;
}
public:
ForLoopAdder(string name) : LoopAdder(name) {}
};
int main() {
ForLoopAdder forLoop("For Loop");
forLoop.run();
}
*/
/*Q4
#include <iostream>
#include <string>
using namespace std;
class LoopAdder {
	string name;
	int x, y, sum;
	void read();
	void write();
protected:
	LoopAdder(string name="") {
	this->name=name;
	}
	int getX() {return x;}
	int getY() {return y;}
	virtual int calculate()=0;
public:
	void run();
};

void LoopAdder::read() {
	cout<<name<<":"<<endl;
	cout<<"처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
	cin>>x>>y;
}

void LoopAdder::write() {
	cout<<x<<"에서 "<<y<<"까지의 합 = "<<sum<<" 입니다"<<endl;
}

void LoopAdder::run() {
	read();
	sum=calculate();
	write();
}

class WhileLoopAdder : public LoopAdder{
protected:
	int calculate() {
	int sum=0;
	int x=getX(); int y=getY();
	while(x<y+1) {
	sum+=x;
	x++;
}
	return sum;
}
public:
	WhileLoopAdder(string name) : LoopAdder(name) {}
};
class DoWhileLoopAdder : public LoopAdder{
protected:
	int calculate() {
	int sum=0;
	int x=getX(); int y=getY();
	do{
	sum+=x;
	x++;
}
	while(x<y+1);
	return sum;
}
public:
	DoWhileLoopAdder(string name) : LoopAdder(name) {}
};

int main() {
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhileLoop("Do While Loop");
	whileLoop.run();
	doWhileLoop.run();
}
*/

/*Q5*/
#include <iostream>
#include <string>
using namespace std;

class Shape{
	Shape* next;
protected:
	virtual void draw() { cout << " Shape" << endl; }
public:
	Shape() {next=NULL;}
	virtual ~Shape() {}
	void paint() {draw();}
	Shape* add(Shape* p) { this->next=p; return p;}
	Shape* getNext() {return next;}
	void setNext(Shape* p) {this->next=p->next;}
};

class Circle : public Shape{
protected:
	virtual void draw() {cout<<"Circle"<<endl;}
};

class Rect : public Shape {
protected:
	virtual void draw() {cout<<"Rectangle"<<endl;}
};

class Line : public Shape {
protected:
	virtual void draw() {cout<<"Line"<<endl;}
};

class UI {
public:
	static int selectMenu()
	{
		int menu;
		cout<<"삽입 : 1, 삭제 : 2, 모두보기 : 3, 종료 : 4 >> ";
		cin>>menu;
		return menu;
	}
	static int selectShape()
	{
		int kind;
		cout<<"선 : 1, 원 : 2, 사각형 : 3 >>";
		cin>>kind;
		return kind;
	}
	static int deleteMenu()
	{
		int sub;
		cout<<"삭제하고자 하는 도형의 인덱스 >> ";
		cin>>sub;
		return sub;
	}
};

class GraphicEditor : public Shape{
	Shape *pStart;
	Shape *pLast;
	Shape *p;
public:
	GraphicEditor() {pStart=NULL; pLast=NULL;}
	void run()
	{
		static int num=0;
		cout<<"그래픽 에디터입니다."<<endl;
		while(true) {
			int m=UI::selectMenu();
			if(m==1) {
				int shape=UI::selectShape();
				if(num==0) {
					switch(shape) {
					case 1: pStart = new Line(); break;
                    case 2: pStart = new Circle(); break;
                    case 3: pStart = new Rect(); break;
					}
					pLast=pStart;
				}
				else {
					switch(shape) {
					case 1: pLast = pLast->add(new Line()); break;
					case 2: pLast = pLast->add(new Circle()); break;
                    case 3: pLast = pLast->add(new Rect()); break;
					}
				}
				num++;
			}
			else if(m==2) {
				int sub=UI::deleteMenu();
				p=pStart;
				if(sub==0) {
					pStart=p->getNext();
					num--;
				}
				else if(sub<=(num-1)) {
					Shape *prev=p; Shape *node=p->getNext();
					int n=sub;
					while(sub!=1) {
						prev=node;
						node=node->getNext();
						sub--;
					}
					prev->setNext(node);
					num--;
					if(num==1) pLast=pStart;

					if(num==n) pLast=prev;
					delete node;
				}
			}
			else if(m==3) {
				int i=0; p=pStart;
				while(p!=NULL) {
					cout<<i<<" :";
					p->paint();
					p=p->getNext();
					i++;
				}
			}
			else if(m==4) exit(0);
		}
	}
};

int main(){
	GraphicEditor g;
	g.run();
}