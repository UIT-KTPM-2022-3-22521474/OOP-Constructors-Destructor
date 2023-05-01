#include "C2DPoint.h"

class CTriangle
{
private:
	C2DPoint a;
	C2DPoint b;
	C2DPoint c;
public:
	CTriangle();
	CTriangle(C2DPoint, C2DPoint, C2DPoint);
	CTriangle(const CTriangle&);
	~CTriangle();
};

CTriangle::CTriangle()
{
	cout << "\nThe default constructor is called to execute.";	
	a = { 0,1 };
	b = { 0,2 };
	c = { 0,3 };
}
CTriangle::CTriangle(C2DPoint p1, C2DPoint p2, C2DPoint p3)
{
	cout << "\nThe parameterized constructor is called to execute.";
	a = p1;
	b = p2;
	c = p3;
}
CTriangle::CTriangle(const CTriangle& t)
{
	cout << "\nThe copy constructor is called to execute.";
	a = t.a;
	b = t.b;
	c = t.c;
}

CTriangle::~CTriangle()
{
	cout << "\nThe destructor is called to execute.";
	return;
}