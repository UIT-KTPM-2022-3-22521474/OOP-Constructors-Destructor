#include <iostream>
using namespace std;

class CComplexNumber
{
private:
	int real;
	int imaginary;
public:
	CComplexNumber();
	CComplexNumber(int, int);
	CComplexNumber(const CComplexNumber&);
	~CComplexNumber();
};

CComplexNumber::CComplexNumber()
{
	cout << "\nThe default constructor is called to execute.";
	real = 0;
	imaginary = 0;
}

CComplexNumber::CComplexNumber(int rp, int ip)
{
	cout << "\nThe parameterized constructor is called to execute.";
	real = rp;
	imaginary = ip;
}

CComplexNumber::CComplexNumber(const CComplexNumber& cn)
{
	cout << "\nThe copy constructor is called to execute.";
	real = cn.real;
	imaginary = cn.imaginary;
}

CComplexNumber::~CComplexNumber()
{
	cout << "\nThe destructor is called to execute.";
	return;
}
