#include <stdio.h>

// Write a program that takes a character as an input, and then determine using the ASCII whether the character entered is an upper case alphabet,
// a lower case alphabet, a digit, or a special symbol. Print your findings on the console.

void charType(char ch) {
  if(ch>=65 && ch<=90)
    puts("uppercase letter");
  else if(ch>=97 && ch<=122)
    puts("lowercase letter");
  else if(ch>= 48 && ch<=57)
    puts("digit");
  else if(ch>= 0 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=255)
    puts("special symbol");
  
}