#include<stdio.h>
void rev_fun(int *,int *,int);
void main ()
{
	int a[5],b[5];
	int i,j,k,ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the array\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	rev_fun(a,b,ele);

}
void rev_fun(int *a,int *b,int ele)
{
	int d[5],i,j,r,k,temp,rev;

	for(i=0;i<ele;i++)
	{
		for(j=a[i],rev=0;j>0;j=j/10)
		{
			r=j%10;
			rev=rev*10+r;


		}
		d[i]=rev;

	}
	for(k=0;k<ele;k++)
		printf("%d ",d[k]);
}
