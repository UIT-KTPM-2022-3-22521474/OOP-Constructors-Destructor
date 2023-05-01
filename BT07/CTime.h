#include<iostream>
using namespace std;

class CTime
{
private:
	int HH;
	int MM;
	int SS;
public:
	CTime();
	CTime(int, int, int);
	CTime(const CTime&);
	~CTime();
};

CTime::CTime()
{
	cout << "\nThe default constructor is called to execute.";
	HH = 0;
	MM = 0;
	SS = 0;
}

CTime::CTime(int hour, int minute, int second)
{
	cout << "\nThe parameterized constructor is called to execute.";
	HH = hour;
	MM = minute;
	SS = second;
}

CTime::CTime(const CTime& time)
{
	cout << "\nThe copy constructor is called to execute.";
	HH = time.HH;
	MM = time.MM;
	SS = time.SS;
}

CTime::~CTime()
{
	cout << "\nThe destructor is called to execute.";
	return;
}