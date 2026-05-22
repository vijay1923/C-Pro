#include<stdio.h>
void main ()
{
	int i,j,k,a=1;
	for(i=6;i>=1;i--)
	{
		for(j=6-1;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			if(j%2==0)
			printf("%d",a);
		}
		printf("\n");
	}

}
