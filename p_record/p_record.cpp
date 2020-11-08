#include <iostream>
using namespace std;


int main()
{
    string name;
    cout << "Enter name (string)" << endl;
    cin >> name;

    int age;
    cout << "Enter age (int)" << endl;
    cin >> age;

    char gender;
    cout << "Enter gender (char)" << endl;
    cin >> gender;

    string address;
    cout << "Enter address (string)" << endl;
    cin >> address;

    bool married;
    cout << "Enter married (bool)" << endl;
    cin >> married;

    double height;
    cout << "Enter height (double)" << endl;
    cin >> height;

    cout << name << age << gender << address << married << height;
}
