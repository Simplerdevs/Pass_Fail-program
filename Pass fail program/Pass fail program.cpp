
								/* A Program to Ask the user to enter "Mark" then Print 'pass' if mark >= 50 otherwise Print 'fail'  */

#include <iostream>
using namespace std;
					
int main()

{
	// input

	int mark;
	cout << "Please enter your mark ! " << endl;
	cin >> mark;

	// condition and output

	if (mark >= 50) {

		cout << "Pass" << endl;

	}

	else {

		cout << "Fail" << endl;

	}

	return 0;

	// created by @ilyes_trabelsi
}