#include<iostream>
using namespace std;

class CDate
{
private:
	int DD;
	int MM;
	int YYYY;
public:
	CDate();
	CDate(int, int, int);
	CDate(const CDate&);
	~CDate();
};

CDate::CDate()
{
	cout << "\nThe default constructor is called to execute.";
	DD = 1;
	MM = 1;
	YYYY = 1;
}

CDate::CDate(int date, int month, int year)
{
	cout << "\nThe parameterized constructor is called to execute.";
	DD = date;
	MM = month;
	YYYY = year;
}

CDate::CDate(const CDate& dt)
{
	cout << "\nThe copy constructor is called to execute.";
	DD = dt.DD;
	MM = dt.MM;
	YYYY = dt.YYYY;
}

CDate::~CDate()
{
	cout << "\nThe destructor is called to execute.";
	return;
}