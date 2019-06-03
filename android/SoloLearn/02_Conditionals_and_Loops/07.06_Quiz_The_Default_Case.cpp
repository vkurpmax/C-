#include <iostream>
using namespace std;

int main()
{
	int age = 42;
	switch (age) {
	case 16:
		cout << "Too yong" << endl;
	case 42:
		cout << "Adult" << endl;
	case 70:
		cout << "Senior" << endl;
	default:
		cout << "the default case" << endl;
	}
	/* Outputs
	Adult
	Senior
	This is the default case*/
}
/*THE BREAK STATEMENT
The "break" statement's role is to terminate the switch statement.
In instances in which the variable is equal to a case,
the statements that come after the case continue to execute until they encounter a "break" statement.
In other words, leaving out a "break" statement results in the execution of all of the statements in the following cases,
even those that don't match the expression.

As you can see, the program executed the matching case statement, printing "Adult" to the screen.
With no specified "break" statement, the statements continued to run after the matching case.
Thus, all the other case statements printed.
This type of behavior is called "fall-through".

As the switch statement's final case, the "default" case requires no "break" statement.
The "break" statement can also be used to break out of a loop.*/
