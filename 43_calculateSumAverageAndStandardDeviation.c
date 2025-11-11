#include <stdio.h>
#include <math.h>

// Write a function that calculates the sum, average, and standard deviation of the given numbers.
// It receives five integers along with three pointers to store the results as parameters.

void calcSASd (int n1, int n2, int n3, int n4, int n5, float *s, float *a, float *sd){
  *s = n1+n2+n3+n4+n5;
  *a = *s / 5;
  *sd = sqrt ((pow((n1 - *a ),2) + pow((n2 - *a),2) + pow((n3 - *a),2) + pow((n4 - *a),2) + pow((n5 - *a),2) )/4); 
  
}