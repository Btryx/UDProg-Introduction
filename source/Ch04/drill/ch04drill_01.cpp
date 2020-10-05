#include "std_lib_facilities.h"

//chaptr 4 drill first part

int main()
{

	double a = 0.0, b=0.0;

	while(cin >> a >> b)
	
	{
		cout << "a=" << a << " b=" << b << endl;

		if (a == b)			
			cout << "The numbers are equal.\n";

		else if (abs(a-b)<= 0.01)
			cout << "The numbers are almost equal.\n";

		else if (a<b)
			cout << "b has bigger value: " << b << endl;

		else if (b<a)	
			cout << "a has bigger value: " << a << endl;
		
		

		


		
	}
		return 0;
}


	


