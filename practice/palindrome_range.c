// palindrome number using recursion
#include<stdio.h>
int palin(int n,int temp)
{
	if(n==0)
		return temp;
	temp=(temp*10)+(n%10);
	return palin(n/10,temp);


}
void main()
{
	int num,last,sum;
	scanf("%d",&num);
	scanf("%d",&last);
	for(num;num<=last;num++)
	{
		sum=palin(num,0);
		if(sum==num)
			printf("%d ",num);
	}
	printf("\n");
}
