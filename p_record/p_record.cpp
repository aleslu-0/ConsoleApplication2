#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Inputs 
    string name;
    cout << "Enter name (string)" << endl;
    getline(cin, name);

    int age;
    cout << "Enter age (int)" << endl;
    cin >> age;

    char gender;
    cout << "Enter gender (char) m or f" << endl;
    cin >> gender;
    cin.ignore(1, '\n');

    string address;
    cout << "Enter address (string)" << endl;
    getline(cin, address);

    bool married;
    cout << "Enter married (bool), 0 as false and 1 as true" << endl;
    cin >> married;
    cin.ignore(1, '\n');

    float height;
    cout << "Enter height in meters (float)" << endl;
    cin >> height;

    //Printouts
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;
    cout << "Address: " << address << endl;
    cout << "Married: "  << boolalpha << married << endl;
    cout << "Height: " << height << " meters";

    return 0;
}
