#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;

    //Return false if not prime
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}


int main()
{
    cout << "Test if integer is a prime number: \n";
    //Input
    int x;
    cin >> x;
    //Function call
    bool result = isPrime(x);
    cout << boolalpha << result;
    return 0;
}

