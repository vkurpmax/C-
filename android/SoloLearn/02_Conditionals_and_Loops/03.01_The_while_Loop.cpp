#include <iostream>
using namespace std;

int main()
{
	int num = 1;
	while (num < 6)
	{
		cout << "Number: " << num << endl;
		num = num + 1;
	}

	/* Outputs
	Number: 1
	Number: 2
	Number: 3
	Number: 4
	Number: 5
	*/
}
// The while loop
// The loop's body is the block of statements within curly braces.

//The example above declares a variables equal to 1 (int num = 1).
//The while loop checks the condition (num < 6), and executes the statements in its body, which increment the value of num by one each time the loop runs.

//Afrer the 5th iteration, num becomes 6, and the condition is evaluated to false, and the loop stops running.
