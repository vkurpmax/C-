#include <iostream>
using namespace std;

int main()
{
	int num = 1;
	int number;
	int total = 0;

	while (num <= 5)
	{
		cin >> number;
		total += number;
		num++;
	}
	cout << total << endl;
}
/*USING A WHILE LOOP

Now let's modify our code to calculate the sum of the numbers the user has entered.

The code above adds the number entered by the user to the "total" variable with each loop iteration.
Once the loop stops executing, the value of "total" is printed.
This value is the sum of all of the numbers the user entered.*/
