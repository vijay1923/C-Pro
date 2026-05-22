// reverse binary printing
#include<stdio.h>
void binary(int );
void main()
{
	int num;
	scanf("%d",&num);

	binary(num);
	printf("\n");
}
void binary(int n)
{
	static int pos=0;
	if(pos<=31)
	{
		printf("%d",n>>pos&1);
		pos++;
		binary(n);
	}



}
