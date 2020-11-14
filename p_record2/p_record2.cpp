#include <iostream>
#include<stdio.h>

int main()
{
    //Inputs
    char name[80];
    printf("%s", "Enter name (string) \n");
    scanf_s(" %[^\n]79s", name, 80);

    int age;
    printf("%s", "Enter age (int) \n");
    scanf_s(" %i", &age);

    char gender;
    printf("%s", "Enter gender (char) m or f \n");
    scanf_s(" %c", &gender, 1);

    char address[80];
    printf("%s", "Enter address (string) \n");
    scanf_s(" %[^\n]79s", address, 80);

    int married;
    printf("%s", "Enter married (bool), 0 as false and 1 as true \n");
    scanf_s(" %i", &married);
    bool am_married;
    if (married == 0) {
        am_married = false;
    }
    else {
        am_married = true;
    }
    
    float height;
    printf("%s", "Enter height in meters (float) \n");
    scanf_s(" %f", &height);

    //Printouts
    printf("%s%s\n", "Name: ", name);
    printf("%s%i\n", "Age: ",  age);
    printf("%s%c\n", "Gender: ", gender);
    printf("%s%s\n", "Address: ", address);
    printf("%s%s\n", "Married: ", am_married ? "true" : "false");
    printf("%s%f%s", "Height: ", height, " meters");
  
    return 0;
}
