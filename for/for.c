// to sum and mul of digits in given number
#include<stdio.h>
void main ()
{
	int num,sum=0,r,mul=1;


	printf("Enter the number\n");
	scanf("%d",&num);

	for(   ; num ; num=num/10 )
	{	r=num%10;
		sum=sum+r;
		mul=mul*r;

	}
	printf("sum=%d\n",sum);

	printf("mul=%d\n",mul);

}


