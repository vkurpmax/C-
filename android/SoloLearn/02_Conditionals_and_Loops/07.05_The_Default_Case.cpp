#include <iostream>
using namespace std;

int main()
{
	int age = 25;
	switch (age) {
	case 16:
		cout << "Too young" << endl;
		break;
	case 42:
		cout << "Adult" << endl;
		break;
	case 70:
		cout << "Senior" << endl;
		break;
	default:
		cout << "This is the default case";
	}
	/*Outputs "This is the default case.*/
}
/*THE DEFAULT CASE
In a switch statement, the optional "default" case can be used to perform a tast when none of the cases is determined
to be true.

The "default" statement's code executes when none of the cases matches the switch expression.

The default case must appear at the end of the switch.*/
