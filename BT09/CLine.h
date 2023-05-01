#include <iostream>
using namespace std;

class CLine
{
private:
	float a;
	float b;
	float c;
public:
	CLine();
	CLine(float, float, float);
	CLine(const CLine&);
	~CLine();
};

CLine::CLine()
{
	cout << "\nThe default constructor is called to execute.";
	a = 1;
	b = 1;
	c = 1;
}
CLine::CLine(float la, float lb, float lc)
{
	cout << "\nThe parameterized constructor is called to execute.";
	a = la;
	b = lb;
	c = lc;
}
CLine::CLine(const CLine& l)
{
	cout << "\nThe copy constructor is called to execute.";
	a = l.a;
	b = l.b;
	c = l.c;
}
CLine::~CLine()
{
	cout << "\nThe destructor is called to execute.";
	return;
}