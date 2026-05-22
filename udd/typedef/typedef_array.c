#include<stdio.h>
typedef int a[2];
void main()
{
	a b,r[2];
	int i;
	printf("Enetr the 5 elements\n");
	for(i=0;i<5;i++)
	scanf("%d",&b[i]);
	printf("--------------\n");
	for(i=0;i<5;i++)
	printf("%d",b[i]);
	printf("\n");


// to prove r[2] is a 2d array
int row;
row=sizeof(b)/sizeof(b[0]);
printf("row's :%d\n",row);


}
