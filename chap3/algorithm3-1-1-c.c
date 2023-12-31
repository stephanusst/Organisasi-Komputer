/**************
 Hexadecimal
**************/
#include "stdio.h"
int main(void){

  //variable
  
  int width; 			//fixed-width
  width =3;

  int carry[width];
  int sum[width];
  int x[width];
  int y[width];

  //Set Value
  x[0]=0xf;y[0]=1;
  x[1]=0;y[1]=0;
  x[2]=0;y[2]=0;
  carry[0]=0;
  carry[1]=0;
  carry[2]=0;

  printf("Addition in Hexadecimal\n");
  printf("Set Value x: %#x %#x %#x\n",x[2], x[1], x[0]);
  printf("Set Value y: %#x %#x %#x\n",y[2], y[1], y[0]);
 
  //header;
  printf("i: x+y+c=s \n");

  //Loop
  for (int i = 0; i<width; i++){
    sum[i]=(x[i]+y[i]+carry[i])%16;
    carry[i+1]=(x[i]+y[i]+carry[i])/16;

    printf("%d: %x+%x+%x=%x \n", i,x[i],y[i],carry[i], sum[i]);
  }
}
