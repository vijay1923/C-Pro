#include<stdio.h>
#include<stdlib.h>
void pattern(int );
void main(int argc,char **argv)
{
	int num;
	num=atoi(argv[1]);
	pattern(num);

}
void  pattern(int num)
{
	int i,j,k;
	for(i=num;i>=1;i--)
	{
		for(k=i-1;k>=i;k--)
		{
			printf(" ");

		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}

}
