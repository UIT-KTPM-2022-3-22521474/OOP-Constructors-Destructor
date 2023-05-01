#include "C3DPoint.h"

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
};

CSphere::CSphere()
{
	cout << "\nThe default constructor is called to execute.";
	o = { 0,0,0 };
	r = 1;
}
CSphere::CSphere(C3DPoint i, double halfd)
{
	cout << "\nThe parameterized constructor is called to execute.";
	o = i;
	r = halfd;
}
CSphere::CSphere(const CSphere& c)
{
	cout << "\nThe copy constructor is called to execute.";
	o = c.o;
	r = c.r;
}

CSphere::~CSphere()
{
	cout << "\nThe destructor is called to execute.";
	return;
}