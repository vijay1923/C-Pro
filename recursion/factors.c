#include<stdio.h>
int factor(int n,int i)
{
	if(i<=n)
	if(n%i==0)
	return i;
	return factor(n,i++);
}
void main()
{
	int num,p,i=1;
	scanf("%d",&num);
	p=factor(num,i);
	printf("%d ",p);
}
