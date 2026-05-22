// reverse the array
#include<stdio.h>
void array_rev(int *,int *);
void main()
{
	int a[5];
	int i,ele;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	array_rev(a,a+(ele-1));
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
void array_rev(int *p,int *q)
{
	int t;
	if(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		array_rev(p+1,q-1);

	}


}
