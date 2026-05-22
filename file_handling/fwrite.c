// Implementation of fwrite it will write data in the binary format 
// fwrite is used for 1) data security purepose or hide data 2)  save the memory  
#include<stdio.h>
void main()
{
	FILE *p=fopen("data","w");
	int i=123456;
	fwrite(&i,4,i,p);
	printf("i=%d\n",i);

}
