#include<stdio.h>
void main()
{
	int n1,n2,num,temp,c,r,r1,f,s=0,d,sum,sum1;
	printf("Enter teh n1 and n2\n");
	scanf("%d%d",&n1,&n2);


	for(n1;n1<=n2;n1++)
	{

		for(temp=n1,c=0;temp;temp=temp/10)
		{
			r=temp%10;
			c++;
		}

		for(num=n1,sum=0;num;num=num/10)
		{
			r1=num%10;
			for(d=c,f=1;d;d--)
			{
				f=f*r1;
			}
			sum=sum+f;

		}
		if(sum==n1)
		{
			printf("%d\n",n1);
			s++;
			if(s%2==0)
			{ 
				sum1=sum1+s;

			}
		}

	}

	printf("number of armstrong number =%d\n",s);
	printf("sum of even numbers is =%d\n",sum1);
}
