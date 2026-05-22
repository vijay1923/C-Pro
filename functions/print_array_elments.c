#include<stdio.h>
void print_array (const int *p,int);
void bubble_sort(int *p,int);
void main ()
{
	int a[5]={50,20,10,40,30};
	int ele;
	ele=sizeof(a)/sizeof(a[0]);
	bubble_sort(a,ele);
	print_array(a,ele);

}
void bubble_sort(int *a,int ele)
{
	int i,j,t;
	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{

			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}

		}

	}

}
void print_array(const int *p,int ele)
{
	int i;
	for(i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");

}



