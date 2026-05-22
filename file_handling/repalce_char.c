#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	FILE *p;
	p=fopen(argv[1],"r+");

	char ch;
	int i=0,c=0;

	// To find sizeof file 
	while((ch=fgetc(p))!=EOF)
	c++;
	rewind(p);	// to point file pointer at bignning of the file 

	// To allocate dynamic memory to char array
	char *s=malloc(c+1);

	// To copy the file content into char array

	while((ch=fgetc(p))!=EOF)
	s[i++]=ch;
	s[i]='\0';
	rewind(p);	// to point file pointer at binining of the file 
	
	// To replace the char in the string

	for(i=0;s[i];i++)
	{
		if(s[i]==argv[2][0])
		s[i]=argv[3][0];
	}
	// To copy string into the file 
//	for(i=0;s[i];i++)
//	fputc(s[i],p);
 	fputs(s,p);
}
