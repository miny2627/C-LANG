/*Q1
1.
#include <iostream>
using namespace std;

class Circle{
	public:
		int radius;
		double getArea();
};

double Circle::getArea()
{
	return 3.14*radius*radius;
}

int main(void)
{
	Circle donut;
	donut.radius=1;
	double area=donut.getArea();
	cout<<"donut 면적은 "<<area<<endl;

	Circle pizza;
	pizza.radius=30;
	area=pizza.getArea();
	cout<<"pizza 면적은 "<<area<<endl;
}

2.
#include <iostream>
using namespace std;

class Rectangle{
	public:
		int width;
		int height;
		int getArea();
};

int Rectangle::getArea()
{
	return width*height;
}

int main(void)
{
	Rectangle rect;
	rect.width=3;
	rect.height=5;
	cout<<"사각형의 면적은 "<<rect.getArea()<<endl;

}

3.
#include <iostream>
using namespace std;

Class Circle{
	public:
		int radius;
		Circle();
		Circle(int r);
		double getArea();
};

Circle::Circle()
{
	radius=1;
	cout<<"반지름 "<<radius<<" 원 생성"<<endl;
}

Circle::Circle(int r)
{
	radius=r;
	cout<<"반지름 "<<radius<<" 원 생성"<<endl;
}

double Circle::getArea()
{
	return 3.14*radius*radius;
}

int main(void)
{
	Circle donut;
	double area=donut.getArea();
	cout<<"donut 면적은 "<<area<<endl;

	Circle pizza(30);
	area=pizza.getArea();
	cout<<"pizza 면적은 "<<area<<endl;
}

4.
#include <iostream>
using namespace std;

class Rectangle{
	public:
		int width, height;
		Rectangle();
		Rectangle(int w, int h);
		bool isSquare();
};

Rectangle::Rectangle()
{
	width=height=1;
}

Rectangle::Rectangle(int w, int h)
{
	width=w; height=h;
}

Rectangle::Rectangle(int length)
{
	width=height=length;
}

bool Rectangle::isSquare()
{
	if(width==height) return true;
	else return false;
}

int main()
{
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if(rect1.isSquare()) cout<<"rect1은 정사각형이다."<<endl;
	if(rect2.isSquare()) cout<<"rect2는 정사각형이다."<<endl;
	if(rect3.isSquare()) cout<<"rect3는 정사각형이다."<<endl;
}

5.
#include <iostream>
using namespace std;

class Circle{
	public:
		int radius;
		Circle();
		Circle(int r);
		~Circle();
		double getArea();
};

Circle::Circle()
{
	radius=1;
	cout<<"반지름 "<<radius<<" 원 생성"<<endl;
}

Circle::Circle(int r)
{
	radius=r;
	cout<<"반지름 "<<radius<<" 원 생성"<<endl;
}

Circle::~Circle()
{
	cout<<"반지름 "<<radius<<" 원 소멸"<<endl;
}

double Circle::getArea()
{
	return 3.14*radius*radius;
}

int main()
{
	Circle donut;
	Circle pizza(30);
	return 0;
}

6.
#include <iostream>
using namespace std;

class Circle{
	public:
		int radius;
		Circle();
		Circle(int r);
		~Circle();
		double getArea();
};

Circle::Circle()
{
	radius=1;
	cout<<"반지름 "<<radius<<" 원 생성"<<endl;
}

Circle::Circle(int r)
{
	radius=r;
	cout<<"반지름 "<<radius<<" 원 생성"<<endl;
}

Circle::~Circle()
{
	cout<<"반지름 "<<radius<<" 원 생성"<<endl;
}

double Circle::getArea()
{
	return 3.14*radius*radius;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f()
{
	Circle fDonut(100);
	Circle fPizza(200);
}

int main()
{
	Circle mainDonut;
	Circle mainPizza(30);
	f();
}
*/

/*Q2
#include <iostream>
#include <cstdlib>;
#include <ctime>
using namespace std;

class Random{
	public:
		Random(){srand((unsigned)time(0));};
		int next();
		int nextInRange(int a, int b);
};

int Random::next()
{	
	return rand();
}

int Random::nextInRange(int a, int b)
{
	return a+(rand()%(b-a+1));
}


int main()
{
	Random r;
	cout<<"-- 0에서 "<<RAND_MAX<<" 까지의 랜덤 정수 10개--"<<endl;
	for(int i=0; i<10; i++) {
		int n=r.next();
		cout<<n<<' ';
	}
	cout<<endl<<endl<<"-- 2에서 "<<"4까지의 랜덤 정수 10개 --"<<endl;
	for(int i=0; i<10; i++) {
		int n=r.nextInRange(2, 4);
		cout<<n<<' ';
	}
	cout<<endl;
}
*/

/*Q3
#include <iostream>
using namespace std;

class Oval{
		int width;
		int height;
	public:	
		Oval();
		Oval(int a, int b);
		~Oval();
		int getWidth();
		int getHeight();
		void set(int w, int h);
		void show();
};

Oval::Oval()
{
	width=1;
	height=1;
}

Oval::Oval(int a, int b)
{
	width=a;
	height=b;
}

Oval::~Oval()
{
	cout<<"Oval 소멸 : width = "<<width<<", height = "<<height<<endl;
}

int Oval::getWidth()
{
	return width;
}

int Oval::getHeight()
{
	return height;
}

void Oval::set(int w, int h)
{
	width=w;
	height=h;
}

void Oval::show()
{
	cout<<"width = "<<width<<", height = "<<height<<endl;
}

int main()
{
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout<<b.getWidth()<<","<<b.getHeight()<<endl;
}
*/

