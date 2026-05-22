#include<stdio.h>
void main ()
{
	int n1,n2,c=0,num,r,temp,f,sum;
	printf("Enter the n1 and n2\n");
	scanf("%d%d",&n1,&n2);

	for(n1;n1<=n2;n1++)
	{

		sum=0;
		num=n1;
		while(num>0)
		{
			r=num%10;
			for(f=1;r>=1;r--)
			{
				f=f*r;

			}
			sum=sum+f;
			num=num/10;


		}
		if(sum==n1)
		{
			printf("%d\n",n1);
			c++;

		}



	}


	printf("Numbers of strong numbers in given range =%d\n",c);
}
