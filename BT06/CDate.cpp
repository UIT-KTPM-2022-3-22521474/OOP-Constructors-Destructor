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
	void Input();
	void Checker();
	void Output();
};

int main()
{
	cout << "Problem 06" << endl;
	CDate d;
	d.Input();
	d.Checker();
	d.Output();
	return 1;
}

void CDate::Input()
{
	cout << "\nEnter the date:		";
	cin >> DD;
	cout << "Enter the month:	";
	cin >> MM;
	cout << "Enter the year:		";
	cin >> YYYY;
}

void CDate::Checker()
{
	int LastDate = 0;
	switch (MM)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	{
		LastDate = 31;
		break;
	}		
	case 4: case 6: case 9: case 11:
	{
		LastDate = 30;
		break;
	}
	case 2:
	{
		if (YYYY % 400 == 0 || (YYYY % 4 == 0 && YYYY % 100 != 0))
			LastDate = 29;
		else
			LastDate = 28;
		break;
	}
	}
	while (DD < 1 || DD > LastDate || MM < 1 || MM > 12 || YYYY < 1)
	{
		cout << "\nThe inpuuted date is invalid. Please re-enter the date.";
		Input();
	}
}

void CDate::Output()
{
	cout << "\nThe inputted date is:	" << DD << "/" << MM << "/" << YYYY << "." << endl;
}

CDate::CDate()
{
	DD = 1;
	MM = 1;
	YYYY = 1;
}

CDate::CDate(int date, int month, int year)
{
	DD = date;
	MM = month;
	YYYY = year;
}

CDate::CDate(const CDate& dt)
{
	DD = dt.DD;
	MM = dt.MM;
	YYYY = dt.YYYY;
}

CDate::~CDate()
{
	return;
}