/*Q1-1
#include <iostream>
#include <string>
using namespace std;

class Point{
	int x, y;
public:
	void set(int x, int y){this->x=x; this->y=y;}
	void showPoint() {
		cout<<"("<<x<<","<<y<<")"<<endl;
	}
};

class ColorPoint : public Point{
	string color;
public:
	void setColor(string color) {this->color=color;}
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout<<color<<":";
	showPoint();
}

int main()
{
	Point p;
	ColorPoint cp;
	cp.set(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();
}

(2)
#include <iostream>
#include <string>
using namespace std;

class Point{
	int x, y;
public:
	void set(int x, int y){this->x=x; this->y=y;}
	void showPoint() {
		cout<<"("<<x<<","<<y<<")"<<endl;
	}
};

class ColorPoint : public Point{
	string color;
public:
	void setColor(string color) {this->color=color;}
	void showColorPoint();
	bool equals(ColorPoint p);
};

void ColorPoint::showColorPoint() {
	cout<<color<<":";
	showPoint();
}

bool ColorPoint::equals(ColorPoint p){
	if(x==p.x && y==p.y &&color==p.color) 
		return true;
	else
		return false;
}

int main() {
	Point p;
	p.set(2,3);
	p.x=5;
	p.y=5;
	p.showPoint();

	ColorPoint cp;
	cp.x=10;
	cp.y=10;
	cp.set(3,4);
	cp.setColor("Red");

	ColorPoint cp2;
	cp2.set(3, 4);
	cp.setColor("Red");
	cout<<((cp.equals(cp2))?"true":"false");
}

(3)
#include <iostream>
#include <string>
using namespace std;

class TV{
	int size;
public:
	TV() {size=20;}
	TV(int size) {this->size=size;}
	int getSize() {return size;}
};

class WideTV : public TV{
	bool videoIn;
public:
	WideTV(int size, bool videoIn) : TV(size) {
		this->videoIn=videoIn;
	}
	bool getVideoIn() {return videoIn;}
};

class SmartTV : public WideTV {
	string ipAddr;
public:
	SmartTV(string ipAddr, int size) : WideTV(size, true) {
		this->ipAddr=ipAddr;
	}
	string getIpAddr() {return ipAddr;}
};

int main()
{
	SmartTV htv("192.0.0.1", 32);
	cout<<"size="<<htv.getSize()<<endl;
	cout<<"videoIn="<<boolalpha<<htv.getVideoIn()<<endl;
	cout<<"IP="<<htv.getIpAddr()<<endl;
}

(4)
#include <iostream>
using namespace std;

class Base{
	int a;
protected:
	void setA(int a) {this->a=a;}
public:
	void showA() {cout<<a;}
};

class Derived : private Base {
	int b;
protected:
	void setB(int b) {this->b=b;}
public:
	void showB() {cout<<b;}
};

int main()
{
	Derived x;
	x.a=5;
	x.setA(10);
	x.showA();
	x.b=10;
	x.setB();
	x.showB();
}

(5)
#include <iostream>
using namespace std;

class Base{
	int a;
protected:
	void setA(int a) {this->a=a;}
public:
	void showA() {cout<<a;}
};

class Derived : protected Base{
	int b;
protected:
	void setB(int b) {this->b=b;}
public:
	void showB() {cout<<b;}
};

int main()
{
	Derived x;
	x.a=5;
	x.setA(10);
	x.showA();
	x.b=10;
	x.setB(10);
	x.showB();
}

(6)
#include <iostream>
using namespace std;

class Base{
	int a;
protected:
	void setA(int a) {this->a=a;}
public:
	void showA() {cout<<a;}
};

class Derived : protected Base{
	int b;
protected:
	void setB(int b) {this->b=b;}
public:
	void showB() {
		setA(5);
		showA();
		cout<<b;
	}
};

class GrandDerived : private Derived{
	int c;
protected:
	void setAB(int x) {
		setA(x);
		showA();
		setB(x);
	}
};

(7)
#include <iostream>
using namespace std;

class Adder{
protected:
	int add(int a, int b) {return a+b;}
};

class Subtractor{
protected:
	int minus(int a, int b) {return a-b;}
};

class Calculator : public Adder, public Subtractor {
public:
	int calc(char op, int a, int b);
};

int Calculator::calc(char op, int a, int b) {
	int res=0;
	switch(op) {
	case '+' : res=add(a, b); break;
	case '-' : res=minus(a, b); break;
	}
	return res;
}

int main() {
	Calculator handCalculator;
	cout<<"2 + 4 = "<<handCalculator.calc('+', 2, 4)<<endl;
	cout<<"100 - 8 = "<<handCalculator.calc('-', 100, 8)<<endl;
}
*/

