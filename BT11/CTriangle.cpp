#include <iostream>
#include <cmath>
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
	void InputP();
	double Distance(C2DPoint);
	void OutputP();
};
class CTriangle
{
private:
	C2DPoint a;
	C2DPoint b;
	C2DPoint c;
	double da;
	double db;
	double dc;
public:
	CTriangle();
	CTriangle(C2DPoint, C2DPoint, C2DPoint, double, double, double);
	CTriangle(const CTriangle&);
	~CTriangle();
	void InputT();
	void TChecker();
	void OutputT();
};

int main()
{
	cout << "Problem 11" << endl;
	CTriangle t;
	t.InputT();
	t.TChecker();
	t.OutputT();
	return 1;
}

C2DPoint::C2DPoint()
{
	x = 0;
	y = 0;
}
C2DPoint::C2DPoint(double px, double py)
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

CTriangle::CTriangle()
{
	a = { 0,0 };
	b = { 0,0 };
	c = { 0,0 };
	da = 0;
	db = 0;
	dc = 0;
}
CTriangle::CTriangle(C2DPoint p1, C2DPoint p2, C2DPoint p3, double a_length, double b_length, double c_length)
{
	a = p1;
	b = p2;
	c = p3;
	da = a_length;
	db = b_length;
	dc = c_length;
}
CTriangle::CTriangle(const CTriangle& t)
{
	a = t.a;
	b = t.b;
	c = t.c;
	da = t.da;
	db = t.db;
	dc = t.dc;
}

CTriangle::~CTriangle()
{
	return;
}

void C2DPoint::InputP()
{
	cout << "\nEnter point's X:			";
	cin >> x;
	cout << "Enter point's Y:			";
	cin >> y;
}

double C2DPoint::Distance(C2DPoint P2)
{
	return sqrt((x - P2.x) * (x - P2.x) + (y - P2.y) * (y - P2.y));
}

void C2DPoint::OutputP()
{
	cout << "(" << x << ", " << y << ")";
}

void CTriangle::InputT()
{
	cout << "Enter first point's coordinate:";
	a.InputP();
	cout << "Enter second point's coordinate:";
	b.InputP();
	cout << "Enter third point's coordinate:";
	c.InputP();
}

void CTriangle::TChecker()
{
	da = b.Distance(c);
	db = c.Distance(a);
	dc = a.Distance(b);
	while (da + db < dc || da + dc < db || db + dc < da || da <= 0 || db <= 0 || dc <= 0)
	{
		cout << "\nThe inputted points can't create a triangle. Please re-enter the points' coordinate!" << endl;
		InputT();
	}
}

void CTriangle::OutputT()
{
	cout << "\nThe triangle is created by 3 points:	A";
	a.OutputP();
	cout << ", B";
	b.OutputP();
	cout << ", C";
	c.OutputP();
	cout << "." << endl;
}