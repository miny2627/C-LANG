/*Q1
(1)
#include <iostream>
using namespace std;

int main() {
	cout.put('H');
	cout.put('i');
	cout.put(33);
	cout.put('\n');

	cout.put('C').put('+').put('+').put(' ');

	char str[]="I love programming";
	cout.write(str, 6);
}

(2)
#include <iostream>
using namespace std;

void get1() {
	cout<<"cin.get()�� <Enter> Ű���� �Է� �ް� ����մϴ�>>";
	int ch;
	while((ch=cin.get())!=EOF) {
		cout.put(ch);
		if(ch=='\n') break;
	}
}

void get2() {
	cout<<"cin.get(char&)�� <Enter> Ű���� �Է� �ް� ����մϴ�>>";
	char ch;
	while(true) {
		cin.get(ch);
		if(cin.eof()) break;
		cout.put(ch);
		if(ch=='\n') break;
	}
}

int main() {
	get1();
	get2();
}
 (3)
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char cmd[80];
	cout<<"cin.get(char*, int)�� ���ڿ��� �н��ϴ�."<<endl;
	while(true) {
		cout<<"�����ҷ��� exit�� �Է��ϼ��� >>";
		cin.get(cmd, 80);
		if(strcmp(cmd, "exit")==0) {
			cout<<"���α׷��� �����մϴ�....";
			return 0;
		}
		else cin.ignore(1);
	}
}

(4)
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char line[80];
	cout<<"cin.getline() �Լ��� ������ �н��ϴ�."<<endl;
	cout<<"exit�� �Է��ϸ� ������ �����ϴ�."<<endl;\
	int no=1;
	while(true) {
		cout<<"���� "<<no<<" >> ";
		cin.getline(line, 80);
		if(strcmp(line, "exit")==0) break;
		cout<<"echo --> ";
		cout<<line<<endl;
		no++;
	}
}

(5)
#include <iostream>
using namespace std;

int main() {
	cout<<30<<endl;

	cout.unsetf(ios::dec);
	cout.setf(ios::hex);
	cout<<30<<endl;

	cout.setf(ios::showbase);
	cout<<30<<endl;

	cout.setf(ios::uppercase);
	cout<<30<<endl;

	cout.setf(ios::dec | ios::showpoint);

	cout<<23.5<<endl;
	
	cout.setf(ios::scientific);
	cout<<23.5<<endl;

	cout.setf(ios::showpos);
	cout<<23.5;
}

(6)
#include <iostream>
using namespace std;

void showWidth() {
	cout.width(10);
	cout<<"Hello"<<endl;
	cout.width(5);
	cout<<12<<endl;

	cout<<'%';
	cout.width(10);
	cout<<"Korea/"<<"Seoul/"<<"City"<<endl;
}

int main() {
	showWidth();
	cout<<endl;

	cout.fill('^');
	showWidth();
	cout<<endl;

	cout.precision(5);
	cout<<11./3.<<endl;
}

(7)
#include <iostream>
using namespace std;

int main() {
	cout<<hex<<showbase<<30<<endl;
	cout<<dec<<showpos<<100<<endl;
	cout<<true<<' '<<false<<endl;
	cout<<boolalpha<<true<<' '<<false<<endl;
}

(8)
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout<<showbase;

	cout<<setw(8)<<"Number";
	cout<<setw(10)<<"Octal";
	cout<<setw(10)<<"Hexa"<<endl;

	for(int i=0; i<50; i+=5) {
		cout<<setw(8)<<setfill('.')<<dec<<i;
		cout<<setw(10)<<setfill(' ')<<oct<<i;
		cout<<setw(10)<<setfill(' ')<<hex<<i<<endl;
	}
}

(9)
#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x=0, int y=0) {
		this->x=x;
		this->y=y;
	}
	friend ostream& operator << (ostream& stream, Point a);
};

ostream& operator << (ostream& stream, Point a) {
	stream<<"("<<a.x<<","<<a.y<<")";
	return stream;
}

int main() {
	Point p(3, 4);
	cout<<p<<endl;

	Point q(1, 100), r(2, 200);
	cout<<q<<r<<endl;
}

(10)
#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	string press;
	string author;
public:
	Book(string title="", string press="", string author="") {
		this->title=title;
		this->press=press;
		this->author=author;
	}
	friend ostream& operator << (ostream& stream, Book b);
};

ostream& operator << (ostream& stream, Book b) {
	stream<<b.title<<","<<b.press<<","<<b.author;
	return stream;
}

int main() {
	Book book("������ �����", "�ѱ����ǻ�", "����������");
	cout<<book;
}

(11)
#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x=0, int y=0) {
		this->x=x;
		this->y=y;
	}
	friend istream& operator >> (istream& ins, Point &a);
	friend ostream& operator << (ostream& stream, Point a);
};

istream& operator >> (istream& ins, Point &a) {
	cout<<"x ��ǥ>>";
	ins>>a.x;
	cout<<"y ��ǥ>>";
	ins>>a.y;
	return ins;
}

ostream& operator << (ostream& stream, Point a) {
	stream<<"("<<a.x<<","<<a.y<<")";
	return stream;
}

int main() {
	Point p;
	cin>>p;
	cout<<p;
}

(12)
#include <iostream>
using namespace std;

ostream& fivestar(ostream& outs) {
	return outs<<"*****";
}

ostream& rightarrow(ostream& outs) {
	return outs<<"---->";
}

ostream& beep(ostream& outs) {
	return outs<<'\a';
}

int main() {
	cout<<"���� �︳�ϴ�"<<beep<<endl;
	cout<<"C"<<rightarrow<<"C++"<<rightarrow<<"Java"<<endl;
	cout<<"Visual"<<fivestar<<"C++"<<endl;
}

(13)
#include <iostream>
#include <string>
using namespace std;

istream& question(istream& ins) {
	cout<<"�ſ�� �ſ�� ���� ���� ���ڴ�?";
	return ins;
}

int main() {
	string answer;
	cin>>question>>answer;
	cout<<"���󿡼� ���� ���� ����� "<<answer<<"�Դϴ�."<<endl;
}
*/

