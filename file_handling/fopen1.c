// fopen function 
#include<stdio.h>

void main(int argc,char **argv)
{
	FILE * fp;		// when you want to work on file handling task then you need to take FILE pointer

	/* compile time i/p 

	   fp=fopen("f1.c","r");
	 */

	/* Run time i/p 
	   char s[20];		// to store file name or path
	   printf("Enter a file name or path\n");
	   scanf("%s",s);		// to scan the path or file name
	   fp=fopen(s,"r");
	 */

	// Load time i/p //
	fp=fopen(argv[1],"r");

	if(fp==0)				// to check what value file pointer is holding 
	printf("File is not present\n");	// if fp is zero 
	else
	printf("File is present\n");		// if fp is non zero 

}
