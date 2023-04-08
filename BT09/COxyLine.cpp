#include <iostream>
#include <iomanip>
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
	void OutputP();
	double getX();
	double getY();
	void setX(double);
	void setY(double);
	double Distance(C2DPoint);
};
class C2DLine
{
private:
	C2DPoint a;
	C2DPoint b;
public:
	C2DLine();
	C2DLine(C2DPoint, C2DPoint);
	C2DLine(const C2DLine&);
	~C2DLine();
	void InputL();
	void OutputL();
};

int main()
{
	cout << "Problem 09" << endl;
	C2DLine d;
	d.InputL();
	d.OutputL();
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

C2DLine::C2DLine()
{
	a = { 0,0 };
	b = { 0,0 };
}
C2DLine::C2DLine(C2DPoint pa, C2DPoint pb)
{
	a = pa;
	b = pb;
}
C2DLine::C2DLine(const C2DLine& l)
{
	a = l.a;
	b = l.b;
}
C2DLine::~C2DLine()
{
	return;
}
void C2DPoint::InputP()
{
	cout << "Enter point's X:				";
	cin >> x;
	cout << "Enter point's Y:				";
	cin >> y;
}

double C2DPoint::getX()
{
	return x;
}
double C2DPoint::getY()
{
	return y;
}

void C2DPoint::setX(double px)
{
	x = px;
}
void C2DPoint::setY(double py)
{
	y = py;
}

double C2DPoint::Distance(C2DPoint P2)
{
	return sqrt((x - P2.x) * (x - P2.x) + (y - P2.y) * (y - P2.y));
}

void C2DPoint::OutputP()
{
	cout << "(" << x << ", " << y << ").";
}

void C2DLine::InputL()
{
	cout << "\nEnter point A's coordinate:" << endl;
	a.InputP();
	cout << "\nEnter point B's coordinate:" << endl;
	b.InputP();
}
void C2DLine::OutputL()
{
	cout << "\nPoint A's coordinate is:			";
	a.OutputP();
	cout << "\nPoint B's coordinate is:			";
	b.OutputP();
	double d = a.Distance(b);
	cout << "\nThe distance between 2 inputted points is:	" << setw(6) << setprecision(5) << d << "." << endl;
	double coefficientx = b.getY() - a.getY();
	double coefficienty = a.getX() - b.getX();
	double freecoefficient = b.getX() * a.getY() - a.getX() * b.getY();   
	if (coefficientx != 0 && coefficienty > 0 && freecoefficient > 0)
		cout << "The straight line equation is:			" << coefficientx << "x + " << coefficienty << "y + " << freecoefficient << " = 0." << endl;
	if (coefficientx != 0 && coefficienty > 0 && freecoefficient == 0)
		cout << "The straight line equation is:			" << coefficientx << "x + " << coefficienty << "y" << " = 0." << endl;
	if (coefficientx != 0 && coefficienty > 0 && freecoefficient < 0)
		cout << "The straight line equation is:			" << coefficientx << "x + " << coefficienty << "y - " << -freecoefficient << " = 0." << endl;
	if (coefficientx != 0 && coefficienty == 0 && freecoefficient > 0)
		cout << "The straight line equation is:			" << coefficientx << "x + " << freecoefficient << " = 0." << endl;
	if (coefficientx != 0 && coefficienty == 0 && freecoefficient == 0)
		cout << "The straight line equation is:			" << coefficientx << "x" << " = 0." << endl;
	if (coefficientx != 0 && coefficienty == 0 && freecoefficient < 0)
		cout << "The straight line equation is:			" << coefficientx << "x - " << -freecoefficient << " = 0." << endl;
	if (coefficientx != 0 && coefficienty < 0 && freecoefficient > 0)
		cout << "The straight line equation is:			" << coefficientx << "x - " << -coefficienty << "y + " << freecoefficient << " = 0." << endl;
	if (coefficientx != 0 && coefficienty < 0 && freecoefficient == 0)
		cout << "The straight line equation is:			" << coefficientx << "x - " << -coefficienty << "y" << " = 0." << endl;
	if (coefficientx != 0 && coefficienty < 0 && freecoefficient < 0)
		cout << "The straight line equation is:			" << coefficientx << "x - " << -coefficienty << "y - " << -freecoefficient << " = 0." << endl;
	if (coefficientx == 0 && coefficienty > 0 && freecoefficient > 0)
		cout << "The straight line equation is:			" << coefficienty << "y + " << freecoefficient << " = 0." << endl;
	if (coefficientx == 0 && coefficienty > 0 && freecoefficient == 0)
		cout << "The straight line equation is:			" << coefficienty << "y" << " = 0." << endl;
	if (coefficientx == 0 && coefficienty > 0 && freecoefficient < 0)
		cout << "The straight line equation is:			" << coefficienty << "y - " << -freecoefficient << " = 0." << endl;
	if (coefficientx == 0 && coefficienty == 0 && freecoefficient != 0)
		cout << "There are no straight line created by two inputted points." << endl;
	if (coefficientx == 0 && coefficienty == 0 && freecoefficient == 0)
		cout << "Two inputted points are the same." << endl;
	if (coefficientx == 0 && coefficienty < 0 && freecoefficient > 0)
		cout << "The straight line equation is:			" << coefficienty << "y + " << freecoefficient << " = 0." << endl;
	if (coefficientx == 0 && coefficienty < 0 && freecoefficient == 0)
		cout << "The straight line equation is:			" << coefficienty << "y" << " = 0." << endl;
	if (coefficientx == 0 && coefficienty < 0 && freecoefficient < 0)
		cout << "The straight line equation is:			" << coefficienty << "y - " << -freecoefficient << " = 0." << endl;
}