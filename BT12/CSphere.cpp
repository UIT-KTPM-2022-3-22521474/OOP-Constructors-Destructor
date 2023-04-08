#include <iostream>
#include <iomanip>
using namespace std;

class C3DPoint
{
private:
	double x;
	double y;
	double z;
public:
	C3DPoint();
	C3DPoint(double, double, double);
	C3DPoint(const C3DPoint&);
	~C3DPoint();
	double getX();
	double getY();
	double getZ();
	void setX(double);
	void setY(double);
	void setZ(double);
	void InputP();
	void OutputP();
};
class CSphere
{
private:
	C3DPoint o;
	double r;
public:
	CSphere();
	CSphere(C3DPoint, double);
	CSphere(const CSphere&);
	~CSphere();
	void InputS();
	void OutputS();
};

int main()
{
	cout << "Problem 12" << endl;
	CSphere s;
	s.InputS();
	s.OutputS();
	return 1;
}

C3DPoint::C3DPoint()
{
	x = 0;
	y = 0;
	z = 0;
}
C3DPoint::C3DPoint(double px, double py, double pz)
{
	x = px;
	y = py;
	z = pz;
}
C3DPoint::C3DPoint(const C3DPoint& p)
{
	x = p.x;
	y = p.y;
	z = p.z;
}

C3DPoint::~C3DPoint()
{
	return;
}

CSphere::CSphere()
{
	o = { 0,0,0 };
	r = 0;
}
CSphere::CSphere(C3DPoint i, double halfd)
{
	o = i;
	r = halfd;
}
CSphere::CSphere(const CSphere& c)
{
	o = c.o;
	r = c.r;
}

CSphere::~CSphere()
{
	return;
}

double C3DPoint::getX()
{
	return x;
}
double C3DPoint::getY()
{
	return y;
}
double C3DPoint::getZ()
{
	return z;
}

void C3DPoint::setX(double px)
{
	x = px;
}
void C3DPoint::setY(double py)
{
	y = py;
}
void C3DPoint::setZ(double pz)
{
	z = pz;
}

void C3DPoint::InputP()
{
	cout << "\nEnter point's X:				";
	cin >> x;
	cout << "Enter point's Y:				";
	cin >> y;
	cout << "Enter point's Z:				";
	cin >> z;
}

void C3DPoint::OutputP()
{
	cout << "(" << x << ", " << y << ", " << z << ").";
}

