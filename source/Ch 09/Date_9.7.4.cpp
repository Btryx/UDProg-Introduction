#include "std_lib_facilities.h"

namespace UDChrono {

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


class Date{	
public:
	class Invalid{};
	Date(): year(Year{2001}), month(Month::jan), day(1) {} //default coonstructor
	Date(Year y, Month m, int d): year(y), month(m), day(d) { if(!is_valid()) throw Invalid{}; }
	void add_day(int n);  
	bool is_valid();
	Year get_year() const {return year;}  //ez a funcion nem változtatja
	Month get_month() const {return month;}  //meg az objektum állapotát
	int get_day() const {return day;}  //constans
	

private:
	Year year;
	Month month; 
	int day;
	

};

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
bool Date::is_valid()
{
	if (day>31 || day<1) return false;
	return true;
}


} //namespace

int main()
try {
	
	using namespace UDChrono;

	Date today {Year{1978}, Month::jun, 25};

	cout << "Date: " << today.get_year() << ". " << today.get_month() << " " << today.get_day() << ".\n";

	today.add_day(1);

	cout << "Date: " << today.get_year() << ". " << today.get_month() << " " << today.get_day() << ".\n";


	return 0;

} catch (UDChrono::Date::Invalid) {
	cout << "Error: Invalid date\n";
	return 1; 
} catch (UDChrono::Year::Invalid) {
	cout << "Error: Invalid year\n";
	return 2; 
} catch (exception& e) {
	cout << "Error: " << e.what() << endl;
	return 3;
}

