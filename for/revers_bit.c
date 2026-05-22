// To revers the bit of given number
#include<stdio.h>
void main()
{
	int pos,num,i,j,m,n,num1;
	printf("Enter the number\n");
	scanf("%d",&num);
// Method-1
	for(i=0,j=31;i<j;i++,j--)
	{

		m=num>>pos&i;
		n=num>>pos&j;
		if (m!=n)

			num=num^1<<i;
		num=num^1<<j;  
         } 


/*
// Method-2
for(i=0,j=31;num1=0;j<31,i++,j--)
{
m=num>>i&1;
if(m)
num1=num|1<<j;
}
num=num1;


	
	for(pos=31;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\n");
	printf("num=%d\n",num);  */

}


