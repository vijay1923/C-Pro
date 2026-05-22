#include<stdio.h>
void main ()
{

int i=10,j=20,k=30,l=40,m=50,r;
printf("Before : i=%d j=%d k=%d l=%d m=%d\n",i,j,k,l,m);

 r=i&&(j=200)||(k=300)&&(l=400)||(m=500);

//   r=i||(j=200)&&(k=300)||(l=400)&&(m=500);

 printf("After  : i=%d j=%d k=%d l=%d m=%d r=%d \n",i,j,k,l,m,r);

  // printf("After  : i=%d j=%d k=%d l=%d m=%d r=%d \n",i,j,k,l,m,r);
 
 

}
