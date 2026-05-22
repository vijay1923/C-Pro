// TO CONVET LOWER CHARACTERS BY UPPER CASE CHARACTERS
#include<stdio.h>
void main(int arc,char **argv)
{
	int i=0,c=0;
	char ch;
	FILE *p;
	p=fopen(argv[1],"r+");

	fseek(p, 0, SEEK_SET);		// To start frome starting of file 
	while((ch=fgetc(p))!=-1)	// to take char by char
	{
		if(ch>='a' && ch <='z')		// to check the char is lower case
		{
			ch=ch-32;		// covert lowercse char into uppercase
			fseek(p, -1, SEEK_CUR); // to move file pointer one position backword 
			fputc(ch, p);		// to print char into file 
		}
	}
	fclose(p);	// to close the file 
}
