#include<stdio.h>
void merg_fun(int *,int *,int *,int ,int ,int );
void main ()
{
	int j,i,a[3]={1,2,3},b[3]={4,5,6};
	int ele=sizeof(a)/sizeof(a[0]);
	int ele1=sizeof(b)/sizeof(b[0]);
	int c[ele+ele1];
	int ele2=sizeof(c)/sizeof(c[0]);

	merg_fun(a,b,c,ele,ele1,ele2);

}
void merg_fun(int *a,int *b,int *c,int ele,int ele1,int ele2)
{
	int i,j,k,l;

	for(i=0;i<ele;i++)
		c[i]=a[i];

	for(j=0;j<ele1;j++)
		c[i+j]=b[j];


	for(k=0;k<ele2;k++)
		printf("%d ",c[k]);
	printf("\n");




}
