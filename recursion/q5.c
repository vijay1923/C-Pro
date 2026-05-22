// reverse the number 
#include<stdio.h>
int rev_num(int n);
void main()
{
	int num,rev;
	scanf("%d",&num);

	rev=rev_num(num);
	printf("revers num : %d\n",rev);
}
int rev_num(int n)
{
	int r;
	static int rev=0;
	if(n<0)
	r=n%10;
	n=n/10;
	return rev_num(rev*10+r);

}
