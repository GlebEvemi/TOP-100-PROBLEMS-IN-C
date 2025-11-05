#include <stdio.h>

// Write a program that takes a year as an input and decides and then prints whether it is a leap year or not.

void yearType(int yr) {
    if ((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0))
        printf("Leap year");
    else{
        printf("Not a Leap year");
    }
        
    
}