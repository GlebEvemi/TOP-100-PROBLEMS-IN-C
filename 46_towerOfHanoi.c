#include <stdio.h>

// There are three pegs labeled A, B, and C. Four disks are placed on peg A.
//Disks decrease in size with the bottom-most disk being the largest and the topmost disk being the smallest.
//Write a program to print out the sequence in which the disks should be moved such that all disks
//on peg A are finally transferred to peg C.

void move(int n, char sp, char ap, char ep){
	if(n>1)
	   move(n-1, sp, ep, ap);
	printf("Moving upper disk from %c to %c\n", sp, ep);
	if(n>1)
	    move(n-1, ap, sp, ep );
} 

int main() {
  	int n = 4;
	move (n, 'A', 'B', 'C' );
	return 0;
}