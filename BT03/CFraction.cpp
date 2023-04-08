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
	void Input();
	void Output();
};

int main()
{
	cout << "Problem 03" << endl;
	CFraction ft;
	ft.Input();
	ft.Output();
	return 1;
}

void CFraction::Input()
{
	cout << "\nEnter the numerator:	";
	cin >> numerator;
	cout << "Enter the denominator:	";
	cin >> denominator;
	while (denominator == 0)
	{
		cout << "The inputted denominator is invalid. Please re-enter the denominator: ";
		cin >> denominator;
	}
}

void CFraction::Output()
{
	cout << "\nThe inputted fraction is: " << numerator << "/" << denominator << "." << endl;
}

CFraction::CFraction()
{
	numerator = 0;
	denominator = 1;
}

CFraction::CFraction(int nume, int deno)
{
	numerator = nume;
	denominator = deno;
}

CFraction::CFraction(const CFraction& ft)
{
	numerator = ft.numerator;
	denominator = ft.denominator;
}

CFraction::~CFraction()
{
	return;
}