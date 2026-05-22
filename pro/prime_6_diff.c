#include<stdio.h>
int prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			break;
	}
	if(n==i)
	return 1;
	else
		return 0;
}
void main()
{
	int n1,n2,i,n,j,in;
	printf("Enter the range n1 n2\n");
	scanf("%d%d",&n1,&n2);
	for(n1;n1<=n2;n1++)
	{
		if(prime(n1))
		{
			in=n1;
			n=n1-6;
			j=n1+6;
			if(prime(n))
			{
				printf("%d ",n);
			//	printf("%d ",n1);
			}
			 if(prime(j))
			{
				printf("%d ",j);
			//	printf("%d ",n1);
			}
		}
	}
}

