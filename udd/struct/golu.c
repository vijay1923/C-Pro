#include<stdio.h>

char a[] = {' ','1','2','3','4','5','6','7','8','9'};

void board()
{
	printf(" %c | %c | %c \n",a[1],a[2],a[3]);
	printf("    |	 |    \n");

	printf(" %c | %c | %c \n",a[4],a[5],a[6]);
	printf("    |	 |    \n");

	printf(" %c | %c | %c \n",a[7],a[8],a[9]);
}

void main()
{
	board();
}