/*Q2
#include <iostream>
#include <string>
using namespace std;

class Circle{
	int radius;
public:
	Circle(int radius=0) {this->radius=radius;}
	int getRadius() {return radius;}
	void setRadius(int radius) {this->radius=radius;}
	double getArea() {return 3.14*radius*radius;}
};

class NamedCircle : public Circle{
	string name;
public:
	NamedCircle();
	NamedCircle(int radius, string name) : Circle(radius) {this->name=name;}
	void show() {
		cout<<"�������� "<<getRadius()<<"�� "<<name<<endl;
	}
};

int main()
{
	NamedCircle waffle(3, "waffle");
	waffle.show();
}
*/

/*Q3
#include <iostream>
#include <string>
using namespace std;

class Point{
	int x, y;
public:
	Point(int x, int y) {this->x=x; this->y=y;}
	int getX() {return x;}
	int getY() {return y;}
protected:
	void move(int x, int y) {this->x=x; this->y=y;}
};

class ColorPoint : public Point {
	string color;
public:
	ColorPoint(int x, int y, string color) : Point(x, y) {this->color=color;}
	void setPoint(int a, int b){move(a, b);}
	void setColor(string color){this->color=color;}
	void show() {cout<<color<<"������ ("<<getX()<<","<<getY()<<")�� ��ġ�� ���Դϴ�."<<endl;}
};

int main()
{
	ColorPoint cp(5, 5, "Red");
	cp.setPoint(10, 20);
	cp.setColor("Blue");
	cp.show();
}
*/

/*Q4
#include <iostream>
using namespace std;

class BaseArray{
private:
	int capacity;
	int *mem;
protected:
	BaseArray(int capacity=100) {
		this->capacity=capacity; mem=new int [capacity];
	}
	~BaseArray() {delete []mem;}
	void put(int index, int val) {mem[index]=val;}
	int get(int index) {return mem[index];}
	int getCapacity() {return capacity;}
};

class MyQueue : public BaseArray{
	int first;
	int last;
public:
	MyQueue(int capacity) : BaseArray(capacity) {first=0; last=-1;}
	void enqueue(int n) {put(first, n); first++;}
	int dequeue(){first--; last++; return get(last);}
	int length() {return first;}
	int capacity(){return getCapacity();}
};

int main()
{
	MyQueue mQ(100);
	int n;
	cout<<"ť�� ������ 5���� ������ �Է��϶�>> ";
	for(int i=0; i<5; i++) {
		cin>>n;
		mQ.enqueue(n);
	}
	cout<<"ť�� �뷮:"<<mQ.capacity()<<", ť�� ũ��:"<<mQ.length()<<endl;
	cout<<"ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
	while(mQ.length()!=0) {
		cout<<mQ.dequeue()<<' ';
	}
	cout<<endl<<"ť�� ���� ũ�� : "<<mQ.length()<<endl;
}
*/

/*Q5
#include <iostream>
using namespace std;

class BaseArray{
private:
	int capacity;
	int *mem;
protected:
	BaseArray(int capacity=100) {
		this->capacity=capacity; mem=new int [capacity];
	}
	~BaseArray() {delete []mem;}
	void put(int index, int val) {mem[index]=val;}
	int get(int index) {return mem[index];}
	int getCapacity() {return capacity;}
};

class MyStack : public BaseArray{
	int count;
public:
	MyStack(int capacity) : BaseArray(capacity) {count=0;}
	void push(int n) {put(count, n); count++;}
	int pop() {count--; return get(count);}
	int length() {return count;}
	int capacity(){return getCapacity();}
};

int main()
{
	MyStack mStack(100);
	int n;
	cout<<"���ÿ� ������ 5���� ������ �Է��϶�>> ";
	for(int i=0; i<5; i++) {
		cin>>n;
		mStack.push(n);
	}
	cout<<"���ÿ뷮 : "<<mStack.capacity()<<", ����ũ�� : "<<mStack.length()<<endl;
	cout<<"������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";
	while(mStack.length()!=0) {
		cout<<mStack.pop()<<' ';
	}
	cout<<endl<<"������ ���� ũ�� : "<<mStack.length()<<endl;
}
*/

/*Q6*/
#include <iostream>
using namespace std;

class BaseMemory{
	char *mem;
	int size;
protected:
	BaseMemory(int size) {mem=new char[size]; this->size=size;}
	~BaseMemory() {delete [] mem;}
	void setBase(char mem[], int address, int size) {
		for(int i=0; i<size; i++) {
			this->mem[address+i]=mem[i];
		}
	}
public:
	char read(int i){return mem[i];}
};

class ROM : public BaseMemory {
public:
	ROM(int size, char mem[], int ROMsize) : BaseMemory(size) {
		setBase(mem, 0, ROMsize);
	}
};

class RAM : public BaseMemory {
public:
	RAM(int size) : BaseMemory(size) {;}
	void write(int address, char w) {
		setBase(&w, address, 1);
	}
};


int main()
{
	char x[5]={'h', 'e', 'l', 'l', 'o'};
	ROM biosROM(1024*10, x, 5);
	RAM mainMemory(1024*1024);

	for(int i=0; i<5; i++) mainMemory.write(i, biosROM.read(i));
	for(int i=0; i<5; i++) cout<<mainMemory.read(i);
}