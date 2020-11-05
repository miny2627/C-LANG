/*Q1
(1)
#include <iostream>
using namespace std;

class Rect;
bool equals(Rect r, Rect s);

class Rect{
	int width, height;
public:
	Rect(int width, int height) { this->width=width; this->height=height;}
	friend bool equals(Rect r, Rect s);
};

bool equals(Rect r, Rect s) {
	if(r.width==s.width && r.height==s.height) return true;
	else return false;
}

int main()
{
	Rect a(3, 4), b(4, 5);
	if(equals(a, b)) cout<<"equal"<<endl;
	else cout<<"not equal"<<endl;
}
(2)
#include <iostream>
using namespace std;

class Rect;

class RectManager{
public:
	bool equals(Rect r, Rect s);
};

class Rect{
	int width, height;
public:
	Rect(int width, int height) { this->width=width; this->height=height;}
	friend bool RectManager::equals(Rect r, Rect s);
};

bool RectManager::equals(Rect r, Rect s) {
	if(r.width==s.width && r.height==s.height) return true;
	else return false;
}

int main()
{
	Rect a(3, 4), b(3, 4);
	RectManager man;

	if(man.equals(a, b)) cout<<"equal"<<endl;
	else cout<<"not equal"<<endl;
}
(3)
#include <iostream>
using namespace std;

class Rect;

class RectManager{
public:
	bool equals(Rect r, Rect s);
	void copy(Rect &dest, Rect &src);
};

class Rect{
	int width, height;
public:
	Rect(int width, int height) { this->width=width; this->height=height;}
	friend RectManager;
};

bool RectManager::equals(Rect r, Rect s)
{
	if(r.width==s.width && r.height==s.height) return true;
	else return false;
}

void RectManager::copy(Rect &dest, Rect &src) {
	dest.width=src.width; dest.height=src.height;
}

int main()
{
	Rect a(3, 4), b(5, 6);
	RectManager man;

	man.copy(b, a);
	if(man.equals(a, b)) cout<<"equal"<<endl;
	else cout<<"not equal"<<endl;
}

(4)
#include <iostream>
using namespace std;

class Power{
	int kick;
	int punch;
public:
	Power(int kick=0, int punch=0) {
		this->kick=kick; this->punch=punch;
	}
	void show();
	Power operator+ (Power op2);
};

void Power::show()
{
	cout<<"kick="<<kick<<','<<"punch="<<punch<<endl;
}

Power Power::operator+(Power op2) {
	Power tmp;
	tmp.kick=this->kick+op2.kick;
	tmp.punch=this->punch+op2.punch;
	return tmp;
}

int main()
{
	Power a(3, 5), b(4, 6), c;
	c=a+b;
	a.show();
	b.show();
	c.show();
}
(5)
#include <iostream>
using namespace std;

class Power{
	int kick;
	int punch;
public:
	Power(int kick=0, int punch=0) {
		this->kick=kick; this->punch=punch;
	}
	void show();
	bool operator==(Power op2);
};

void Power::show() {
	cout<<"kick="<<kick<<"punch="<<punch<<endl;
}

bool Power::operator==(Power op2)
{
	if(kick==op2.kick && punch==op2.punch) return true;
	else return false;
}

int main()
{
	Power a(3, 5), b(3, 5);
	a.show();
	b.show();
	if(a==b) cout<<"두 파워가 같다."<<endl;
	else cout<<"두 파워가 같지 않다."<<endl;
}
(6)
#include <iostream>
using namespace std;

class Power{
	int kick;
	int punch;
public:
	Power(int kick=0, int punch=0) {
		this->kick=kick; this->punch=punch;
	}
	void show();
	Power operator+= (Power op2);
};

void Power::show() {
	cout<<"kick="<<kick<<','<<"punch="<<punch<<endl;
}

Power Power::operator+=(Power op2)
{
	kick=kick+op2.kick;
	punch=punch+op2.punch;
	return *this;
}

int main()
{
	Power a(3, 5), b(4, 6), c;
	a.show();
	b.show();
	c=a+=b;
	a.show();
	c.show();
}
(7)
#include <iostream>
using namespace std;

class Power{
	int kick;
	int punch;
public:
	Power(int kick=0, int punch=0) {this->kick=kick; this->punch=punch;}
	void show();
	Power operator+ (int op2);
};

void Power::show()
{
	cout<<"kick="<<kick<<','<<"punch="<<punch<<endl;
}

Power Power::operator+(int op2) {
	Power tmp;
	tmp.kick=kick+op2;
	tmp.punch=punch+op2;
	return tmp;
}

int main()
{
	Power a(3, 5), b;
	a.show();
	b.show();
	b=a+2;
	a.show();
	b.show();
}
(8)
#include <iostream>
using namespace std;

class Power{
	int kick;
	int punch;
public:
	Power(int kick=0, int punch=0) {
		this->kick=kick; this->punch=punch;
	}
	void show();
	Power operator++();
};

void Power::show()
{
	cout<<"kick="<<kick<<','<<"punch="<<punch<<endl;
}

Power Power::operator++()
{
	kick++;
	punch++;
	return *this;
}

int main()
{
	Power a(3, 5), b;
	a.show();
	b.show();
	b=++a;
	a.show();
	b.show();
}
(9)
#include <iostream>
using namespace std;

class Power{
	int kick;
	int punch;
public:
	Power(int kick=0, int punch=0) {
		this->kick=kick; this->punch=punch;
	}
	void show();
	bool operator! ();
};

void Power::show()
{
	cout<<"kick="<<kick<<','<<"punch="<<punch<<endl;
}

bool Power::operator!()
{
	if(kick==0 && punch==0) return true;
	else return false;
}

int main()
{
	Power a(0, 0), b(5, 5);
	if(!a) cout<<"a의 파워가 0이다"<<endl;
	else cout<<"a의 파워가 0이 아니다."<<endl;
	if(!b) cout<<"b의 파워가 0이다"<<endl;
	else cout<<"b의 파워가 0이 아니다."<<endl;
}
(10)
#include <iostream>
using namespace std;

class Power{
	int kick;
	int punch;
public:
	Power(int kick=0, int punch=0) {
		this->kick=kick; this->punch=punch;
	}
	void show();
	Power operator++(int x);
};

void Power::show()
{
	cout<<"kick="<<kick<<','<<"punch="<<punch<<endl;
}

Power Power::operator++(int x)
{
	Power tmp=*this;
	kick++;
	punch++;
	return tmp;
}

int main()
{
	Power a(3, 5), b;
	a.show();
	b.show();
	b=a++;
	a.show();
	b.show();
}
(11)
#include <iostream>
using namespace std;

class Power{
	int kick;
	int punch;
public:
	Power(int kick=0, int punch=0) {
		this->kick=kick; this->punch=punch;
	}
	void show();
	friend Power operator+(int op1, Power op2);
};

void Power::show()
{
	cout<<"kick="<<kick<<','<<"punch="<<punch<<endl;
}

Power operator+(int op1, Power op2)
{
	Power tmp;
	tmp.kick=op1+op2.kick;
	tmp.punch=op1+op2.punch;
	return tmp;
}

int main()
{
	Power a(3, 5), b;
	a.show();
	b.show();
	b=2+a;
	a.show();
	b.show();
}
(12)
#include <iostream>
using namespace std;

class Power{
	int kick;
	int punch;
public:
	Power(int kick=0, int punch=0) {
		this->kick=kick; this->punch=punch;
	}
	void show();
	friend Power operator+(Power op1, Power op2);
};

void Power::show()
{
	cout<<"kick="<<kick<<','<<"punch="<<punch<<endl;
}

Power operator+(Power op1, Power op2)
{
	Power tmp;
	tmp.kick=op1.kick+op2.kick;
	tmp.punch=op1.punch+op2.punch;
	return tmp;
}

int main()
{
	Power a(3,5), b(4, 6), c;
	c=a+b;
	a.show();
	b.show();
	c.show();
}
(13)
#include <iostream>
using namespace std;

class Power{
	int kick;
	int punch;
public:
	Power(int kick=0, int punch=0) {
		this->kick=kick; this->punch=punch;
	}
	void show();
	friend Power operator++(Power& op);
	friend Power operator++(Power& op, int x);
};

void Power::show()
{
	cout<<"kick="<<kick<<','<<"punch="<<punch<<endl;
}

Power operator++(Power& op)
{
	op.kick++;
	op.punch++;
	return op;
}

Power operator++(Power& op, int x)
{
	Power tmp=op;
	op.kick++;
	op.punch++;
	return tmp;
}

int main()
{
	Power a(3, 5), b;
	b=++a;
	a.show();
	b.show();

	b=a++;
	a.show();
	b.show();
}
*/

