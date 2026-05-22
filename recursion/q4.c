// sum of last 3 digits using recursion
#include<stdio.h>
int rec_sum(int ,int );
void main()
{
	int num,sum,count;
	scanf("%d",&num);

	sum=rec_sum(num,0);
	printf("sum of last 3 diits of number=%d\n",sum);
}
int rec_sum(int n,int c)
{
	int r;
	if(n==0 || c==3)
	return 0;
	r=n%10;
	return r+rec_sum(n/10,c+1);


}