/*Q2
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int count=0;
	int ch;
	while((ch=cin.get())!=EOF) {
		cout.put(ch);
		if(ch=='\n') break;
		if(ch=='a') count++;
	}
	cout<<"a= "<<count<<endl;
}
*/

/*Q3
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char ch[50];
	while(true) {
		cin.ignore(50, ';');
		cin.get(ch, 50);
		if(cin.eof()) break;
		for(int i=0; i<cin.gcount(); i++) {
			cout<<ch[i];
		}
		cout<<endl;
	}
}
*/

/*Q4
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	cout<<left;
	cout<<setw(15)<<"Number";
	cout<<setw(15)<<"Square";
	cout<<setw(15)<<"Square Root"<<endl;
 
	for(int i=0; i<50; i+=5) {
	cout<<setfill('_')<<setw(15)<<i<<setfill('_');
	cout<<setw(15)<<(i*i)<<setfill('_');
	cout.precision(3);
	cout<<setw(15)<<sqrt((double)i)<<setfill('_')<<endl;
	}
}
*/

/*Q5
#include <iostream>
#include <string>
using namespace std;

class Circle{
	string name;
	int radius;
public:
	Circle(int radius=1, string name="") {
		this->radius=radius; this->name=name;
	}
	friend istream& operator >> (istream& ins, Circle &c);
	friend ostream& operator << (ostream& stream, Circle &c);
};

istream& operator >> (istream& ins, Circle& c) {
	cout<<"������>>";
	ins>>c.radius;
	cout<<"�̸�>>";
	ins>>c.name; 
	return ins;
}

ostream& operator << (ostream& stream, Circle &c) {
	cout<<"(������ "<<c.radius<<"�� "<<c.name<<")";
	return stream;
}

int main() {
	Circle d, w;
	cin>>d>>w;
	cout<<d<<w;
}
*/

/*Q6*/
#include <iostream>
using namespace std;

istream& pos(istream& ins) {
	cout<<"��ġ��? ";
	return ins; 
}

int main() {
	int x, y;
	cin>>pos>>x;
	cin>>pos>>y;
	cout<<x<<','<<y<<endl;
}