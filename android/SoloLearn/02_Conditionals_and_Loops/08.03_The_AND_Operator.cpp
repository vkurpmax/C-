#include <iostream>
using namespace std;

int main()
{
	int age = 20;
	int grade = 80;

	if (age > 16 && age < 60 && grade > 50) {
		cout << "Accepted" << endl;
	}
}
/*THE AND OPERATOR
within a single if statement, logical operators can be used to combine "multiple" conditions.

The entire expression evaluates to "true" only if all of the conditions are "true".*/
