// swap the last two digit of given number
#include<stdio.h>
void main ()
{
int num,r,r1;
printf("Enter the number=\n");
scanf("%d",&num);
printf("Before the swap the number is=%d\n",num);
r=num%10;
num=num/10;
r1=num%10;
num=num/10;
num=num*10+r;
num=num*10+r1;
printf("After the swap number is=%d\n",num);


}
