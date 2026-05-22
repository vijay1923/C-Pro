#include<stdio.h>
void main ()
{

// to print 123 as 123
/*
int num,r,i;
printf("enter the number\n");
scanf("%d",&num);
 for(i=100;i>=1;i=i/10)
	{
	r=(num/i)%10;
	printf("%d",r);
	}

*/

// to print mul of 5,6,and 7 in given 1256734 number
/*
int num,i,mul=1;
printf("Enter thr num\n");
scanf("%d",&num);
for(i=5;i<=7;i++)
{
mul=mul*i;
}
printf("%d\n",mul);
*/

//to mul of 1st and last digit of given 1234 number
int num,r,sum=0;
printf("Enter the number\n");
scanf("%d",&num);
for( ;num;num=num/1000)
{
r=num%10;
sum=sum+r;
}
printf("sum of 1 and 4 is:%d\n",sum);
	
}
