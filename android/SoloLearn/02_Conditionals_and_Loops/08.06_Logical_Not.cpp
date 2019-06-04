#include <iostream>
using namespace std;

int main()
{
	int age = 10;
	if ( !(age > 16) ) {
		cout << "Your age is less than 16" << endl;
	}
	/* Outputs "Your age is less than 16"*/
}
/*LOGICAL NOT
The logical "NOT" (!) operator works with just a single operand, reversing its logical state.
Thus, if a condition is "true", the NOT operator makes it "false", and vice versa.

Be careful using this, because !false means true.*/
