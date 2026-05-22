// Implementation of fread it will write data in the binary format 
#include<stdio.h>
void main()
{
	FILE *p=fopen("data","w");
	int i=123456;
	fread(&i,4,i,p);
	printf("i=%d\n",i);

}
