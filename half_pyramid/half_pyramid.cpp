#include <iostream>
#include<stdio.h>

int main()
{
    //Only works for values 1 through 9
    printf("%s", "Enter an uppercase letter or a number 1 through 9. \n");
    char c;
    scanf_s("%c", &c, 1);
    //Check if input is digit or number
    if (isdigit(c)) {
        int c2 = c - 48;
        int n = 1;
        //Printout
        while (n <= c2) {
            for (int m = 1; m <= n; m++) {
                printf("%d", m);
            }
            printf("\n");
            n++;
        }
    }
    else {
        int c2 = (int)c;
        char s = 65;
        int n = 1;
        //Printout
        while (s <= c) {
            for (int m = 0; m < n; m++) {
                printf("%c", s);
            }
            n++;
            s++;
            printf("\n");
        }
    }
    return 0;
}