/*Q2
(1)
#include <iostream>
#include <string>
using namespace std;

class Book{
	string title;
	int price, pages;
public:
	Book(string title="", int price=0, int pages=0) {
		this->title=title; this->price=price; this->pages=pages;
	}
	void show(){
		cout<<title<<' '<<price<<"원 "<< pages<<" 페이지"<<endl;
	}
	string getTitle() {return title;}
	Book operator+=(int x);
	Book operator-=(int x);
};

Book Book::operator+=(int x)
{
	this->price+=x;
	return *this;
}

Book Book::operator-=(int x)
{
	this->price-=x;
	return *this;
}

int main()
{
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a+=500;
	b-=500;
	a.show();
	b.show();
}

(2)
#include <iostream>
#include <string>
using namespace std;

class Book{
	string title;
	int price, pages;
public:
	Book(string title="", int price=0, int pages=0) {
		this->title=title; this->price=price; this->pages=pages;
	}
	void show(){
		cout<<title<<' '<<price<<"원 "<< pages<<" 페이지"<<endl;
	}
	string getTitle() {return title;}
	friend Book operator+=(Book &op, int x);
	friend Book operator-=(Book &op, int x);
};

Book operator+=(Book &op, int x)
{
	op.price+=x;
	return op;
}

Book operator-=(Book &op, int x)
{
	op.price-=x;
	return op;
}

int main()
{
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a+=500;
	b-=500;
	a.show();
	b.show();
}
*/

