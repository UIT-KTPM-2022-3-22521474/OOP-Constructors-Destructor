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
	void Input();
	void Checker();
	void Output();
};

int main()
{
	cout << "Problem 07" << endl;
	CTime d;
	d.Input();
	d.Checker();
	d.Output();
	return 1;
}

void CTime::Input()
{
	cout << "\nEnter the hour (0-23):		";
	cin >> HH;
	cout << "Enter the minute (0-59):	";
	cin >> MM;
	cout << "Enter the second (0-59):	";
	cin >> SS;
}

void CTime::Checker()
{
	
	while (HH < 0 || HH > 23 || MM < 0 || MM > 59 || SS < 0 || SS > 59)
	{
		cout << "\nThe inpuuted time is invalid. Please re-enter the hour.";
		Input();
	}
}

void CTime::Output()
{
	if (HH < 10)
		if (MM < 10)
			if (SS < 10)
				cout << "\nThe inputted time is: 0" << HH << ":0" << MM << ":0" << SS << "." << endl;
			else
				cout << "\nThe inputted time is: 0" << HH << ":0" << MM << ":" << SS << "." << endl;
		else
			if (SS < 10)
				cout << "\nThe inputted time is: 0" << HH << ":" << MM << ":0" << SS << "." << endl;
			else
				cout << "\nThe inputted time is: 0" << HH << ":" << MM << ":" << SS << "." << endl;
	else
		if (MM < 10)
			if (SS < 10)
				cout << "\nThe inputted time is: " << HH << ":0" << MM << ":0" << SS << "." << endl;
			else
				cout << "\nThe inputted time is: " << HH << ":0" << MM << ":" << SS << "." << endl;
		else
			if (SS < 10)
				cout << "\nThe inputted time is: " << HH << ":" << MM << ":0" << SS << "." << endl;
			else
				cout << "\nThe inputted time is: " << HH << ":" << MM << ":" << SS << "." << endl;
}

CTime::CTime()
{
	HH = 0;
	MM = 0;
	SS = 0;
}

CTime::CTime(int hour, int minute, int second)
{
	HH = hour;
	MM = minute;
	SS = second;
}

CTime::CTime(const CTime& time)
{
	HH = time.HH;
	MM = time.MM;
	SS = time.SS;
}

CTime::~CTime()
{
	return;
}