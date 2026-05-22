// perfect or not using recursion
#include<stdio.h>
int perfect(int );
void main()
{
	int sum,num;
	scanf("%d",&num);

	sum=perfect(num);
	if(num==sum)
		printf("perfect\n");
	else
		printf("Not\n");
}
int perfect(int num)
{
	static int i=1,sum=0;

	if(i<num)
	{
		if(num%i==0)
			return sum=(i++)+perfect(num);
		else
		{
			i++;
			perfect(num);
		}


	}
	else
		return sum;
}