/*Q4

//cal.h 
class Add{
	private:
		int a;
		int b;
	public:
		void setValue(int x, int y);
		int calculate();
};

class Sub{
	private:
		int a;
		int b;
	public:
		void setValue(int x, int y);
		int calculate();
};

class Mul{
	public:
		private:
		int a;
		int b;
	public:
		void setValue(int x, int y);
		int calculate();
};

class Div{
	private:
		int a;
		int b;
	public:
		void setValue(int x, int y);
		int calculate();
};
//구현부 
#include <iostream>
#include "cal.h"
using namespace std;

void Add::setValue(int x, int y)
{
	a=x;
	b=y;
}

void Sub::setValue(int x, int y)
{
	a=x;
	b=y;
}

void Mul::setValue(int x, int y)
{
	a=x;
	b=y;
}

void Div::setValue(int x, int y)
{
	a=x;
	b=y;
}

int Add::calculate()
{
	return a+b;
}

int Sub::calculate()
{
	return a-b;
}

int Mul::calculate()
{
	return a*b;
}

int Div::calculate()
{
	return a/b;
}

int main()
{
	Add a;
	Sub s;
	Mul m;
	Div d;
	int n, i;
	char l;
	for(;;) {
		cout<<"두 정수와 연산자를 입력하세요>>";
		cin>>n>>i>>l;
		if(l=='+') {
			a.setValue(n, i);
			cout<<a.calculate()<<endl;
		}
		else if(l=='-') {
			s.setValue(n, i);
			cout<<s.calculate()<<endl;
		}
		else if(l=='*') {
			m.setValue(n, i);
			cout<<m.calculate()<<endl;
		}
		else if(l=='/') {
			d.setValue(n, i);
			cout<<d.calculate()<<endl;
		}
		
	}
}
//Calculator.cpp
#include <iostream>
using namespace std;

class Add{
	private:
		int a;
		int b;
	public:
		void setValue(int x, int y);
		int calculate();
};

class Sub{
	private:
		int a;
		int b;
	public:
		void setValue(int x, int y);
		int calculate();
};

class Mul{
	public:
		private:
		int a;
		int b;
	public:
		void setValue(int x, int y);
		int calculate();
};

class Div{
	private:
		int a;
		int b;
	public:
		void setValue(int x, int y);
		int calculate();
};

void Add::setValue(int x, int y)
{
	a=x;
	b=y;
}

void Sub::setValue(int x, int y)
{
	a=x;
	b=y;
}

void Mul::setValue(int x, int y)
{
	a=x;
	b=y;
}

void Div::setValue(int x, int y)
{
	a=x;
	b=y;
}

int Add::calculate()
{
	return a+b;
}

int Sub::calculate()
{
	return a-b;
}

int Mul::calculate()
{
	return a*b;
}

int Div::calculate()
{
	return a/b;
}

int main()
{
	Add a;
	Sub s;
	Mul m;
	Div d;
	int n, i;
	char l;
	for(;;) {
		cout<<"두 정수와 연산자를 입력하세요>>";
		cin>>n>>i>>l;
		if(l=='+') {
			a.setValue(n, i);
			cout<<a.calculate()<<endl;
		}
		else if(l=='-') {
			s.setValue(n, i);
			cout<<s.calculate()<<endl;
		}
		else if(l=='*') {
			m.setValue(n, i);
			cout<<m.calculate()<<endl;
		}
		else if(l=='/') {
			d.setValue(n, i);
			cout<<d.calculate()<<endl;
		}
		
	}
} 
*/

/*Q5*/
#include <iostream>
using namespace std;

class Point{
	protected:
		int m_x;
		int m_y;
	public:
		void GetX(int x);
		void GetY(int y);
		bool SetX(int x);
		bool SetY(int y);
		bool IsEqual(const Point &a, const Point &b);
		void Print();
};

void Point::GetX(int x)
{
	x=m_x;
}

void Point::GetY(int y)
{
	m_y=y;
}

bool Point::SetX(int x)
{
	if(x<0) {
		m_x=0;
		cout<<"X 좌표 변경 실패"<<endl;
		return false;
	}
	else if(x>1000) {
		m_x=1000;
		cout<<"X 좌표 변경 실패"<<endl;
		return false;
	}
	else {
	m_x=x;
	return true;
	}
}

bool Point::SetY(int y)
{
	if(y<0) {
		m_y=0;
		cout<<"Y 좌표 변경 실패"<<endl;
		return false;
	}
	else if(y>1000) {
		m_y=1000;
		cout<<"Y 좌표 변경 실패"<<endl;
		return false;
	}
	else {
	m_y=y;
	return true;
	}
}

void Point::Print()
{
	cout<<"("<<m_x<<", "<<m_y<<")"<<endl;
}

bool Point::IsEqual(const Point &a, const Point &b)
{
	if(a.m_x==b.m_x && a.m_y==b.m_y) return true;
	else return false;
}

int main()
{
	Point p;
	
	Point p1;
	int x, y;
	cout<<"p1:"<<endl;
	cin>>x>>y;
	p1.GetX(x);
	p1.GetY(y);
	
	Point p2;
	int a, b;
	cout<<"p2:"<<endl;
	cin>>a>>b;
	p2.GetX(a);
	p2.GetY(b);
	 
	p1.SetX(x);
	p1.SetY(y);
	p2.SetX(a);
	p2.SetY(b);
	
	
	cout<<"p1 = ";
	p1.Print();
	cout<<"p2 = ";
	p2.Print();
	if(p.IsEqual(p1, p2)) cout<<"p1 과 p2의 값은 같습니다."<<endl;
	else cout<<"p1 과 p2의 값은 다릅니다."<<endl;	
}
