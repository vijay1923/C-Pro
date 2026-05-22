#include<stdio.h>
void armstro_del(int *,int *);
void main()
{
	int a[5];
	int i,ele;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	armstro_del(a,&ele);

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

}
void armstro_del(int *a,int *ele)
{
	int i,sum,c,p,t,num,d,j,r;

	for(i=0;i<*ele;i++)
	{
		for(t=a[i],c=0;t;t=t/10,c++);

		for(num=a[i],sum=0;num;num=num/10)
		{
			r=num%10;
			for(d=c,p=1;d;d--)
			{
				p=p*r;

			}
			sum=sum+p;

		}
		if(sum==a[i])
		{
			for(j=i;j<*ele;j++)
			{
				a[j]=a[j+1];
			}
			i--;
			(*ele)--;
		}

	}
}
