#include <iostream>
using namespace std;

class Calculator
{
	private:
		int add;
		int min;
		int mul;
		int div;
	
	public:
		void Init();
		double Add(double x, double y);
		double Min(double x, double y);
		double Mul(double x, double y);
		double Div(double x, double y);
		void ShowOpCount();
};

void Calculator::Init()
{
	add=0;
	min=0;
	mul=0;
	div=0;
}

double Calculator::Add(double x, double y)
{
	double a;
	a=x+y;
	add++;
	return a;
}

double Calculator::Min(double x, double y)
{
	double b=x-y;
	min++;
	return b;
}

double Calculator::Mul(double x, double y)
{
	double c=x*y;
	mul++;
	return c;
}

double Calculator::Div(double x, double y)
{
	double d=x/y;
	div++;
	return d;
}

void Calculator::ShowOpCount()
{
	cout<<"µ¡¼À : "<<add<<"  »¬¼À : "<<min<<"  °ö¼À : "<<mul<<"  ³ª´°¼À : "<<div<<endl;
}

int main()
{
	Calculator cal;
	cal.Init();
	cout<<"3.2 + 2.4 = "<<cal.Add(3.2, 2.4)<<endl;
	cout<<"3.5 / 1.7 = "<<cal.Div(3.5, 1.7)<<endl;
	cout<<"2.2 - 1.5 = "<<cal.Min(2.2, 1.5)<<endl;
	cout<<"4.9 / 1.2 = "<<cal.Div(4.9, 1.2)<<endl;
	cal.ShowOpCount();
	
	return 0;
}
