#include <iostream>
using namespace std;

int main()
{
	int a = 42;
	do {
		cout << a << endl;
	} 	while (a > 0);
}
/*THE DO...WHILE LOOP
As with other loops, if the condition in the loop never evaluates to "false", the loop will run forever.
This will print 42 to the screen "forever".

Always test your loops, so you know that they operate in the manner you expect.*/
