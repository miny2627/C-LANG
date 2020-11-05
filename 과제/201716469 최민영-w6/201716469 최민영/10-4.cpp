/*Q1
1.
#include <iostream>
using namespace std;
 
int big(int a, int b)
{
	if(a>b) return a;
	else return b;
}
 
int big(int a[], int size)
{
	int res=a[0];
	for(int i=1; i<size; i++) if(res<a[i]) res=a[i];
	return res;
}
 
int main()
{
	int array[5]={1, 9, -2, 8, 6};
	cout<<big(2, 3)<<endl;
	cout<<big(array, 5)<<endl;
}
 
2.
#include <iostream>
using namespace std;
 
int sum(int a, int b)
{
	int s=0;
	for(int i=a; i<=b;i++) s+=i;
	return s;
}
 
int sum(int a)
{
	int s=0;
	for(int i=0; i<=a; i++) s+=i;
		return s;
}
 
int main()
{
	cout<<sum(3, 5)<<endl;
	cout<<sum(3)<<endl;
	cout<<sum(100)<<endl;
}
 
3.
#include<iostream>
#include <string>
using namespace std;
 
void star(int a=5);
void msg(int id, string text="");
 
void star(int a)
{
	for(int i=0; i<a; i++) cout<<'*';
	cout<<endl;
}
 
void msg(int id, string text)
{
	cout<<id<<' '<<text<<endl;
}
 
int main()
{
	star();
	star(10);
 
	msg(10);
	msg(10, "Hello");
}
 
4.
#include <iostream>
using namespace std;
 
void f(char c=' ', int line=1);
 
void f(char c, int line)
{
	for(int i=0; i<line; i++) {
		for(int j=0; j<10; j++) cout<<c;
		cout<<endl;
	}
}
 
int main()
{
	f();
	f('%');
	f('@', 5);
}
 
5.
#include <iostream>
using namespace std;
 
void fillLine(int n=25, char c='*') 
{
	for(int i=0; i<n; i++) cout<<c;
	cout<<endl;
}
 
int main()
{
	fillLine();
	fillLine(10, '%');
}
 
6. 
#include <iostream>
using namespace std;
 
class MyVector{
	int *p;
	int size;
public:
	MyVector(int n=100) {
		p=new int [n];
		size=n;
	}
	~MyVector() {delete [] p;}
};
 
int main()
{
	MyVector *v1, *v2;
	v1=new MyVector();
	v2=new MyVector(1024);
 
	delete v1;
	delete v2;
}
 
7. 
#include <iostream>
using namespace std;
 
float square(float a) {
	return a*a;
}
 
double square(double a) {
	return a*a;
}
 
int main()
{
	cout<<square(3.0);
	cout<<square(3);
}
 
8.
#include <iostream>
using namespace std;
 
int add(int a, int b)
{
	return a+b;
}
 
int add(int a, int &b)
{
	b=b+a;
	return b;
}
 
int main()
{
	int s=10, t=20;
	cout<<add(s, t);
}
 
9.
#include <iostream>
#include <string>
using namespace std;
 
void msg(int id)
{
	cout<<id<<endl;
}
 
void msg(int id, string s="")
{
	cout<<id<<":"<<s<<endl;
}
 
int main()
{
	msg(5, "Good Morning");
	msg(6);
}
 
10.
#include <iostream>
using namespace std;
 
class Math{
public:
	static int abs(int a) {return a>0?a:-a;}
	static int max(int a, int b) {return (a>b)?a:b;}
	static int min(int a, int b) {return (a>b)?b:a;}
};
 
int main()
{
	cout<<Math::abs(-5)<<endl;
	cout<<Math::max(10, 8)<<endl;
	cout<<Math::min(-3, -8)<<endl;
}
 
11. 
#include <iostream>
using namespace std;
 
class Circle{
private:
	static int numOfCircles;
	int radius;
public:
	Circle(int r=1);
	~Circle() {numOfCircles--;}
	double getArea() {return 3.14*radius*radius;}
	static int getNumOfCircles() {return numOfCircles;}
};
 
Circle::Circle(int r)
{
	radius=r;
	numOfCircles++;
}
 
int Circle::numOfCircles=0;
 
int main()
{
	Circle *p=new Circle[10];
	cout<<"생존하고 있는 원의 개수 = "<<Circle::getNumOfCircles()<<endl;
 
	delete [] p;
	cout<<"생존하고 있는 원의 개수 = "<<Circle::getNumOfCircles()<<endl;
 
	Circle a;
	cout<<"생존하고 있는 원의 개수 = "<<Circle::getNumOfCircles()<<endl;
 
	Circle b;
	cout<<"생존하고 있는 원의 개수 = "<<Circle::getNumOfCircles()<<endl;
}
*/
 
