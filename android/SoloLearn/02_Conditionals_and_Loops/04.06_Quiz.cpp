#include <iostream>
using namespace std;

int main()
{
	int x = 1;
	int number;
	int total = 0;
	while (x <= 5)
	{
		cin >> number;
		total = total + number;
		x++;
	}
	cout << "Sum: " << total << endl;
}
/*Fill in the blanks to enter five numbers from the user and print their sum.
Store the sum in the variable named total.*/
