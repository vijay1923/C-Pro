// largest word delete from the string 
#include<stdio.h>
int count_del(int *,int *);
void main()
{
	int a[5],i,j,k,ele,c;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the array\n");
	for(i=0;i<ele;i++)
	scanf("%d",&a[i]);

	count_del(a,&ele);
	for(i=0;i<ele;i++)
	printf("%d ",a[i]);
//	printf("\n ele=%d\n",ele);
}
int count_del(int *a,int *ele)
{
	int i,j,k,c=0;
	for(i=0;i<(*ele);i++)
	{
		if(a[i]<0)
		{
			c++;
			for(j=i;j<(*ele);j++)
			a[j]=a[j+1];
			i--;
			(*ele)--;

		}

	}
	printf("count =%d\n",c);
}
