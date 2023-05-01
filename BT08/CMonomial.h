#include <iostream>
using namespace std;

class CMonomial
{
private:
	float coefficient;
	float exponent;
public:
	CMonomial();
	CMonomial(float, float);
	CMonomial(const CMonomial&);
	~CMonomial();
};

CMonomial::CMonomial()
{
	cout << "\nThe default constructor is called to execute.";
	coefficient = 1;
	exponent = 1;
}

CMonomial::CMonomial(float c, float e)
{
	cout << "\nThe parameterized constructor is called to execute.";
	coefficient = c;
	exponent = e;
}

CMonomial::CMonomial(const CMonomial& mnm)
{
	cout << "\nThe copy constructor is called to execute.";
	coefficient = mnm.coefficient;
	exponent = mnm.exponent;
}

CMonomial::~CMonomial()
{
	cout << "\nThe destructor is called to execute.";
	return;
}