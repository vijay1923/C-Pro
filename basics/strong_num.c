#include<stdio.h>
void main ()
{
	int  i,n1,n2,r,sum,c=0,f,temp;
	printf("Enter the n1 and n2\n");
	scanf("%d%d",&n1,&n2);

	for(n1;n1<=n2;n1++)
	{
		sum=0;
		temp=n1;
		while(temp>0)
		{
			r=temp%10;
			for(f=1;r>=1;r--)
			{
				f=f*r;

			}
			sum=sum+f;
			temp=temp/10;
		}
		
		if(sum==n1)
		{
			c++;
			printf("%d\n",n1);
		}

	}	
	printf("c=%d\n",c);


}				
