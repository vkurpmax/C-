#include <iostream>
using namespace std;

int main()
{
	for (int a = 0; a < 10; a++)
	{
		cout << a << endl;
	}
	/* Outputs
	0
	1
	2
	3
	4
	5
	6
	7
	8
	9
	*/
}
/*THE FOR LOOP
A "For" loop is a repetition control structure that allows you to efficiently write a loop that execute a specific number of times.

The "init" steps is executed first, and does not repeat.
Next, the "condition" is evaluated, and the body of the loop is executed if the condition is true.
In the next step, the "increment" statement updates the loop control variable.
Then, the loop's body repeats itself, only stopping when the condition becomes "false".

The "init" and "increment" statements may be left out, if not needed, but remember that the "semicolons" are mandatory.*/


/*THE FOR LOOP
In the "init" steps, we declared a variable "a" and set it to equal 0.
a < 10 is the "condition".
After each iteration, the a++ "increment" statement is executed.*/