/*Q3
(1)
#include <iostream>
#include <string>
using namespace std;

class Book{
	string title;
	int price, pages;
public:
	Book(string title="", int price=0, int pages=0) {
		this->title=title; this->price=price; this->pages=pages;
	}
	void show(){
		cout<<title<<' '<<price<<"원 "<< pages<<" 페이지"<<endl;
	}
	string getTitle() {return title;}
	bool operator==(int price);
	bool operator==(string title);
	bool operator==(Book op);
};

bool Book::operator==(int price)
{
	if(this->price==price) return true;
	else return false;
}

bool Book::operator==(string title)
{
	if(this->title==title) return true;
	else return false;
}

bool Book::operator==(Book op)
{
	if(title==op.title && price==op.price && pages==op.pages) return true;
	else return false;
}

int main()
{
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if(a==30000) cout<<"정가 30000원"<<endl;
	if(a=="명품 C++") cout<<"명품 C++입니다."<<endl;
	if(a==b) cout<<"두 책이 같은 책입니다."<<endl;
}

(2)
#include <iostream>
#include <string>
using namespace std;

class Book{
	string title;
	int price, pages;
public:
	Book(string title="", int price=0, int pages=0) {
		this->title=title; this->price=price; this->pages=pages;
	}
	void show(){
		cout<<title<<' '<<price<<"원 "<< pages<<" 페이지"<<endl;
	}
	string getTitle() {return title;}
	friend bool operator==(Book &op1, int price);
	friend bool operator==(Book &op1, string title);
	friend bool operator==(Book &op1, Book op);
};

bool operator==(Book &op1, int price)
{
	if(op1.price==price) return true;
	else return false;
}

bool operator==(Book &op1, string title)
{
	if(op1.title==title) return true;
	else return false;
}

bool operator==(Book &op1, Book op)
{
	if(op1.title==op.title && op1.price==op.price && op1.pages==op.pages) return true;
	else return false;
}

int main()
{
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if(a==30000) cout<<"정가 30000원"<<endl;
	if(a=="명품 C++") cout<<"명품 C++입니다."<<endl;
	if(a==b) cout<<"두 책이 같은 책입니다."<<endl;
}
*/

/*Q4
(1)
#include <iostream>
using namespace std;

class Matrix{
	int a[4];
public:
	Matrix() {for(int i=0; i<4; i++) a[i]=0;}
	Matrix(int x, int y, int z, int w) {a[0]=x; a[1]=y; a[2]=z; a[3]=w;}
	void show() {
		cout<<"Matrix = { ";
		for(int i=0; i<4; i++) cout<<a[i]<<" ";
		cout<<"}"<<endl;
	}
	Matrix operator+(Matrix m);
	Matrix operator+=(Matrix m);
	bool operator==(Matrix m);
};

Matrix Matrix::operator+(Matrix m)
{
	Matrix sum;
	for(int i=0; i<4; i++) sum.a[i]=a[i]+m.a[i];
	return sum;
}

Matrix Matrix::operator+=(Matrix m)
{
	for(int i=0; i<4; i++) a[i]+=m.a[i];
	return *this;
}

bool Matrix::operator==(Matrix m)
{
	for(int i=0; i<4; i++) {
	if(a[i]==m.a[i]) return true;
	else false;
	}
}

int main()
{
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c=a+b;
	a+=b;
	a.show();
	b.show();
	c.show();
	if(a==c) cout<<"a and c are the same"<<endl;
}
(2)
#include <iostream>
using namespace std;

class Matrix{
	int a[4];
public:
	Matrix() {for(int i=0; i<4; i++) a[i]=0;}
	Matrix(int x, int y, int z, int w) {a[0]=x; a[1]=y; a[2]=z; a[3]=w;}
	void show() {
		cout<<"Matrix = { ";
		for(int i=0; i<4; i++) cout<<a[i]<<" ";
		cout<<"}"<<endl;
	}
	friend Matrix operator+(Matrix &n, Matrix m);
	friend Matrix operator+=(Matrix &n, Matrix m);
	friend bool operator==(Matrix &n, Matrix m);
};

Matrix operator+(Matrix &n, Matrix m)
{
	Matrix sum;
	for(int i=0; i<4; i++) sum.a[i]=n.a[i]+m.a[i];
	return sum;
}

Matrix operator+=(Matrix &n, Matrix m)
{
	for(int i=0; i<4; i++) n.a[i]+=m.a[i];
	return n;
}

bool operator==(Matrix &n, Matrix m)
{
	for(int i=0; i<4; i++) {
	if(n.a[i]==m.a[i]) return true;
	else false;
	}
}

int main()
{
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c=a+b;
	a+=b;
	a.show();
	b.show();
	c.show();
	if(a==c) cout<<"a and c are the same"<<endl;
}
*/

