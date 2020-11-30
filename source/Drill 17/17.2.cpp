#include "std_lib_facilities.h"


void print_array(ostream& os, int* a, int n)
{
	for (int i=0; i<n; i++)
		os<<a[i]<<" ";
	cout<<endl;
}



int main()
{

	int* p1 = new int(7); 
	cout<<"p1: "<<p1<<" "<<*p1<<endl;


	int* p2= new int[7]{1,2,4,8,16,32,64};
	cout<<"p2: "; print_array(cout,p2,7);


	int* p3=p2;
	
	cout<<"p3 "; print_array(cout,p3,7);
	cout << endl;
	
	p2=p1; 
	p2=p3;

	cout<<"p1: "<<p1<<" "<<*p1<<endl;
	cout<<"p2: "<<p2<<" "; print_array(cout,p2,7);
	cout << endl;

	delete p1; 
	delete [] p2;
	delete [] p3;

	
	p1=new int[10]{1,2,4,8,16,32,64,128,256,512};
	p2=new int[10];

	for (int i=0; i<10; i++)
		p2[i]=p1[i];
	cout<<"p2: "<<p2<<" "; print_array(cout,p2,10);

	delete[] p1; 
	delete [] p2;

	cout << "\nvectors:\n";

	
	vector<int> v1{1,2,4,8,16,32,64,128,256,512};
	cout << "v1: ";
	for (int i = 0; i < v1.size(); ++i)
    {
    	v1.assign(p1, p1 + 10);
        cout << v1[i] << " ";

    }
    	cout << endl;
    	cout<<"p1: "<<p1<<" "; print_array(cout,p1,10);
    
    vector<int> v2;

    for (int i = 0; i < v1.size(); ++i)
    {	
    	v2.assign(p2, p2 +10);
        v2.push_back(v1[i]);
    }


    cout << "v2: ";
  

    for (int i = 0; i < v1.size(); ++i)
    {
        cout << v2[i] << " ";

    }
    	cout<<"\np2: "<<p2<<" "; print_array(cout,p2,10);
    	cout << endl;



	return 0;

}