#include <iostream>
#include <iomanip>
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
	double getX();
	double getY();
	void setX(double);
	void setY(double);
	void InputP();
	void OutputP();
};
class CCircle
{
private:
	C2DPoint o;
	double r;
public:
	CCircle();
	CCircle(C2DPoint, double);
	CCircle(const CCircle&);
	~CCircle();
	void InputC();
	void OutputC();
};

int main()
{
	cout << "Problem 10" << endl;
	CCircle c;
	c.InputC();
	c.OutputC();
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

CCircle::CCircle()
{
	o = { 0,0 };
	r = 0;
}
CCircle::CCircle(C2DPoint i, double halfd)
{
	o = i;
	r = halfd;
}
CCircle::CCircle(const CCircle& c)
{
	o = c.o;
	r = c.r;
}

CCircle::~CCircle()
{
	return;
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

void C2DPoint::InputP()
{
	cout << "\nEnter point's X:			";
	cin >> x;
	cout << "Enter point's Y:			";
	cin >> y;
}

void C2DPoint::OutputP()
{
	cout << "(" << x << ", " << y << ").";
}

void CCircle::InputC()
{
	cout << "\nEnter the centerpoint's coordinate:";
	o.InputP();
	cout << "\nEnter the circle's radius:		";
	cin >> r;
	while (r < 0)
	{
		cout << "\nYou have enter an invalid radius. Please re-enter the circle's radius!" << endl;
		cout << "Enter the circle's radius:		";
		cin >> r;
	}
}
void CCircle::OutputC()
{
	cout << "\nThe inputted circle's centerpoint is:	";
	o.OutputP();
	cout << "\nThe inputted circle's radius is:" << setw(9) << setprecision(5) << r << "." << endl;
	if (o.getX() > 0)
	{
		if (o.getY() > 0)
			cout << "The inputted circle's equation is:	(x - " << o.getX() << ")^2 - (y - " << o.getY() << ")^2 = " << r * r << "." << endl;
		if (o.getY() < 0)
			cout << "The inputted circle's equation is:	(x - " << o.getX() << ")^2 - (y + " << -o.getY() << ")^2 = " << r * r << "." << endl;
		if (o.getY() == 0)
			cout << "The inputted circle's equation is:	(x - " << o.getX() << ")^2 - y^2 = " << r * r << "." << endl;
	}
	if (o.getX() < 0)
	{
		if (o.getY() > 0)
			cout << "The inputted circle's equation is:	(x + " << -o.getX() << ")^2 - (y - " << o.getY() << ")^2 = " << r * r << "." << endl;
		if (o.getY() < 0)
			cout << "The inputted circle's equation is:	(x + " << -o.getX() << ")^2 - (y + " << -o.getY() << ")^2 = " << r * r << "." << endl;
		if (o.getY() == 0)
			cout << "The inputted circle's equation is:	(x + " << -o.getX() << ")^2 - y^2 = " << r * r << "." << endl;
	}
	if (o.getX() == 0 && o.getY() == 0)
		cout << "The inputted circle's equation is:	x^2 + y^2 = " << r * r << "." << endl;
}