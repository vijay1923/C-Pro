#include<stdio.h>
union st 
{
int r;
char ch;
char s;
float f;
};

void main()
{
union st v;

//v.f=23.5;
//v.r=100;
v.r=10000;

//v.ch='a';
printf("%d\n",v.r);
printf("%d\n",*(&v.ch+2));
printf("%f\n",v.f);
printf("%d\n",(short int)v.s);
}