/*Q5
(1)
#include <iostream>
using namespace std;

class Matrix{
	int a[4];
public:
	Matrix() {for(int i=0; i<4; i++) a[i]=0;}
	Matrix(int x, int y, int z, int w) {a[0]=x; a[1]=y; a[2]=z; a[3]=w;}
	void show() {
		cout<<"Matrix = { ";
		for(int i=0; i<4; i++) cout<<a[i]<<" ";
		cout<<"}"<<endl;
	}
	Matrix operator>>(int m[]);
	Matrix operator<<(int m[]);
};

Matrix Matrix::operator>>(int m[])
{
	for(int i=0; i<4; i++) m[i]=this->a[i];
	return *this;
}

Matrix Matrix::operator<<(int m[])
{
	for(int i=0; i<4; i++) a[i]=m[i];
	return *this;
}

int main()
{
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4]={1, 2, 3, 4};
	a>>x;
	b<<y;

	for(int i=0; i<4; i++) cout<<x[i]<<' ';
	cout<<endl;
	b.show();
}
(2)
#include <iostream>
using namespace std;

class Matrix{
	int a[4];
public:
	Matrix() {for(int i=0; i<4; i++) a[i]=0;}
	Matrix(int x, int y, int z, int w) {a[0]=x; a[1]=y; a[2]=z; a[3]=w;}
	void show() {
		cout<<"Matrix = { ";
		for(int i=0; i<4; i++) cout<<a[i]<<" ";
		cout<<"}"<<endl;
	}
	friend Matrix operator>>(Matrix &n, int m[]);
	friend Matrix operator<<(Matrix &n, int m[]);
};

Matrix operator>>(Matrix &n, int m[])
{
	for(int i=0; i<4; i++) m[i]=n.a[i];
	return n;
}

Matrix operator<<(Matrix &n, int m[])
{
	for(int i=0; i<4; i++) n.a[i]=m[i];
	return n;
}

int main()
{
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4]={1, 2, 3, 4};
	a>>x;
	b<<y;

	for(int i=0; i<4; i++) cout<<x[i]<<' ';
	cout<<endl;
	b.show();
}
*/

/*Q6
#include <iostream>
using namespace std;

class Circle{
	int radius;
public:
	Circle(int radius=0) { this->radius=radius; }
	void show() { cout<<"radius = "<<radius<<" 인 원"<<endl; }
	friend Circle operator++(Circle &c);
	friend Circle operator++(Circle &c, int x);
};

Circle operator++(Circle &c)
{
	c.radius++;
	return c;
}

Circle operator++(Circle &c, int x)
{
	Circle tmp=c;
	c.radius++;
	return tmp;
}

int main()
{
	Circle a(5), b(4);
	++a;
	b=a++;
	a.show();
	b.show();
}
*/

/*Q7*/
#include <iostream>
using namespace std;

class Statistics{
	int *a;
	int size;
public:
	Statistics(){ a=new int [10]; size=0; }
	~Statistics() {delete [] a;}
	bool operator!();
	Statistics& operator<<(int n);
	void operator>>(int &n);
	void operator~();
};

bool Statistics::operator!()
{
	if(a==NULL) return false;
	else return true;
}

Statistics& Statistics::operator<<(int n)
{
	a[size]=n;
	size++;
	return *this;
}

void Statistics::operator>>(int& n)
{
	int sum=0;
	for(int i=0; i<size; i++) sum+=a[i];
	n=sum/size;
}

void Statistics::operator~()
{
	for(int i=0; i<size; i++) cout<<a[i]<<' ';
	cout<<endl;
}

int main()
{
	Statistics stat;
	if(!stat) cout<<"현재 통계 데이타가 없습니다."<<endl;

	int x[5];
	cout<<"5 개의 정수를 입력하라>>";
	for(int i=0; i<5; i++) cin>>x[i];

	for(int i=0; i<5; i++) stat<<x[i];
	stat<<100<<200;
	~stat;

	int avg;
	stat>>avg;
	cout<<"avg="<<avg<<endl;
}