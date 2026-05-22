// to allocating dynamic memory for 5 strings
#include<stdio.h>
#include<stdlib.h>
void main ()
{

	char *p[5];
	int i;

	for(i=0;i<5;i++)
	p[i]=malloc(sizeof(char )*5);

	printf("Enter the 5 strings\n");
	for(i=0;i<5;i++)
	scanf("%s",p[i]);

	for(i=0;i<5;i++)
	printf("%s\n",p[i]);

}
