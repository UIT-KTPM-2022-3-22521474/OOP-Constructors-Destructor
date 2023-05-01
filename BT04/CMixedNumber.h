#include  <iostream>
using namespace std;

class CMixedNumber
{
private:
	int numerator;
	int denominator;
	int intpart;
public:
	CMixedNumber();
	CMixedNumber(int, int, int);
	CMixedNumber(const CMixedNumber&);
	~CMixedNumber();
};

CMixedNumber::CMixedNumber()
{
	cout << "\nThe default constructor is called to execute.";
	intpart = 0;
	numerator = 0;
	denominator = 1;
}

CMixedNumber::CMixedNumber(int intp, int nume, int deno)
{
	cout << "\nThe parameterized constructor is called to execute.";
	intpart = intp;
	numerator = nume;
	denominator = deno;
}

CMixedNumber::CMixedNumber(const CMixedNumber& mn)
{
	cout << "\nThe copy constructor is called to execute.";
	intpart = mn.intpart;
	numerator = mn.numerator;
	denominator = mn.denominator;
}

CMixedNumber::~CMixedNumber()
{
	cout << "\nThe destructor is called to execute.";
	return;
}