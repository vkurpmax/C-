#include <iostream>
using namespace std;

int main()
{
	int num = 1;
	while (num < 6)
	{
		cout << "Number: " << num << endl;
		num = num + 3;
	}
	/* Outputs
	Number: 1
	Number: 4
	*/
}
/* The While Loop

The increment value can be changed.
If changed, the number of times the loop is run will change, as well.

Without a statement that eventually evaluates the loop condition to "false",
the loop will continue indefinitely
*/
