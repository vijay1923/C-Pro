#include<stdio.h>
void main()
{
	FILE *p;
	p=fopen("data","r");
	int i;
	fscanf(p,"%d",&i);
	printf("i=%d\n",i);

}