void CSphere::InputS()
{
	cout << "\nEnter the centerpoint's coordinate:";
	o.InputP();
	cout << "Enter the sphere's radius:			";
	cin >> r;
	while (r < 0)
	{
		cout << "\nYou have enter an invalid radius. Please re-enter the circle's radius!" << endl;
		cout << "Enter the sphere's radius:			";
		cin >> r;
	}
}
void CSphere::OutputS()
{
	cout << "\nThe inputted sphere's centerpoint is:		";
	o.OutputP();
	cout << "\nThe inputted sphere's radius is:	" << setw(9) << setprecision(5) << r << "." << endl;
	if (o.getX() > 0) 
	{
		if (o.getY() > 0) 
		{
			if (o.getZ() > 0)
				cout << "The inputted sphere's equation is:		(x - " << o.getX() << ")^2 + (y - " << o.getY() << ")^2 + (z - " << o.getZ() << ")^2 = " << r * r << "." << endl;
			if (o.getZ() < 0)
				cout << "The inputted sphere's equation is:		(x - " << o.getX() << ")^2 + (y - " << o.getY() << ")^2 + (z + " << -o.getZ() << ")^2 = " << r * r << "." << endl;
			if (o.getZ() == 0)
				cout << "The inputted sphere's equation is:		(x - " << o.getX() << ")^2 + (y - " << o.getY() << ")^2 + z^2 = " << r * r << "." << endl;
		}
		if (o.getY() < 0) 
		{
			if (o.getZ() > 0)
				cout << "The inputted sphere's equation is:		(x - " << o.getX() << ")^2 + (y + " << -o.getY() << ")^2 + (z - " << o.getZ() << ")^2 = " << r * r << "." << endl;
			if (o.getZ() < 0)
				cout << "The inputted sphere's equation is:		(x - " << o.getX() << ")^2 + (y + " << -o.getY() << ")^2 + (z + " << -o.getZ() << ")^2 = " << r * r << "." << endl;
			if (o.getZ() == 0)
				cout << "The inputted sphere's equation is:		(x - " << o.getX() << ")^2 + (y + " << -o.getY() << ")^2 + z^2 = " << r * r << "." << endl;
		}
		if (o.getY() == 0) 
		{
			if (o.getZ() > 0)
				cout << "The inputted sphere's equation is:		(x - " << o.getX() << ")^2 + y^2 + (z - " << o.getZ() << ")^2 = " << r * r << "." << endl;
			if (o.getZ() < 0)
				cout << "The inputted sphere's equation is:		(x - " << o.getX() << ")^2 + y^2 + (z + " << -o.getZ() << ")^2 = " << r * r << "." << endl;
			if (o.getZ() == 0)
				cout << "The inputted sphere's equation is:		(x - " << o.getX() << ")^2 + y^2 + z^2 = " << r * r << "." << endl;
		}
	}
	if (o.getX() < 0) 
	{
		if (o.getY() > 0) 
		{
			if (o.getZ() > 0)
				cout << "The inputted sphere's equation is:		(x + " << -o.getX() << ")^2 + (y - " << o.getY() << ")^2 + (z - " << o.getZ() << ")^2 = " << r * r << "." << endl;
			if (o.getZ() < 0)
				cout << "The inputted sphere's equation is:		(x + " << -o.getX() << ")^2 + (y - " << o.getY() << ")^2 + (z + " << -o.getZ() << ")^2 = " << r * r << "." << endl;
			if (o.getZ() == 0)
				cout << "The inputted sphere's equation is:		(x + " << -o.getX() << ")^2 + (y - " << o.getY() << ")^2 + z^2 = " << r * r << "." << endl;
		}
		if (o.getY() < 0) 
		{
			if (o.getZ() > 0)
				cout << "The inputted sphere's equation is:		(x + " << -o.getX() << ")^2 + (y + " << -o.getY() << ")^2 + (z - " << o.getZ() << ")^2 = " << r * r << "." << endl;
			if (o.getZ() < 0)
				cout << "The inputted sphere's equation is:		(x + " << -o.getX() << ")^2 + (y + " << -o.getY() << ")^2 + (z + " << -o.getZ() << ")^2 = " << r * r << "." << endl;
			if (o.getZ() == 0)
				cout << "The inputted sphere's equation is:		(x + " << -o.getX() << ")^2 + (y + " << -o.getY() << ")^2 + z^2 = " << r * r << "." << endl;
		}
		if (o.getY() == 0) 
		{
			if (o.getZ() > 0)
				cout << "The inputted sphere's equation is:		(x + " << -o.getX() << ")^2 + y^2 + (z - " << o.getZ() << ")^2 = " << r * r << "." << endl;
			if (o.getZ() < 0)
				cout << "The inputted sphere's equation is:		(x + " << -o.getX() << ")^2 + y^2 + (z + " << -o.getZ() << ")^2 = " << r * r << "." << endl;
			if (o.getZ() == 0)
				cout << "The inputted sphere's equation is:		(x + " << -o.getX() << ")^2 + y^2 + z^2 = " << r * r << "." << endl;
		}
	}
	if (o.getX() == 0)
	{
		if (o.getY() > 0) 
		{
			if (o.getZ() > 0)
				cout << "The inputted sphere's equation is:		x^2 + (y - " << o.getY() << ")^2 + (z - " << o.getZ() << ")^2 = " << r * r << "." << endl;
			if (o.getZ() < 0)
				cout << "The inputted sphere's equation is:		x^2 + (y - " << o.getY() << ")^2 + (z + " << -o.getZ() << ")^2 = " << r * r << "." << endl;
			if (o.getZ() == 0)
				cout << "The inputted sphere's equation is:		x^2 + (y - " << o.getY() << ")^2 + z^2 = " << r * r << "." << endl;
		}
		if (o.getY() < 0) 
		{
			if (o.getZ() > 0)
				cout << "The inputted sphere's equation is:		x^2 + (y + " << -o.getY() << ")^2 + (z - " << o.getZ() << ")^2 = " << r * r << "." << endl;
			if (o.getZ() < 0)
				cout << "The inputted sphere's equation is:		x^2 + (y + " << -o.getY() << ")^2 + (z + " << -o.getZ() << ")^2 = " << r * r << "." << endl;
			if (o.getZ() == 0)
				cout << "The inputted sphere's equation is:		x^2 + (y + " << -o.getY() << ")^2 + z^2 = " << r * r << "." << endl;
		}
		if (o.getY() == 0)
		{
			if (o.getZ() > 0)
				cout << "The inputted sphere's equation is:		x^2 + y^2 + (z - " << o.getZ() << ")^2 = " << r * r << "." << endl;
			if (o.getZ() < 0)
				cout << "The inputted sphere's equation is:		x^2 + y^2 + (z + " << -o.getZ() << ")^2 = " << r * r << "." << endl;
			if(o.getZ() == 0)
				cout << "The inputted sphere's equation is:		x^2 + y^2 + z^2 = " << r * r << "." << endl;
		}
	}
}