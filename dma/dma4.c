// allocate dynamic memory for 1 string
#include<stdio.h>
#include<stdlib.h>
void main()
{
char *p;
p=malloc(sizeof(char )*10);	// alocting 10 byte of  dynamic memory in heap section for string 

printf("Enetr the string\n");
scanf("%s",p);

printf("%s\n",p);

}
