#include <iostream>
using namespace std;

class C2DPoint
{
private:
	float x;
	float y;
public:
	C2DPoint();
	C2DPoint(float, float);
	C2DPoint(const C2DPoint&);
	~C2DPoint();
	void Input();
	void Output();
};

int main()
{
	cout << "Problem 01" << endl;
	C2DPoint p;
	p.Input();
	p.Output();
	return 1;
}

void C2DPoint::Input()
{
	cout << "\nEnter point's X:	";
	cin >> x;
	cout << "Enter point's Y:	";
	cin >> y;
}

void C2DPoint::Output()
{
	cout << "\nThe enterred point is:	(" << x << ", " << y << ")." << endl;
}

C2DPoint::C2DPoint()
{
	x = 0;
	y = 0;
}

C2DPoint::C2DPoint(float px, float py)
{
	x = px;
	y = py;
}

C2DPoint::C2DPoint(const C2DPoint& p)
{
	x = p.x;
	y = p.y;
}

C2DPoint::~C2DPoint()
{
	return;
}