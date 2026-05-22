// to find largest element and find on which position it is


#include<stdio.h>
void main ()
{
	int i,ele,a[5],L,ind;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements\n");
	for(i=0;i<ele;i++)

		scanf("%d",&a[i]);
	L=a[0];
	ind=0;
	for(i=0;i<ele;i++)
	{
		if(a[i]>L)
		{
			L=a[i];
			ind=i;

		}


	}

printf("Largest element is=%d on index of =%d\n",L,ind);

}
