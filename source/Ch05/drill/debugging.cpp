#include "../../std_lib_facilities.h"

int main()
try {

	cout << "Success!\n"; //1(Cout)

	cout << "Success!\n"; //2(missing ")

	cout << "Success" << "!\n"; //3(missing ", and missing ;)

	cout << "Success!" << '\n'; //4(entered as variable, no !, success with small s)

	char res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; //5(char instead of string)

	vector<int>v2(10);v2[5]=7; if(v2[5]==7) cout << "Success!\n";//6([5], ==7)

	if (true) cout << "Success!\n"; else cout << "Fail!\n";//7 

	bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n";//8

	string s = "ape"; bool c2 = "fool">s; if (c2) cout << "Success!\n"; //9

	string s2 = "ape"; if (s2!="fool") cout << "10.Success!\n"; //10

	string s3 = "ape"; if (s3!="fool") cout << "Success!\n"; //11

	string s4 = "ape"; if (s4!="fool") cout << "Success!\n"; //12

	vector<char> v3(5); for (int i=0; i<v3.size(); ++i) ; cout << "Success!\n"; //13

	vector<char> v4(5); for (int i=0; i<=v4.size(); ++i) ; cout << "Success!\n"; //14

	string s5 = "Success!\n"; for (int i=0; i<s5.size(); ++i) cout << s5[i]; //15

	if (true) cout << "Success!\n"; else cout << "Fail!\n"; //16

	int x = 2000; int c3 = x; if (c3==2000) cout << "Success!\n"; //17

	string s6 = "Success!\n"; for (int i=0; i<s6.size(); ++i) cout << s6[i]; //18

	vector<char> v5(5); for (int i=0; i<=v5.size(); ++i); cout << "Success!\n"; //19

	int i=0; int j = 9; while (j<10) ++j; if (j>i) cout << "20.Success!\n"; //20

	//int x2 = 3; double d = 5/(x2–2); if (d!=2*x2+0.5) cout << "Success!\n"; //21 

	string s7 = "Success!\n"; for (int i=0; i<=10; ++i) cout << s7[i]; //22

	int i2=0;int j2; while (i2<10) ++i2; if (j2<i2) cout << "Success!\n"; //23

	int x3 = 4; double d2 = 5/(x3-2); if (d2!=2*x3+0.5) cout << "Success!\n"; //24

	cout << "Success!\n"; //25(cout instead of cin)

	keep_window_open();

	return 0;
	
} 
catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
} 
catch (...) {
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}
