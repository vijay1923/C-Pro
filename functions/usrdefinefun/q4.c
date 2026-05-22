#include<stdio.h>
void strong_fun(int *,int);
void armstrong_fun(int *,int);
void main()
{
int a[5],b[50];
int i,k,ele;
ele=sizeof(a)/sizeof(a[0]);
printf("Enter the array\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

strong_fun(a,ele);
armstrong_fun(a,ele);

}
void armstrong_fun(int *a,int ele)
{
	int i,t,t1,sum,d,c,c1=0,p,r;

	for(i=0;i<ele;i++)
	{
		for(t=a[i],c=0;t;t=t/10,c++);
//		printf("%d ",c);

		for(sum=0,t1=a[i];t1;t1=t1/10)
		{
			r=t1%10;
			for(p=1,d=c;d;d--)
			{

				p=p*r;

			}
			sum=sum+p;

		}
		if(sum==a[i])
			c1++;

	}
printf("Number of armstrong %d\n",c1);

}
void strong_fun(int *a,int ele)
{
	int i,sum,num,r,c=0,t,t1,p;
	for(i=0;i<ele;i++)
	{
		num=a[i];
		sum=0;
		while(num>0)
		{
			r=num%10;
			for(p=1;r>=1;r--)
			{
				p=p*r;
			}
			sum=sum+p;
			num=num/10;
		}
		if(sum==a[i])
			c++;

	}


	printf("Strong number %d\n",c);

}
