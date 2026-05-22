#include<stdio.h>
void main ()
{
	int num,n1,n2,r,sum,c=0,temp,d,s=0,p,r1;
	printf("Enter the n1 and n2\n");
	scanf("%d%d",&n1,&n2);

	for(n1;n1<n2;n1++)
	{
		for(num=n1,c=0;num;num=num/10,c++);
		for(temp=n1,sum=0;temp;temp=temp/10)
		{
			r1=temp%10;
			for(d=c,p=1;d;d--)
			{
				p=p*r1;
			}
			sum=sum+p;
		}
		if(sum==n1)
		{
			printf("%d\n",n1);
			s++;
		}



	}
	printf("number of strong numbers=%d\n",s);

}
