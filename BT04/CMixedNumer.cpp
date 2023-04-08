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
	void Input();
	void Output();
};

int main()
{
	cout << "Problem 04" << endl;
	CMixedNumber mn;
	mn.Input();
	mn.Output();
	return 1;
}

void CMixedNumber::Input()
{
	cout << "\nEnter the integer part:	";
	cin >> intpart;
	cout << "Enter the numerator:	";
	cin >> numerator;
	cout << "Enter the denominator:	";
	cin >> denominator;
	while (denominator == 0)
	{
		cout << "The inputted denominator is invalid. Please re-enter the denominator: ";
		cin >> denominator;
	}
}

void CMixedNumber::Output()
{
	cout <<"\nThe inputted mixed number is : " << intpart << "(" << numerator << " / " << denominator << ")." << endl;
}

CMixedNumber::CMixedNumber()
{
	intpart = 0;
	numerator = 0;
	denominator = 1;
}

CMixedNumber::CMixedNumber(int intp, int nume, int deno)
{
	intpart = intp;
	numerator = nume;
	denominator = deno;
}

CMixedNumber::CMixedNumber(const CMixedNumber& mn)
{
	intpart = mn.intpart;
	numerator = mn.numerator;
	denominator = mn.denominator;
}

CMixedNumber::~CMixedNumber()
{
	return;
}