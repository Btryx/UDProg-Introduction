#include "std_lib_facilities.h"


void print_array10(ostream& os, int* a)
{
	for (int i=0; i<10; i++)
		os<<a[i] << " ";
		cout << endl;
}

void print_array(ostream& os, int* a, int n)
{
	for (int i=0; i<n; i++)
		os<<a[i] << " ";
		cout << endl;

}


void print_vector(ostream& os,vector<int>&v)
{
	for (int i=0; i<v.size(); i++)
		os<< v[i]<<" ";
		cout << "\n";
	
}


int main()
{
	
	int* t = new int[10];
	for (int i=0; i<10; i++)
		cout<<t[i]<< " ";
		cout << "\n"; 
	
	int* t2 = new int[10];
	for (int i=0; i<10;i++)
		t2[i]=i+100;
	
	print_array10(cout, t2); 
	
	
	int* t3 = new int[11];
	for (int i=0; i<11;i++)
		t3[i]=i+100;
	print_array(cout,t3,11);

	
	int* t4 = new int[20];
	for (int i=0; i<20;i++)
		t4[i]=i+100;

	print_array(cout,t4,20);
	
	delete [] t;
	delete [] t2;
	delete [] t3;
	delete [] t4;
	

cout << "\nvektorok\n";

	vector<int>v10;

	for (int i=0; i<10;i++)
		v10.push_back(100+i);
	print_vector(cout, v10);

	vector<int>v11;
	for (int i=0; i<11; i++)
		v11.push_back(100+i);
	print_vector(cout, v11);


	vector<int>v20;
	for (int i=0; i<20;i++)
		v20.push_back(100+i);
	print_vector(cout,v20);

	return 0;

}