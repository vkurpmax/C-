#include <iostream>
using namespace std;

int main()
{
	int a = 42;
	do {
		cout << a << endl;
		a++;
	} 	while (a < 5);
	// Outputs 42
}
/*WHILE VS. DO...WHILE
If the condition evaluated to "false", the statements in the "do" would still run once:

The "do...while" loop executed the statements at least once, and then tests the condition.
The "while" loop executes the statement after testing condition.*/
