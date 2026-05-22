#include<stdio.h>
int rec_sum(int );
void main()
{
	int num,sum;
	scanf("%d",&num);

	sum=rec_sum(num);
	printf("sum of last 3 diits of number=%d",sum);
}
int rec_sum(int n)
{
	int r,c=0;
	if(n==0 || c==3)
	return 0;
	r=n%10;
	return r+rec_sum(n/10,c++)


}
