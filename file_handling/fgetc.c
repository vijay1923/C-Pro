// fgetc
#include<stdio.h>
void main(int argc,char **argv)
{
	FILE *fp;		// file pointer 
	fp=fopen(argv[1],"r");		// file pointer point at begining of the file 
	char ch;
	while((ch=fgetc(fp))!=EOF)	// to access the data in file one by one 
	printf("%c",ch);		// to print data on screen 

}
