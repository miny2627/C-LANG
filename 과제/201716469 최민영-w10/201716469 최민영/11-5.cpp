/*Q1-1
#include <iostream>
using namespace std;

class Circle{
	int radius;
public:
	Circle(int radius=1) {this->radius=radius;}
	int getRadius() {return radius;}
};

template <class T>
void myswap(T&a, T & b) {
	T tmp;
	tmp=a;
	a=b;
	b=tmp;
}

int main()
{
	int a=4, b=5;
	myswap(a, b);
	cout<<"a="<<a<<", "<<"b="<<b<<endl;

	double c=0.3, d=12.5;
	myswap(c, d);
	cout<<"c="<<c<<", "<<"d="<<d<<endl;

	Circle donut(5), pizza(20);
	myswap(donut, pizza);
	cout<<"donut반지름="<<donut.getRadius()<<", ";
	cout<<"pizza반지름="<<pizza.getRadius()<<endl;
}*/

/*Q1-2
#include <iostream>
using namespace std;

template <class T>
T bigger(T a, T b) {
	if(a>b) return a;
	else return b;
}

int main() {
	int a=20, b=50;
	char c='a', d='z';
	cout<<"bigger(20, 50)의 결과는 "<<bigger(a, b)<<endl;
	cout<<"bigger('a', 'z')의 결과는 "<<bigger(c, d)<<endl;
}
*/

/*Q1-3
#include <iostream>
using namespace std;

template <class T>
T add(T data[], int n) {
	T sum=0;
	for(int i=0; i<n; i++) {
		sum+=data[i];
	}
	return sum;
}

int main() {
	int x[]={1, 2, 3, 4, 5};
	double d[]={1.2, 2.3, 3.4, 4.5, 5.6, 6.7};

	cout<<"sum of x[] = "<<add(x, 5)<<endl;
	cout<<"sum of d[] = "<<add(d, 6)<<endl;
}
*/

/*Q1-4
#include <iostream>
using namespace std;

template <class T1, class T2>
void mcopy(T1 src[], T2 dest[], int n) {
	for(int i=0; i<n; i++) dest[i]=(T2)src[i];
}

int main()
{
	int x[]={1, 2, 3, 4, 5};
	double d[5];
	char c[5]={'H', 'e', 'l', 'l', 'o'}, e[5];

	mcopy(x, d, 5);
	mcopy(c, e, 5);

	for(int i=0; i<5; i++) cout<<d[i]<<' ';
	cout<<endl;
	for(int i=0; i<5; i++) cout<<e[i]<<' ';
	cout<<endl;
}
*/

/*Q1-5
#include <iostream>
using namespace std;

template <class T>
void print(T array[], int n) {
	for(int i=0; i<n; i++)
		cout<<array[i]<<'\t';
	cout<<endl;
}

void print(char array[], int n) {
	for(int i=0; i<n; i++)
		cout<<(int)array[i]<<'\t';
	cout<<endl;
}

int main() {
	int x[]={1, 2, 3, 4, 5};
	double d[5]={1.1, 2.2, 3.3, 4.4, 5.5};
	print(x, 5);
	print(d, 5);

	char c[5]={1, 2, 3, 4, 5};
	print(c, 5);
}
*/

/*Q1-6
#include <iostream>
using namespace std;

template <class T>
class MyStack{
	int tos;
	T data[100];
public:
	MyStack();
	void push(T element);
	T pop();
};

template <class T>
MyStack<T>::MyStack() {
	tos=-1;
}

template <class T>
void MyStack<T>::push(T element) {
	if(tos==99) {
		cout<<"stack full";
		return;
	}
	tos++;
	data[tos]=element;
}

template <class T>
T MyStack<T>::pop() {
	T retData;
	if(tos==-1) {
		cout<<"stack empty";
		return 0;
	}
	retData=data[tos--];
	return retData;
}

int main() {
	MyStack<int> iStack;
	iStack.push(3);
	cout<<iStack.pop()<<endl;

	MyStack<double> dStack;
	dStack.push(3.5);
	cout<<dStack.pop()<<endl;
	
	MyStack<char> *p=new MyStack<char>();
	p->push('a');
	cout<<p->pop()<<endl;
	delete p;
}
*/

