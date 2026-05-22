#include<stdio.h>
void main()
{
int i,j,r,r2,n1,n2,num=0,t,temp,temp1;
printf("Enter the n1 and n2\n");
scanf("%d%d",&n1,&n2);
temp=n2;

for(n2;n2>0;n2=n2/10)
{
	r=n2%10;
}

for(i=0;n1;n1=n1/10,i++);

for(temp=n1;n1;n1=n1/10)
{
	r2=temp%10;
	num=num*10+r2;
}
printf("%d\n",num);
}
