#include<stdio.h>
void main()
{
int a[5]={300,400,500,600,700};
short int *p[3]={a+4,a+3,a+2};
char *q[3]={p+2,p+1,p};
char ***r=q+1;
//--*--*r;	// 0 in 600
//**r=(*--*r)-4;	// 88 in 600
**r=(*--*r)-3;	// 2 in 600
printf("%d\n",***r); 
}
