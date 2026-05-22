#include<stdio.h>
int sum_half_ele(int *,int );
void main()
{
	int a[6];
	int i,ele,sum;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	ele=ele/2;
	printf("sum=%d\n",sum_half_ele(a,ele));

}
int sum_half_ele(int *p,int ele)
{
	static int sum=0;
	if(ele>0)
	{
	return sum=sum+(*p);
	return sum_half_ele(p+1,ele-1);
	}
	else
	return sum;

}
