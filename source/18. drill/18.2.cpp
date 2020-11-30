#include "std_lib_facilities.h"
//18.2 drill

vector<int>gv{1,2,4,8,16,32,64,128,256,512}; //1. defining global vector

void f(vector<int>a) //2. defining f funcion
{
	vector<int>lv; //3a defining local vector
	for(int i=0; i<a.size(); i++) //with same number of elements as the arg. vector
		lv.push_back(gv[i]); //3b copying values from gv to lv

	cout<< "elements of lv: "<< endl;
	for(int i=0;i<lv.size();i++)
		cout << lv[i] << " "; //3c printing elements of lv
	cout << endl;

	vector<int> lv2; //3d defining local vector lv2
	for(int i =0; i<a.size(); i++)
		lv2.push_back(a[i]); //making it the copy of the arg. vector

	cout << "elements of lv2: " << endl;
	for(int i=0;i<lv.size();i++)
		cout << lv2[i] << " "; //3e printing elements of lv2
	cout << endl;
}

int main()
try{

f(gv); //4a calling f funcion with gv
vector<int> vv{1,2*1,3*2*1,4*3*2*1,5*4*3*2*1,6*5*4*3*2*1,7*6*5*4*3*2*1,8*7*6*5*4*3*2*1,9*8*7*6*5*4*3*2*1,10*9*8*7*6*5*4*3*2*1}; //4b defining vv vector
f(vv); //4c calling f funcion with vv

cout << "\nSome tests because why not: " << endl;

vector<int> five{1,2,3,4,5};
f(five);

vector<int> big_stuff{321432465, 465463, 3535, 24214103};
f(big_stuff);


return 0;

}catch (exception& e) {
    cerr << "exception: " << e.what() << endl;
}
catch (...) {
    cerr << "exception\n";
}
