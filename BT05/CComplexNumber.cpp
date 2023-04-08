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
	void Input();
	void Output();
};

int main()
{
	cout << "Problem 05" << endl;
	CComplexNumber cn;
	cn.Input();
	cn.Output();
	return 1;
}

CComplexNumber::CComplexNumber()
{
	real = 0;
	imaginary = 0;
}

CComplexNumber::CComplexNumber(int rp, int ip)
{
	real = rp;
	imaginary = ip;
}

CComplexNumber::CComplexNumber(const CComplexNumber& cn)
{
	real = cn.real;
	imaginary = cn.imaginary;
}

CComplexNumber::~CComplexNumber()
{
	return;
}

void CComplexNumber::Input()
{
	cout << "\nEnter the real part:		";
	cin >> real;
	cout << "Enter the imaginary part:	";
	cin >> imaginary;
}

void CComplexNumber::Output()
{
	if (imaginary < 0)
	{
		imaginary = -imaginary;
		cout << "\nThe inputted complex number is:	" << real << " - " << imaginary << "i." << endl;
	}
	else
		cout << "\nThe inputted complex number is:	" << real << " + " << imaginary << "i." << endl;
}