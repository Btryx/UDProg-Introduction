#include "std_lib_facilities.h"
//1
struct Point {
    int x;
    int y;
};

//istream
istream& operator>>(istream& is, Point& p)
{
	int x1, y1;
    char ch1, ch2, ch3;
    is >> ch1 >> x1 >> ch2 >> y1 >> ch3;
	if(!is && ch1 != '(' || ch2 != ',' || ch3 != ')'){
		if (is.eof()) return is;
        error("Error: bad input");
		return is;
	}

    p.x = x1;
    p.y = y1;
    return is;
}

//ostream
ostream& operator<<(ostream& os, Point& p)
{
    return os << '(' << p.x << ',' << p.y << ')' << endl;
}


void fill_from_file(vector<Point>& points, string& name)
{
    ifstream ist {name};
    if (!ist) error("Can't open input file ", name);
    for (Point p; ist >> p;)
        points.push_back(p);
}

int main()
try {
//2 
 	vector<Point> original_points;  
	Point p;
    cout << "Please enter 7 (x,y) points:\n";
   
    while (original_points.size() < 7) {
        cin >> p;
        original_points.push_back(p);
        if(original_points.size()==7) cout << "\nOriginal points:\n";
    } 

//3
    for (Point p : original_points){
        cout << p;
	}
  
//4
    string oname = "mydata.txt";
    ofstream ost { oname };
    if (!ost) error("Can't open output file ", oname);

    for (Point p : original_points)
        ost << p;
    ost.close();

//5
    vector<Point> processed_points;
    fill_from_file(processed_points, oname);
//6
    cout << "\nProcessed points:\n";
    for (Point p : processed_points){
    	cout << p;
    }
//7

    if (original_points.size() != processed_points.size())
        cout << "Something's wrong! " << endl;

} catch (exception& e) {
	cout<<e.what()<<endl;
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	return 2;
}