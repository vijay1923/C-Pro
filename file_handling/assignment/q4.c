// To count every word length in given file 
#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	FILE *p=fopen(argv[1],"r");
	int c=0;
	char ch;
	while((ch=fgetc(p))!=-1)
		c++;
	rewind(p);

	char *s=malloc(c+1);
	int i=0;

	while((ch=fgetc(p))!=-1)
		s[i++]=ch;
	s[i]='\0';
	c=0;
	for(i=0;s[i];i++)
	{
		c++;
		if(s[i]==' ' || s[i]=='\n')
		{
			printf("%d ",c-1);
			c=0;
		}
	}
	printf("\n");
}	
