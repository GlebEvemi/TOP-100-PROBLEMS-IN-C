#include <stdio.h>

//Consider a currency system in which there are bills of seven denominations: $1, $2, $5, $10, $50, and $100.

//Write a program that takes $N amount as a parameter and computes the minimum number of bills required, which sum up to $N.

void totalBill(int amt) {
	int  nohun=0, nofifty=0, noten=0, nofive=0, notwo=0, noone=0, totalnotes=0;
  	//475
  	nohun = amt / 100;
  	amt = amt % 100;
  	nofifty = amt / 50;
  	amt = amt % 50;
  	noten = amt /10;
  	amt = amt % 10;
  	nofive = amt / 5;
  	amt = amt % 5;
  	notwo = amt /2;
  	amt = amt % 2;
  	noone = amt / 1;
  	
  	totalnotes = nohun + nofifty + noten + nofive + notwo + noone;
	printf("%d,%d,%d,%d,%d,%d,%d",nohun,nofifty,noten,nofive,notwo,noone,totalnotes);
	
}