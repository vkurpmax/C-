#include <iostream>
using namespace std;

int main()
{
	int mark = 90;

	if (mark < 50) {
		cout << "You failed." << endl;
		cout << "Sorry" << endl;
	}
	else {
		cout << "congratulations!" << endl;
		cout << "You passed." << endl;
		cout << "You are awesome!" << endl;
	}

	/* Outputs
	Congratulations!
	You passed.
	You are awesome!
	*/
}

// In all previous examples only one statement was used inside the if/else statement, but you may include as many as you want.
