#include "std_lib_facilities.h"

//chapter 4 drill third part

double convert(double x, string unit)
{
	if(unit=="m") x=x;
	else if(unit=="in") x = x*2.54/100;
	else if(unit=="ft") x=x*12*2.54/100;
	else if(unit=="cm") x=x/100;
	else if(unit=="") simple_error("No unit!");
	else simple_error("Illegal unit!");		
	return x;
}

int main()
{
	double num = 0;
	double max=numeric_limits<double>::min();
	double min=numeric_limits<double>::max();
	string unit;
	double sum=0;
	double cn=0;
	int i=0;
	vector<double> v;
	while(cin>>num>>unit){
	
		if(unit=="m" || unit=="cm" || unit=="in" || unit=="ft"){
			cn=convert(num,unit);
			if(cn<min){
				min=cn;
			}
			else if(cn>max){
				max=cn;
			}
			sum+=cn;
			v.push_back(cn);
			i++;
		}
		else break;
	}
	cout<<"the smallest value: "<< min << " m" << endl;
	cout<<"the largest value: "<< max << " m" << endl;
	cout<<"the number of values: "<<i<<endl;
	cout<<"the sum of values: "<<sum << " m" << endl;
	cout<<"the sorted elements are: ";
		sort(v);
	for(i=0;i<v.size();i++)
	{
		cout<< v[i] <<"m ";
	
	}
	cout << endl;
	return 0;
}
