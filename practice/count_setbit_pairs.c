// count pairs of set-bits in given number
#include<stdio.h>
void main()
{
	int num;
	scanf("%d",&num);
	int pos,c=0,n=num;
	for(pos=31;pos>=0;pos--)
	printf("%d",n>>pos&1);
	printf("\n");

	for(pos=31;pos>=0;)
	{
		if(num>>pos&1)
		{
			pos--;
			if(num>>pos&1)
			c++;
		}
else 
pos--;
	}
	printf("count of setbit pairs : %d\n",c);
}
