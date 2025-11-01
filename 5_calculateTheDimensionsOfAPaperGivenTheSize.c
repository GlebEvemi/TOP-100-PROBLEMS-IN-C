#include <stdio.h>

//The paper of size A0 has dimensions 1189 mm x 841 mm. Each subsequent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides.

//Write a program that takes A0 paper size as a parameter and print sizes of A0, A1, A2, and A3 on the console.

void paperSizes(int a0ht , int a0wd){
  	int  a1ht = 0, a1wd = 0, a2ht = 0, a2wd =0, a3ht =0, a3wd =0;
  	a1ht = a0wd;
  	a1wd = a0ht / 2;
  	
  	a2ht = a1wd;
  	a2wd = a1ht / 2;
  	
  	a3ht = a2wd;
  	a3wd = a2ht / 2;

	printf("%d,%d,%d,%d,%d,%d,%d,%d",a0ht,a0wd,a1ht,a1wd,a2ht,a2wd,a3ht,a3wd);
}