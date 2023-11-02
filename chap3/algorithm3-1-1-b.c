/**************
  Octal
***************/
#include <stdio.h>

void try();

int main(void){

  //variable
  int width; 			//fixed-width
  width =3;

  int carry[width];
  int sum[width];
  int x[width];
  int y[width];

  //Set Value
  x[0]=7;y[0]=1;
  x[1]=0;y[1]=0;
  x[2]=0;y[2]=0;
  carry[0]=0;
  carry[1]=0;
  carry[2]=0;

  printf("Addition in Octal\n");
  printf("Set Value x: %i%i%i\n",x[2], x[1], x[0]);
  printf("Set Value y: %i%i%i\n",y[2], y[1], y[0]);

  //header;
  printf("i: x+y+c=s \n");
  printf("----------\n");
  
  //Loop
  for (int i = 0; i<width; i++){
    sum[i]=(x[i]+y[i]+carry[i])%8;
    carry[i+1]=(x[i]+y[i]+carry[i])/8;

    printf("%d: %d+%d+%d=%d \n", i,x[i],y[i],carry[i], sum[i]);
  }

}
