#include<stdio.h>
enum colour{red,green,blue};
void main()
{
	int input;
	printf("Enter the input:\n");
	scanf("%d",&input);

	if(input==0)
		printf("red\n");
	else if(input==green)
		printf("green\n");
	else 
		printf("blue\n");
}
