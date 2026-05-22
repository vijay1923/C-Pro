#include<stdio.h>
void binary(int );
void main()
{
	int num;
	printf("Enter the number \n");
	scanf("%d",&num);
	binary(num);
}
void binary(int n)
{
	int a[32],i=0;
	if(n==0)
	{
		printf("0");
		return;
	}
	while(n>0)
	{
		a[i++]=n%2;
		n=n/2;
	}
	for(j=i-1;j>=0;j--)
	printf("%d",a[i]);
}
