#include <iostream>
#include <string>
using namespace std;

class CMonomial
{
private:
	float coefficient;
	string variable;
	float exponent;
public:
	CMonomial();
	CMonomial(float, string, float);
	CMonomial(const CMonomial&);
	~CMonomial();
	void Input();
	void Output();
};

int main()
{
	cout << "Problem 08" << endl;
	CMonomial m;
	m.Input();
	m.Output();
	return 1;
}

void CMonomial::Input()
{
	cout << "\nEnter the coefficient:	";
	cin >> coefficient;
	cout << "Enter the variable:	";
	cin.ignore();
	getline(cin, variable);
	cout << "Enter the exponent:	";
	cin >> exponent;
}

void CMonomial::Output()
{
	cout << "\nThe inputted monomial is:	" << coefficient << variable << "^" << exponent << endl;
}

CMonomial::CMonomial()
{
	coefficient = 0;
	variable = "x";
	exponent = 0;
}

CMonomial::CMonomial(float c, string v, float e)
{
	coefficient = c;
	variable = v;
	exponent = e;
}

CMonomial::CMonomial(const CMonomial& mnm)
{
	coefficient = mnm.coefficient;
	variable = mnm.variable;
	exponent = mnm.exponent;
}

CMonomial::~CMonomial()
{
	return;
}