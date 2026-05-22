// to sum of even digits in given number
#include<stdio.h>
int rec_sum(int );
void main()
{

	int i,num,sum;
	scanf("%d",&num);

	sum=rec_sum(num);
	printf("Sum of even digits = %d\n",sum);
}
int rec_sum(int num)
{
	int r,sum;
	if(num==0)
	return 0;

	r=num%10;
	if(r%2==0)
	return r + rec_sum(num/10);
	else
	return rec_sum(num/10);



}
