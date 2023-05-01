#include <iostream>
using namespace std;

class C2DPoint
{
private:
	double x;
	double y;
public:
	C2DPoint();
	C2DPoint(double, double);
	C2DPoint(const C2DPoint&);
	~C2DPoint();
};

C2DPoint::C2DPoint()
{
	cout << "\nThe default constructor is called to execute.";
	x = 0;
	y = 0;
}
C2DPoint::C2DPoint(double px, double py)
{
	cout << "\nThe parameterized constructor is called to execute.";
	x = px;
	y = py;
}
C2DPoint::C2DPoint(const C2DPoint& p)
{
	cout << "\nThe copy constructor is called to execute.";
	x = p.x;
	y = p.y;
}

C2DPoint::~C2DPoint()
{
	cout << "\nThe destructor is called to execute.";
	return;
}
