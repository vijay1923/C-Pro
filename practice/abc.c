#include<stdio.h>
void main()
{
	int num,r,temp,pow,i;
	printf("Enter the num:\n");
	scanf("%d",&num);
	if(num<0)
		num=-num;
	for(pow=1,temp=0;num;num=num/10)
	{
		r=num%10;
		for(i=2;i<=r;i++)
		{
			if(r%i==0)
				break;
		}
		if(r!=i)
                {
		temp=temp+(r*pow);
		pow=pow*10;
		}
	}
	printf("After delete Prime digits:%d\n",temp);
}

