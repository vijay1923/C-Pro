#include<stdio.h>
void main ()
{
	int ele,i,t,j,a[5],c,c1;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter a array\n");

	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0,c=0,c1=0;i<ele;i++)
	{
		if(a[i]%2==0)
			c++;
		else
			c1++;

	}

printf("even no of count=%d\n",c);
printf("odd no of count=%d\n",c1);
}
