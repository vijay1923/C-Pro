#include<stdio.h>
void main ()
{
	int num,r,c=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	for ( ; num ; num=num/10 )
	{
		r=num%10;
		printf("%d\n",r);
		c++;
	}
	printf("count=%d\n",c);	

}
