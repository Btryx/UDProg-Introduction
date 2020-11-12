#include "std_lib_facilities.h"

void swap_v(int a, int b)
{
	cout << "a= "<< a << " b= "<< b << endl;
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "cserélt a= "<< a << " cserélt b= "<< b << endl;
	cout << "\n";
}

void swap_r(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
//constans function nem müködik


int main()
{


	int x = 7;
	int y = 9;
	cout << "x= " << x << " y= " << y << endl;

	swap_r(x,y);
	{cout << "cserélt x=" << x << " cserélt y=" << y << endl; //müködik r-rel
	cout << "\n";}

	
	cout << "7 és 9: " << endl;	
	swap_v(7,9); //működik, r-rel nem mert nincs referencia
	


    	const int cx = 7;
    	const int cy = 9;
	cout << "cx és cy: " << endl;
    	swap_v(cx,cy); //működik
	

	cout << "7.7 és 9.9: " << endl;
    	swap_v(7.7,9.9); // nem működik, egész számot ír ki
	
	cout << "double dx és dy: " << endl;
   	double dx = 5.7;
    	double dy = 10.9;
    	swap_v(dx,dy); //nem müködk egész számot ír ki
}
   

