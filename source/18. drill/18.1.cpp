#include "std_lib_facilities.h"

int ga[10]{1,2,4,8,16,32,64,128,256,512}; //1. defining global array ga

void f(int a[], int n) //2. defining f funcion, w 2 arguments
{
	int la[10]; //3a defining local array of ten ints
	for (int i=0; i<10; i++) 
		la[i]=ga[i]; //3b copying values from ga to la
	
	cout<<"Elements in array la: "<<endl; 
	for (int i=0; i<10; i++)
		cout<<la[i]<<" ";  //3c printing elements of la
	cout<<endl;

	int* p=new int[n]; //3d defining pointer p, same n of elements as as the arg. array
	for (int i=0; i<n; i++)
		p[i]=a[i]; //3e copying the values of arg array to freestore array

	cout<<"Elements on free store: "<<endl;
	for (int i=0;i<n;i++)
		cout<<p[i]<<" "; //3f printing out freestore array
	cout<<endl;
	
	delete [] p; //3g delete
}

int main()
{
	
	f(ga,10); //4a calling f function with ga

	int aa[10]{1,2*1,3*2*1,4*3*2*1,5*4*3*2*1,6*5*4*3*2*1,7*6*5*4*3*2*1,8*7*6*5*4*3*2*1,9*8*7*6*5*4*3*2*1,10*9*8*7*6*5*4*3*2*1}; //4b defining array aa
	f(aa,10); //4c calling f function with aa

	cout <<"\nTest: " << endl;

	int bb[20];
	f(bb,20);

	return 0;
}