#include "std_lib_facilities.h"

//chapter 4 drill second part (task 6)

int main()
{ 	
	double number = 0;
	double max=numeric_limits<double>::min();
	double min=numeric_limits<double>::max();
	
	cout << "Enter a number: " << endl;
	while(cin>>number)
	{
		
		if(number< min)
		{	
			cout << "Smallest so far.\n";
			min = number;
		}
		else if (number> max)
		{
			cout << "Largest so far.\n";
			max = number;
		}
		
	}
	
	return 0;
}
