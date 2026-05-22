#include<stdio.h>
void main ()
{
	int num,pos;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(pos=0;pos<=31;pos++)
		printf("%d",num>>pos&1);
printf("\n");
printf("%d\n",num);



}
