#include <iostream>
using namespace std;

typedef struct point
{
	int xpos;
	int ypos;
	
}Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
	Point *a=new Point;
	a->xpos=p1.xpos+p2.xpos;
	a->ypos=p1.ypos+p2.ypos;
	return *a;
}

int main()
{
	Point *a1=new Point;
	a1->xpos=3;
	a1->ypos=30;
	
	Point *a2=new Point;
	a2->xpos=70;
	a2->ypos=7;
	
	Point &b=PntAdder(*a1, *a2);
	cout<<"["<<b.xpos<<", "<<b.ypos<<"]"<<endl;
	
	delete a1;
	delete a2;
	delete &b;
	
	return 0;
}
