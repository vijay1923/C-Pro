#include<stdio.h>
void main ()
{
float f=23.5;
double d=34.5;
long double ld=234.5;

printf("sizeof ld=%ld\n",sizeof(ld));
printf("%Lf\n",ld);

printf("f=%.9f f=%g f=%e\n",f,f,f);
printf("d=%lf d=%g d=%e\n",d,d,d);


}
