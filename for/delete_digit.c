#include<stdio.h>
void main()
{

int num,r;
printf("Enter the number\n");
scanf("%d",&num);
for( ;num;num=num/10)
{
r=num%10;
if (r%3!=0)
printf("%d",r);
}

}

