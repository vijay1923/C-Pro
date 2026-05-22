// to delete 1st degit in the every element in array

#include<stdio.h>
void del_fun(int *,int );
void  main()
{
int a[5],b[5];
int i,j,k,ele;
ele=sizeof(a)/sizeof(a[0]);
printf("Enter the array\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);


del_fun(a,ele);

}
void del_fun(int *a,int ele)
{
	int i,j,k,t;
	for(i=0;i<ele;i++)
	{
		if(a[i]>=10)
		{
			for(t=10;a[i]/t>=10;t=t*10);
			a[i]=a[i]%t;


		}

	}
	for(i=0;i<ele;i++)
	printf("%d ",a[i]);
	printf("\n");



}

