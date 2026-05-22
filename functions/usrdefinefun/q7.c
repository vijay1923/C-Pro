#include<stdio.h>
void insert(int *,int );
void main()
{
	int a[5],i,j,k,p,ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the array\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	insert(a,ele);
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

}
void insert(int *a,int ele)
{
	int i,n=99,b[5];
	for(i=ele;i>0;i--)
		a[i]=a[i-1];

	for(i=0;i<ele;i++)
	{
		if(i==2)
			a[i]==n;
	}

}
