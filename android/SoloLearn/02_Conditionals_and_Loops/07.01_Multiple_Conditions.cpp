#include <iostream>
using namespace std;

int main()
{
	int age = 42;
	if (age == 16) {
		cout << "Too young";
	}
	if (age == 42) {
		cout << "Adult";
	}
	if (age == 70) {
		cout << "Senior";
	}
}
/*MULTIPLE CONDITIONS
Sometimes there is a need to test a variable for equality against multiple values.
That can be achieveed using multiple if statements.

The "switch" statement is a more elegant solution in this scenario.*/
