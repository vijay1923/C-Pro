// to find factorial of given number

#include<stdio.h>
int fact(int );
void main()
{
	int num,r;
	printf("Enter the number\n");
	scanf("%d",&num);
	r=fact(num);
	printf("r=%d\n",r);

}
int fact(int n)
{
	int f=1;
	if(n)
	return n*fact(n-1);
	else
	return 1;
}
