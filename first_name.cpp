#include "std_lib_facilities.h"

int main()
{
	cout << "Write your first name here:\n";

	string first_name;

	cin >> first_name;

	cout << "Hello, " << first_name << "\n";

	cout << "How are you? I miss you.\n";

	cout << "Write your friend's name here:\n";

	string friends_name;
	
	cin >> friends_name;

	cout << "Have you seen " << friends_name << " lately?\n";

	char friends_gender = 0;

	cin >> friends_gender;

	if (friends_gender == 'm')
		cout << "If you see him, ask him to call me please.\n";
	else
		cout << "If you see her, ask her to call me please.\n";
	
	int age = 0;

	cin >> age;

	if (age <= 0 || age > 110) simple_error("You're kidding.");

	cout << "I heard you just had your birthday, and you are " << age << " years old.\n";

	if (age < 12)
		cout << "Next year, you'll be " << age+1 << ".\n";
	if (age== 17)
		cout << "Next year, you will be able to vote!\n";
	if (age > 70)
		cout << "I hope you are enjoying retirement.\n";

	cout << "\nYours sincerely, \n \nBeatrix \n";

	return 0;
}


