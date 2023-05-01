#include "C2DPoint.h"

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
};

CCircle::CCircle()
{
	cout << "\nThe default constructor is called to execute.";
	o = { 0,0 };
	r = 1;
}
CCircle::CCircle(C2DPoint i, double halfd)
{
	cout << "\nThe parameterized constructor is called to execute.";
	o = i;
	r = halfd;
}
CCircle::CCircle(const CCircle& c)
{
	cout << "\nThe copy constructor is called to execute.";
	o = c.o;
	r = c.r;
}

CCircle::~CCircle()
{
	cout << "\nThe destructor is called to execute.";
	return;
}
