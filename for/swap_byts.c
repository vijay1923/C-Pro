// swapping the byts (1st byte is swapped with 4th byte)
#include<stdio.h>
void main ()
{
	int num,i,n,m,j,pos;
	printf("Enter the number\n");
	scanf("%d",&num);

	for(i=0,j=24;j<32;i++,j++)
	{
		m=num>>i&1;
		n=num>>j&1;
		if (m!=n)
		{
			num=num^1<<i;
			num=num^1<<j;
		}
	}
	for(pos=31;pos>=0;pos--)
		printf("%d",num>>pos&1);
		printf("\n");
	printf("num=%d\n",num);


}