/*Q1-7
#include <iostream>
#include <string>
using namespace std;

template <class T>
class MyStack{
	int tos;
	T data[100];
public:
	MyStack();
	void push(T element);
	T pop();
};

template <class T>
MyStack<T>::MyStack() {
	tos=-1;
}

template <class T>
void MyStack<T>::push(T element) {
	if(tos==99) {
		cout<<"stack full";
		return;
	}
	tos++;
	data[tos]=element;
}

template <class T>
T MyStack<T>::pop() {
	T retData;
	if(tos==-1) {
		cout<<"stack empty";
		return 0;
	}
	retData=data[tos--];
	return retData;
}

class Point {
	int x, y;
public:
	Point(int x=0, int y=0) {this->x=x; this->y=y;}
	void show() {cout<<'('<<x<<','<<y<<')'<<endl;}
};

int main() {
	MyStack<int *> ipStack;
	int *p=new int [3];
	for(int i=0; i<3; i++) p[i]=i*10;
	ipStack.push(p);
	int *q=ipStack.pop();
	for(int i=0; i<3; i++) cout<<q[i]<<' ';
	cout<<endl;
	delete []p;

	MyStack<Point> pointStack;
	Point a(2, 3), b;
	pointStack.push(a);
	b=pointStack.pop();
	b.show();

	MyStack<Point*> pStack;
	pStack.push(new Point(10, 20));
	Point *pPoint=pStack.pop();
	pPoint->show();

	MyStack<string> stringStack;
	string s="c++";
	stringStack.push(s);
	stringStack.push("java");
	cout<<stringStack.pop()<<' ';
	cout<<stringStack.pop()<<endl;
}
*/

/*Q1-8
#include <iostream>
using namespace std;

template <class T1, class T2>
class GClass{
	T1 data1;
	T2 data2;
public:
	GClass();
	void set(T1 a, T2 b);
	void get(T1 &a, T2 &b);
};

template <class T1, class T2>
GClass<T1, T2>::GClass() {
	data1=0; data2=0;
}

template <class T1, class T2>
void GClass<T1, T2>::set(T1 a, T2 b) {
	data1=a; data2=b;
}

template <class T1, class T2>
void GClass<T1, T2>::get(T1 &a, T2 &b) {
	a=data1; b=data2;
}

int main() {
	int a;
	double b;
	GClass<int, double> x;
	x.set(2, 0.5);
	x.get(a, b);
	cout<<"a="<<a<<'\t'<<"b="<<b<<endl;

	char c;
	float d;
	GClass<char, float> y;
	y.set('m', 12.5);
	y.get(c, d);
	cout<<"c="<<c<<'\t'<<"d="<<d<<endl;
}
*/

/*Q1-9
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";
	cout<<endl;

	v[0]=10;
	int m=v[2];
	v.at(2)=5;

	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";
	cout<<endl;
}
*/

/*Q1-10
#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
	vector<string> sv;
	string name;

	cout<<"이름을 5개 입력하라"<<endl;
	for(int i=0; i<5; i++) {
		cout<<i+1<<">>";
		getline(cin, name);
		sv.push_back(name);
	}
	name=sv.at(0);
	for(int i=1; i<sv.size(); i++) {
		if(name<sv[i]) name=sv[i];
	}
	cout<<"사전에서 가장 뒤에 나오는 이름은 "<<name<<endl;
}
*/

/*Q1-11
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	vector<int>::iterator it;

	for(it=v.begin(); it!=v.end(); it++) {
		int n=*it;
		n=n*2;
		*it=n;
	}

	for(it=v.begin(); it!=v.end(); it++)
		cout<<*it<<' ';
	cout<<endl;
}
*/

/*Q1-12
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;

	cout<<"5개의 정수를 입력하세요>> ";
	for(int i=0; i<5; i++) {
		int n;
		cin>>n;
		v.push_back(n);
	}

	sort(v.begin(), v.end());

	vector<int>::iterator it;

	for(it=v.begin(); it!=v.end(); it++)
		cout<<*it<<' ';
	cout<<endl;
}

*/

/*Q2
#include <iostream>
using namespace std;

template <class T>
T biggest(T data[], int n) {
	T big=0;
	for(int i=0; i<n; i++) {
		if(data[i]>big) big=data[i];
	}
	return big;
}

int main()
{
	int x[]={1, 10, 100, 5, 4};
	cout<<biggest(x, 5)<<endl;
}
*/

