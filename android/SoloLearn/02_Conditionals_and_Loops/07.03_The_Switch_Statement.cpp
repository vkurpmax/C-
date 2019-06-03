#include <iostream>
using namespace std;

int main()
{
	int age = 42;
	switch (age) {
	case 16:
		cout << "Too young";
		break;
	case 42:
		cout << "Adult";
		break;
	case 70:
		cout << "Senior";
		break;
	}
}
/*THE SWITCH STATEMENT
The "Switch" statement tests a variable against a list of values, which are called "cases",
to determine whether it is equal to any of them.

Switch evaluates the expression to determine whether it's equal to the value in the case statement.
If a match if found, it executes the statements in that case.

A switch can contain any number of "case" statement, which are followed by the "value" in question and a "colon".*/

/*The code above is equivalent to three "if" statements.
Notice the keyword "break"; that follows each case. That will be covered shortly.*/
