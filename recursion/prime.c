// check the num is prime or not using recursion
#include<stdio.h>
int prime(int ,int );
void main()
{
	int num,i=2,p;
	scanf("%d",&num);

	p=prime(num,i);
	if(p==1)
		printf("prime\n");
	else
		printf("not\n");
}
int prime(int num,int i)
{
	if(num==i)
		return 1;
	if(num%i==0)
		return 0;
	return prime(num,i+1);

}