/*Q3
#include <iostream>
using namespace std;

template<class T>
T* concat(T a[], int sizea, T b[], int sizeb) {
	T *temp=new T [sizea+sizeb];
	for(int i=0; i<sizea; i++) {
		temp[i]=a[i];
	}
	for(int i=0; i<sizeb; i++) {
		temp[i+sizea]=b[i];
	}
	return temp;
}

int main() {
	char *a=new char[10];
	char b[]={"Hello"};
	char c[]={"World"};
	a=concat(b, 5, c, 5);
	for(int i=0; i<10; i++) cout<<a[i]<<' ';
	cout<<endl;
}
*/

/*Q4
#include <iostream>
using namespace std;

template <class T>
T * remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize) {
	for(int i=0; i<sizeSrc; i++) {
		for(int j=0; j<sizeMinus; j++) {
			if(src[i]==minus[j]) {
				for(int k=i; k<sizeSrc-1; k++) {
					src[k]=src[k+1];
				}
				sizeSrc--;
			}
		}
	}
	retSize=sizeSrc;
	T *temp=new T [retSize];
	for(int i=0; i<retSize; i++) {
		temp[i]=src[i];
	}
	return temp;
}

int main()
{
	int a[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
	int b[]={2, 4, 8};
	int retSize;
	int *c;
	c=remove(a, 9, b, 3, retSize);
	for(int i=0; i<retSize; i++) {cout<<c[i]<<' ';}
	cout<<endl;
}
*/

/*Q5
#include <iostream>
using namespace std;

class Comparable{
	int radius;
public:
	Comparable(int radius=1) {this->radius=radius;}
	int getRadius() {return radius;}
	virtual bool operator > (Comparable& op2)=0;
	virtual bool operator < (Comparable& op2)=0;
	virtual bool operator == (Comparable& op2)=0;
};

class Circle : public Comparable {
	int radius;
public:
	Circle(int radius=1) {this->radius=radius;}
	int getRadius() {return radius;}
	virtual bool operator > (Comparable& op2);
	virtual bool operator < (Comparable& op2);
	virtual bool operator == (Comparable& op2);
};

bool Circle::operator < (Comparable& op2)
{
	if(this->getRadius()>op2.getRadius()) return true;
	else return false;
}

bool Circle::operator > (Comparable& op2) 
{
	if(this->getRadius()<op2.getRadius()) return true;
	else return false;
}

bool Circle::operator == (Comparable& op2)
{
	if(this->getRadius()==op2.getRadius()) return true;
	else return false;
}

template <class T>
T bigger(T a, T b) {
	if(a>b) return a;
	else return b;
}

int main() {
	int a=20, b=50, c;
	c=bigger(a, b);
	cout<<"20과 50 중 큰 값은 "<<c<<endl;
	Circle waffle(10), pizza(20), y;
	y=bigger(waffle, pizza);
	cout<<"waffle과 pizza 중 큰 것의 반지름은 "<<y.getRadius()<<endl;
}
*/

/*Q6*/
#include <iostream>
#include <string>
#include <vector>
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
        int choice = 0;
        cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >>";
        cin >> choice;
        return choice;
    }
    static int selectShape()
    {
        int typeChoice = 0;
        cout << "선:1, 원:2, 사각형:3 >>";
        cin >> typeChoice;
        return typeChoice;
    }
    static void error() { cout << "잘못 입력하셨습니다." << endl; }
    static int deleteMenu()
    {
        int indexOfRemove;
        cout << "삭제하고자 하는 도형의 인덱스 >>";
        cin >> indexOfRemove;
        return indexOfRemove;
    }
    static void show(vector<Shape* > v)
    {
        int length = v.size();
        for (int index = 0; index < length; index++) {
            cout << index << ": ";
            v[index]->paint();
        }
    }
};
 
class GraphicEditor {
    vector<Shape *> v;
public:
    void run();
    int getLength() { return v.size(); }
};
void GraphicEditor::run()
{
    cout << "그래픽 에디터입니다." << endl;
    int menuChoice;
    int typeChoice;
    int indexOfRemove;
    while (true) {
        menuChoice = UI::selectMenu();
        switch (menuChoice)
        {
        case 1:
            typeChoice = UI::selectShape();
            if (typeChoice == 1) v.push_back(new Line());
            else if (typeChoice == 2) v.push_back(new Circle());
            else if (typeChoice == 3) v.push_back(new Rect());
            else UI::error();
        break;
        case 2: 
            indexOfRemove = UI::deleteMenu();
            if (indexOfRemove >= getLength()) UI::error();
            else v.erase(v.begin() + indexOfRemove); 
        break;
        case 3: UI::show(v); break;
        case 4: return;
        }
    }
}
 
int main(void)
{
    GraphicEditor g;
    g.run();
}