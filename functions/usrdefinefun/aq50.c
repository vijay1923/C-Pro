// to delete strong number in the array
#include<stdio.h>
void strong_del(int *,int *);
void main()
{
	int a[5];
	int i,ele;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
	scanf("%d",&a[i]);

	strong_del(a,&ele);

	for(i=0;i<ele;i++)
	printf("%d ",a[i]);
	printf("\n");

}
void strong_del(int *a,int *ele)
{
	int i,j,sum=0,num,p,r;
	for(i=0;i<*ele;i++)
	{      sum=0;
		num=a[i];
		while(num>0)
		{
			r=num%10;
			for(p=1;r;r--)
			{
				p=p*r;
			}
			sum=sum+p;
			num=num/10;

		}
		if(sum==a[i])
		{
			for(j=i;j<*ele;j++)
			{
				a[j]=a[j+1];
			}
			(*ele)--;
			i--;
		}


	}

}
