#include <iostream>
using namespace std;

class C3DPoint
{
private:
	float x;
	float y;
	float z;
public:
	C3DPoint();
	C3DPoint(float, float, float);
	C3DPoint(const C3DPoint&);
	~C3DPoint();
};

C3DPoint::C3DPoint()
{
	cout << "\nThe default constructor is called to execute.";
	x = 0;
	y = 0;
	z = 0;
}

C3DPoint::C3DPoint(float px, float py, float pz)
{
	cout << "\nThe parameterized constructor is called to execute.";
	x = px;
	y = py;
	z = pz;
}

C3DPoint::C3DPoint(const C3DPoint& p)
{
	cout << "\nThe copy constructor is called to execute.";
	x = p.x;
	y = p.y;
	z = p.z;
}

C3DPoint::~C3DPoint()
{
	cout << "\nThe destructor is called to execute.";
	return;
}