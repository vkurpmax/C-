#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	do {
		cout << a << endl;
		a++;
	} while (a < 5);
}
/*THE DO... WHILE LOOP

Unlike "for" and "while" loops, which test the loop condition at the top of the loop,
the "do...while" loop checks its condition at the bottom of the loop.
A "do...while" loop is similar to a "while" loop.
The one difference is that the "do...while" loop is guaranteed to execute "at least one time".

For example, you can take input from the user, then check it. If the input is wrong, you can take it again.*/

/*Don't forget the "semicolon" after the while statement.*/
