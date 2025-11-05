#include <stdio.h>

// Given three points, (x1, y1), (x2, y2), and (x3, y3), write a program to check if all three points fall on one straight line.
// You need to print the output on the console in the following manner: Collinear or Non Collinear

void isCollinear(int  x1,int y1,int x2,int y2,int x3,int y3){
  float angle1, angle2;
  
  if(x1 == x2 && x2 == x3)
    puts("Collinear");
  else if(y1 == y2 && y2 == y3 ){
    puts("Collinear");
    return;
  }
  
  angle1 = (float)(y2 - y1) / (float)(x2 - x1);
  angle2 = (float)(y3 - y2) / (float)(x3 - x2);
  
  if(angle1 == angle2)
    puts("Collinear");
  else{
    puts("Non Collinear");
  }
  

}
