#include<stdio.h>
void main ()
{
	int ele,i,a[5],L,SL;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	if(a[0]>a[1])

	{
		L=a[0];
		SL=a[1];
	}
	else 
	{		
		L=a[1];
		SL=a[0];
	}
	for(i=2;i<ele;i++)
	{
		if(a[i]>L)
		{
			L=a[i];
			SL=L;
		}
		else if(a[i]>SL && a[i]!=L)
		{
			SL=a[i];

		} 

	}

	printf("%d %d\n",L,SL);
}
