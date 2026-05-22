#include<stdio.h>
void main ()
{

	int num,pos,op,c=0;
	printf("Enter the number:\n");
	scanf("%d",&num);
L1:
	printf("Enter the pos of bit(0-31):\n");
	scanf("%d",&pos);
	if (pos>=0  && pos<=31)
	{
		printf("Enter op you want\n1)set the bit\n2)clear the bit\n3)compliment the bit:\n");
		scanf("%d",&op);

		if(op==1)
		{
			num=num|1<<pos;
			printf("num=%d\n",num);
		}
		else if (op==2)
		{
			num=num&~(1<<pos);
			printf("num=%d\n",num);
		}
		else if(op==3)
		{
			num=num^1<<pos;
			printf("num=%d\n",num);
		}

	}
	else 
	{	
		printf("wrong pos entered\n");
		c++;      
		if(c<3)
		{
			goto L1;
		}
		else
		{
			return;
		}
	}
}
