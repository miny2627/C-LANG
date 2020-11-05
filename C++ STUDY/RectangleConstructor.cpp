#include <iostream>
using namespace std;

class Point
{
	private:
		int x;
		int y;
		
	public:
		Point(const int &xpos, const int &ypos);
		int GetX() const;
		int GetY() const;
		bool SetX(int xpos);
		bool SetY(int ypos);
};

Point::Point(const int &xpos, const int &ypos)
{
	x=xpos;
	y=ypos;
}

int Point::GetX() const {return x;}
int Point::GetY() const {return y;}

bool Point::SetX(int xpos)
{
	if(0>xpos || xpos>100)
	{
		cout<<"벗어난 범위의 값 전달"<<endl;
		return false;
	}
	x=xpos;
	return true;
}

bool Point::SetY(int ypos)
{
	if(0>ypos || ypos>100)
	{
		cout<<"벗어난 범위의 값 전달"<<endl;
		return false;
	}
	y=ypos;
	return true;
}

class Rectangle
{
	private:
		Point upLeft;
		Point lowRight;
		
	public:
		Rectangle(const int &x1, const int &y1, const int &x2, const int &y2);
		void ShowRecInfo() const;
};

Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2)
			:upLeft(x1, y1), lowRight(x2, y2)
{
	
}

void Rectangle::ShowRecInfo() const
{
	cout<<"좌 상단: "<<'['<<upLeft.GetX()<<", ";
	cout<<upLeft.GetY()<<']'<<endl;
	cout<<"우 하단: "<<'['<<lowRight.GetX()<<", ";
	cout<<lowRight.GetY()<<']'<<endl; 
}

int main()
{
	Rectangle rec(1, 1, 5, 5);
	rec.ShowRecInfo();
	
	return 0;
}
