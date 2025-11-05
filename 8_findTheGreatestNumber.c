#include <stdio.h>

// finds the greatest number from the given numbers
//1
int biggestNumber(int nums[], int length){
	int big = nums[0];
	for(int i =1; i<length; i++){
	   if(nums[i] > big)
	      big = nums[i];
	}
	
  	return big;
}


//2
//Not the good option
int biggestNumber(int i, int j, int k, int l, int m){
  int big;

  big = i;
  if ( j > big )
    big = j;
  if ( k > big )
    big = k;
  if ( l > big )
    big = l;
  if ( m > big )
    big = m;

  return big;
}