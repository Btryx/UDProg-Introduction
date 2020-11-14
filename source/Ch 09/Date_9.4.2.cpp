#include "std_lib_facilities.h"

struct Date{
	int year; 
	int month; 
	int day;
	Date(int y, int m, int d); //constructor:check for valid date and initialize
	void add_day(int n);
};

Date::Date(int y, int m, int d) //a Date típus Date nevű constuctor-a, már nem kell átadni a Date referenciát
{ 
	if (y > 0)
		year = y;

	else
		error("Invalid year!");

	if(m <= 12 && m > 0)
		month = m;
		
	else
		error("Invalid month!");

	if(d > 0 && d < 31)
		day = d;
	else
		error("Invalid day!");

}

void Date::add_day(int n)
{

	day += n;
	if (day > 30){
		month ++;
		day -= 30; 
	}

	if (month > 12){
		year ++;
		month -= 12;
	}
	
		

}

int main()
try {
	Date today{1978,6,25};
	cout << "Today's date: " << today.year << ". " << today.month << ". " << today.day << ". " << endl;
	Date tomorrow{1978,6,25};
	tomorrow.add_day(1);
	cout << "Tomorrow's date: " << tomorrow.year << ". " << tomorrow.month << ". " << tomorrow.day << ". " << endl;

	

return 0;

}catch (exception& e){
	
	cout << e.what() << endl;
	return 1;

}
