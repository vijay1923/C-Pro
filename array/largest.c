
// to delete largest element from array

#include<stdio.h>
void main ()
{
	int a[5],i,l,ele,L,k,in,t,j,index=0;
	ele=sizeof(a)/sizeof(a[0]);
	printf("ele=%d\n",ele);
	printf("Enter teh array\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0,l=0;i<ele;i++)
	{
		if(a[i]>l)
		{
		l=a[i];
		index=i;
		}
                      
	}
	printf("larg->%d index->%d\n",l,index);	// largest element

	for(k=0,L=l;k<ele;k++)
	{
		if(a[k]==L)
		{
			for(j=k;j<ele;j++)
			a[j]=a[j+1];
		}


	}

	ele--;
/*	for(i=index;i<ele;i++)
	{
	a[i]=a[i+1];
	}
*/
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
