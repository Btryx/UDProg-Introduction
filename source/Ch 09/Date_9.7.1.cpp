#include "std_lib_facilities.h"

const vector<string> months = {
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};

enum class Month {

	jan, febr, mar, apr, may, jun, jul, aug, sep, oct, nov, dec

};

Month operator++(Month& m) 
{
	m = (m==Month::dec) ? Month::jan : Month(int(m)+1); //wrap around
	return m;
}

ostream& operator<<(ostream& os, Month m) { return os << months[int(m)]; }

class Year{
	static const int min= 1800;
	static const int max = 2200;
public:
	class Invalid {};
	Year(int x) : y{x} { if (x< min || max<=x) throw Invalid{};}
	int year() {return y;}
	void increment() { y++; }
private:
	int y;
};

Year operator++(Year& year){ year.increment(); }

ostream& operator<<(ostream& os, Year year) {return os << year.year(); }

class Date{	
public:
	class Invalid{};
	Date(Year y, Month m, int d): year(y), month(m), day(d) { if(!is_valid()) throw Invalid{}; }
	void add_day(int n);
	bool is_valid();
	Year get_year(){return year;}
	Month get_month(){return month;}
	int get_day(){return day;}
	

private:
	Year year;
	Month month; 
	int day;
	

};


bool Date::is_valid()
{
	if (day>31 || day<1) return false;
	return true;
}

void Date::add_day(int n)
{

	day += n;
	if (day > 31){
		++ month;
		day -= 31; 
	}

	if (month== Month::jan){
		++year;
		
	}
	
		

}

int main()
try {
	Date today{Year{1978}, Month::jun, 25};

	cout << "Today's date: " << today.get_year() << ". " << today.get_month() << " " << today.get_day() << ". " << endl;
	today.add_day(1);
	cout << "Tomorrow's date: " << today.get_year() << ". " << today.get_month() << " " << today.get_day() << ". " << endl;

	

return 0;
}catch (Date::Invalid){
	
	error("Invalid date");
	return 1;
}catch (Year::Invalid){
	
	error("Invalid year");
	return 2;

}catch (exception& e){
	
	cout << e.what() << endl;
	return 3;

}
