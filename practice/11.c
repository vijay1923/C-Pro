#include<stdio.h>
void main ()
{
	int i,j,k,n,a,x,y;
	printf("Enter the n value\n");
	scanf("%d",&n);
	for(i=0,x=1;i<n;i++,x++)
	{
		for(k=0;k<=i;k++)
		{
			if(k%2==0)
			printf("%d ",x);
		
			
			else
				printf("* ");

		}
		printf("\n");
	}



	for(j=0,y=4;j<n;j++,y--)
	{
		for(k=0;k<=n-j;k++)
		{
			if(k%2!=0)
				printf("* ");
			else
				printf("%d ",y);

		}
		printf("\n");
	}


}
