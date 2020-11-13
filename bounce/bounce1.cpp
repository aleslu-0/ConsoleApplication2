#include <iostream>
using namespace std;

void bouncef(int x) {
	//Print x and bounce while x is 0 or above
	if (x >= 0) {
		cout << x << endl;
		bouncef(x - 1);
		if (x > 0) {
			cout << x << endl;
		}
	}
}

int main()
{
	int x;
	cout << "Enter integer." << endl;
	//Input
	cin >> x;
	if (x < 0) {
		cout << "Value must be 0 or higher.";
	}
	else {
		bouncef(x);
	}
	
	return 0;
}

