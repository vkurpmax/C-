#include <iostream>
using namespace std;

int main()
{
	for (int a = 10; a >= 0; a -= 3)
	{
		cout << a << endl;
	}
	/* Outputs
	10
	7
	4
	1
	*/
}
/*When using the for loop, don't forget the "semicolon" after the "init" and "condition" statements.*/
