#include <stdio.h>

// Write a program to generate all Pythagorean triple with side lengths less than or equal to 20.
void pythagoreanTriple(){
  for(int a = 1; a <= 20; a++){
    for(int b = 1; b <= 20; b++){
      for(int c = 1; c <= 20; c++){
        if(a*a + b*b == c*c)
          printf("%d %d %d \n", a,b,c);
      }
    }
  }
}