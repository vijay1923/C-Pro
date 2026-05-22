#include<stdio.h>
void main ()
{
	int num,pos,op,i,c=0,rev=0,temp,r,mul=1,sum=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("Select the option\n1)binary printing\n2)factors\n3)prime or not\n4)palindrome or not\n5)perfect or not\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1: 
			for(pos=31;pos>=0;pos--)
				printf("%d",num>>pos&1);
			printf("\n");
			break;

		case 2:
			for(i=1;i<=num;i++)
			{
				if(num%i==0)
					printf("%d ",i);
			}
			break;

		case 3:
			for(i=2;i<num;i++)
				if(num%i!=0)


					break;

		case 4:
			for(temp=num;temp;temp=temp/10)
			{
				r=temp%10;
				rev=rev*10+r;
			}
			if (rev==num)
				printf("Palindrome\n");
			else
				printf("Not Palindrome");
			break;

		case 5:
			for(i=1;i<num;i++)
				if (num%i==0)
					sum=sum+i;
			if(sum==num)
				printf("Perfect number\n");
			else
				printf("Not perfect number\n");
			break;

		default : printf("Unknown option\n");


	}


}
