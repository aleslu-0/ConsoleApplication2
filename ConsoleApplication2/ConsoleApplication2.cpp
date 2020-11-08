#include <iostream>
using namespace std;

int main()
{
    string t = "Hello world!\n";
    cout << t;

    int x;
    cout << "Enter number (for loop)" << endl;
    cin >> x;
    for (int k = 0; k < x; k++) {
        cout << "Hello world!" << endl;
    }

    cout << "Enter number (while loop)" << endl;
    cin >> x;
    int y = 0;
    while (y < x) {
        cout << "Hello world!" << endl;
        y++;
    }
    int z = 0;

    cout << "Enter number (do...while loop)" << endl;
    cin >> x;
    do {
        cout << "Hello world!" << endl;
        z++;
    } 
    while (z < x);

    return 0;
}
