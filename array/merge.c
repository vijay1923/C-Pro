#include<stdio.h>
void merge(int *,int *,int *,int ,int ,int );
void main ()
{
	int a[3],b[3];
	int i,j,k;
	int l=sizeof(a)/sizeof(a[0]);
	int l1=sizeof(b)/sizeof(b[0]);
	int c[l+l1];
	int l2=sizeof(c)/sizeof(c[0]);

	for(i=0;i<l;i++)
	scanf("%d",&a[i]);
	for(j=0;j<l1;j++)
	scanf("%d",&b[j]);

	merge(a,b,c,l,l1,l2);
}
void merge(int *a,int *b,int *c,int l,int l1,int l2)
{
	int i,j,k;
	for(i=0,j=0,k=0;i<l2;i++,j++)
	{
		if(i<l)
		c[k++]=a[i];
		if(j<l1)
		c[k++]=b[j];
	}
	for(k=0;k<l2;k++)
	printf("%d ",c[k]);

}
