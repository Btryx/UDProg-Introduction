#include "std_lib_facilities.h"

struct Date{int y; int m; int d;};

void init_day(Date& date, int y, int m, int d)
{
	if (y > 0)
		date.y = y;

	else
		error("Invalid year!");

	if(m <= 12 && m > 0)
		date.m = m;
		
	else
		error("Invalid month!");

	if(d > 0 && d < 31)
		date.d = d;
	else
		error("Invalid day!");

}

void add_day(Date& date, int n)
{

	date.d += n;
	if (date.d > 30){
		date.m ++;
		date.d -= 30; //ha már júniust használunk legyen 30
	}

	if (date.m > 12){
		date.y ++;
		date.m -= 12;
	}
	
		

}

int main()
try {
	Date today;
	today.y = 1978;
	today.m = 6;
	today.d = 25;

	cout << "Today's date: " << today.y << ". " << today.m << ". " <<today.d << ". " << endl;

	Date tomorrow;
	init_day(tomorrow, today.y, today.m, today.d);
	add_day(tomorrow, 1);
	cout << "Tomorrow: " << tomorrow.y << ". " << tomorrow.m << ". " << tomorrow.d << ". " << endl;
	

return 0;

}catch (exception& e){
	
	cout << e.what() << endl;
	return 1;

}
