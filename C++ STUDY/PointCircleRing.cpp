#include <iostream>
using namespace std;

class Point
{
	private:
		int xpos;
		int ypos;
	
	public:
		void Init(int x, int y)
		{
			xpos=x;
			ypos=y;
		}
		
		void ShowPointInfo() const
		{
			cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
		}
};

class Circle
{
	private:
		Point point;
		int radius;
	
	public:
		void Init(int x, int y, int r)
		{
			point.Init(x, y);
			radius=r;
		}
		
		void ShowCircleInfo() const
		{
			cout<<"radius : "<<radius<<endl;
			point.ShowPointInfo();
		}

};

class Ring
{
	private:
		Circle in;
		Circle out;
	
	public:
		void Init(int inx, int iny, int inr, int outx, int outy, int outr)
		{
			in.Init(inx, iny, inr);
			out.Init(outx, outy, outr);
		}
		void ShowRingInfo() const
		{
			cout<<"Inner Circle Info..."<<endl;
			in.ShowCircleInfo();
			cout<<"Outter Circle Info..."<<endl;
			out.ShowCircleInfo();
		}
};

int main()
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	
	return 0;
}
