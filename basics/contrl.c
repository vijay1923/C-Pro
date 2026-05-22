#include<stdio.h>
void main()
{
int num,pos,op,c=0;
printf("Enter the number...\n");
scanf("%d",&num);
L1:
printf("Enter the Bit pos(0-31)...\n");
scanf("%d",&pos);
if(pos>=0 && pos<=31)
{
	printf("Enter the op\n1)set\n2)clear\n3)comp\n");
	scanf("%d",&op);

	if(op==1)
	{
	num=num|1<<pos;
	printf("num=%d\n",num);
	}
	else if(op==2)
	{
	num=num&~(1<<pos);
	printf("num=%d\n",num);
	}
	else if(op==3)
	{
	num=num^1<<pos;
	printf("num=%d\n",num);
	}
	else
	printf("Unknown option...\n");
}
else
{
printf("Wrong bit pos as input...\n");
c++;
	if(c<3)
	goto L1;
}



}
