#include<stdio.h>
void main ()
{

unsigned int num, num1,num2,pos;
printf("Enter the number \n");
scanf("%d",&num);
printf("Enter the pos\n");
scanf("%d",&pos);
num1=num<<(32-pos);
num1=num1>>(32-pos);
num2=num>>(pos+1);
num2=num2<<pos;
num=num1|num2;
printf("num=%d\n",num);


}
