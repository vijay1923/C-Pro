#include<stdio.h>
void del_odd_pal(int *,int *);
void main()
{
int a[5],i,ele;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

del_odd_pal(a,&ele);

for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
void del_odd_pal(int *a,int *ele)
{
	int i,j,rev,num,r;
	for(i=0;i<*ele;i++)
	{
		num=a[i];
		for(num,rev=0;num;num=num/10)
		{
			r=num%10;
			rev=rev*10+r;

		}
		if(rev==a[i] && rev%2!=0)
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
