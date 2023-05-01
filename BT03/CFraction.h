#include  <iostream>
using namespace std;

class CFraction
{
private:
	int numerator;
	int denominator;
public:
	CFraction();
	CFraction(int, int);
	CFraction(const CFraction&);
	~CFraction();
};

CFraction::CFraction()
{
	cout << "\nThe default constructor is called to execute.";
	numerator = 0;
	denominator = 1;
}

CFraction::CFraction(int nume, int deno)
{
	cout << "\nThe parameterized constructor is called to execute.";
	numerator = nume;
	denominator = deno;
}

CFraction::CFraction(const CFraction& ft)
{
	cout << "\nThe copy constructor is called to execute.";
	numerator = ft.numerator;
	denominator = ft.denominator;
}

CFraction::~CFraction()
{
	cout << "\nThe destructor is called to execute.";
	return;
}