/*Q2
(1)
#include <iostream>
using namespace std;

int add(int a[], int size);
int add(int a[], int size, int b[]);
 
int add(int a[], int size)
{
	int sum=0;
	for(int i=0; i<size; i++)
		sum+=a[i];
	return sum;
}
 
int add(int a[], int size, int b[])
{
	int sum=0;
	for(int i=0; i<size; i++) {
		sum+=a[i];
		if(b!=NULL) sum+=b[i];
	}
	return sum;
}
 
int main()
{
	int a[]={1, 2, 3, 4, 5};
	int b[]={6, 7, 8, 9, 10};
	int c=add(a, 5);
	int d=add(a, 5, b);
	cout<<c<<endl;
	cout<<d<<endl;
}
 
(2)
#include <iostream>
using namespace std;
 
int add(int a[],int size, int b[]=NULL)
{
	int sum=0;
	for(int i=0; i<size; i++) {
		sum+=a[i];
		if(b!=NULL) sum+=b[i];
	}
	return sum;
}
 
int main()
{
	int a[]={1, 2, 3, 4, 5};
	int b[]={6, 7, 8, 9, 10};
	int c=add(a, 5);
	int d=add(a, 5, b);
	cout<<c<<endl;
	cout<<d<<endl;
}
*/
 
/*Q3
#include <iostream>
using namespace std;
 
class MyVector{
	int *mem;
	int size;
public:
	MyVector(int n=100, int val=0);
	~MyVector() {delete [] mem;}
};
 
MyVector::MyVector(int n, int val)
{
	mem=new int [n];
	size=n;
	for(int i=0; i<size; i++) {
		mem[i]=val;
	}
	for(int i=0; i<size; i++) {
		if(i%10==0) cout<<endl;
		cout<<mem[i]<<' ';
	}
	cout<<endl;
}
 
int main()
{
	MyVector a, b(4, 8);
}
*/

/*Q4
#include <iostream>
using namespace std;
 
class ArrayUtility{
public:
	static void intToDouble(int source[], double dest[], int size){
		for(int i=0; i<size; i++)
			dest[i]=double(source[i]);
	}
	static void doubleToInt(double source[], int dest[], int size){
		for(int i=0; i<size; i++)
			dest[i]=int(source[i]);
	}
 
};
 
int main()
{
	int x[]={1, 2, 3, 4, 5};
	double y[5];
	double z[]={9.9, 8.8, 7.7, 6.6, 5.6};
 
	ArrayUtility::intToDouble(x, y, 5);
	for(int i=0; i<5; i++) cout<<y[i]<<' ';
	cout<<endl;
 
	ArrayUtility::doubleToInt(z, x, 5);
	for(int i=0; i<5; i++) cout<<x[i]<<' ';
	cout<<endl;
}
*/
 
/*Q5
#include <iostream>
using namespace std;
 
class ArrayUtility2{
	public:
		static int* concat(int s1[], int s2[], int size) {
			int *p=new int [size*2];
			for(int i=0; i<size; i++) {
				p[i]=s1[i];
				p[i+size]=s2[i];
			}
			return p;
		}
		
		static int* remove(int s1[], int s2[], int size, int& retSize) {
			retSize=0;
			for(int i=0; i<size; i++) {
				for(int j=0; j<size; j++) {
					if(s1[i]==s2[j]) s1[i]=NULL;
				}
			}
			
			for(int i=0; i<size; i++) {
				if(s1[i]!=NULL) retSize++;
			}
			
			int *p=new int[retSize];
			int n=0;
			for(int i=0; i<size; i++) {
				if(s1[i]!=NULL) {
					p[n]=s1[i]; n++;
				}
			}
			if(retSize==0) return NULL;
			else return p;
		}
};

int main()
{
	ArrayUtility2 a;
	int x[5], y[5];
	cout<<"정수를 5 개를 입력하라. 배열 x에 삽입한다>>";
	for(int i=0; i<5; i++) cin>>x[i];
	cout<<"정수를 5 개를 입력하라. 배열 y에 삽입한다>>";
	for(int i=0; i<5; i++) cin>>y[i];
	cout<<"합친 정수 배열을 출력한다"<<endl;
	for(int i=0; i<10; i++) cout<<a.concat(x, y, 5)[i]<<' ';
	cout<<endl;
	int retsize;
	int *z=a.remove(x, y, 5, retsize);
	cout<<"배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 "<<retsize<<endl;
	for(int i=0; i<retsize; i++) cout<<z[i]<<' ';
	cout<<endl;
}
*/

/*Q6*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random{
	public:
		static void seed() {srand((unsigned)time(0));}
		static int nextInt(int min=0, int max=32767) {
			int n;
			n=min+rand()%(max-min+1);
			return n;
		}
		static char nextAlphabet(){
			char n;
			if(rand()%2) n=(char)(rand()%26+65);
			else n=(char)(rand()%26+97);
			return n;
}
		static double nextDouble(){
			double n;
				n=rand()/(double)(RAND_MAX);
				return n;	
		}
};

int main()
{
	Random r;
	r.seed();
	cout<<"1에서 100까지 랜덤한 정수 10개를 출력합니다."<<endl;
	for(int i=0; i<10; i++) cout<<r.nextInt(1, 100)<<' ';
	cout<<endl;
	cout<<"알파벳을 랜덤하게 10개를 출력합니다."<<endl;
	for(int i=0; i<10; i++) cout<<r.nextAlphabet()<<' ';
	cout<<endl;
	cout<<"랜덤한 실수를 10개를 출력합니다."<<endl;
	for(int i=0; i<5; i++) cout<<r.nextDouble()<<' ';
	cout<<endl;
	for(int i=0; i<5; i++) cout<<r.nextDouble()<<' ';
	cout<<endl;
}
