// to rotate array two times

#include<stdio.h>
int rotate(int *,int ,int);
void main()
{
	int a[6],i,n,ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the arrya\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
//	printf("How many times need to rotare\n");
//	scanf("%d",&n);

	rotate(a,ele,n);
	rotate(a,ele,n);

	for(i=0;i<ele;i++)
	printf("%d ",a[i]);
}
int rotate(int *a,int ele,int n)
{
	int i,j,t;
	t=a[ele-1];
	for(i=ele-1;i>=0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=t;

}
