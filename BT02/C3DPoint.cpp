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
	void Input();
	void Output();
};

int main()
{
	cout << "Problem 02" << endl;
	C3DPoint p;
	p.Input();
	p.Output();
	return 1;
}

void C3DPoint::Input()
{
	cout << "\nEnter point's X:	";
	cin >> x;
	cout << "Enter point's Y:	";
	cin >> y;
	cout << "Enter point's Z:	";
	cin >> z;
}

void C3DPoint::Output()
{
	cout << "\nThe enterred point is:	(" << x << ", " << y << ", " << z << ")." << endl;
}

C3DPoint::C3DPoint()
{
	x = 0;
	y = 0;
	z = 0;
}

C3DPoint::C3DPoint(float px, float py, float pz)
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