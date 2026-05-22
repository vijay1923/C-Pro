#include<stdio.h>
void main()
{
int num,sl,l,a[5],i;
printf("Enter the elements\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
l=0;
for(i=0;i<5;i++)
{
if(a[i]>l)
{
sl=l;
l=a[i];
}
if(a[i]!=sl && a[i]>l)
sl=a[i];

}
printf("Sec:%d  large:%d\n",sl,l);
//for(i=0;i<5;i++)
//printf("%d ",a[i]);
}
