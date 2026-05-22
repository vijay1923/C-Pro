#include<stdio.h>
void main()
{

	int num,pos ,op,c=0;
	printf("Enter the number :\n");
	scanf("%d",&num);
L1:
	printf("Enter the bit pos(0-31) :\n");
	scanf("%d",&pos);
	if(pos>=0 && pos<=31)
	{
		printf("Enter the op\n1)set bit\n2)clear bit\n3)compliment bit\n ");
		scanf("%d",&op);
		if (op==1)
		{
			num=num|1<<pos;
			printf("num=%d\n",num);
		}
		if(op==2)
		{
			num=num&~(1<<pos);
				printf("num=%d\n",num);
		} 
		if(op==3)
		{
			num=num^1<<pos;
			printf("num=%d\n",num);
		}

	}
	else 
	{
		printf("U intered wrong bit pos\n");
		c++;
		if(c<3)
			goto L1;
	}
}
