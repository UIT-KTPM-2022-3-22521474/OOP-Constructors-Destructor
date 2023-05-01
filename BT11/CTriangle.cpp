#include "CTriangle.h"

int main()
{
	cout << "Problem 11 - 22521474 - BT_OOP_W4" << endl;
	CTriangle dc;
	C2DPoint a = { 0,1 };
	C2DPoint b = { 0,2 };
	C2DPoint c = { 0,3 };
	CTriangle cc = { a,b,c };
	CTriangle pc(dc);
	return 1;
}