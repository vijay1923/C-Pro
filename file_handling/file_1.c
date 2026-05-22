#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void str_rev(char *p)	// for revrse the string 
{
	int i,j,l;
	l=strlen(p);
	char t;
	for(i=0,j=l-2;i<j;i++,j--)
	{
		t=p[i];
		p[i]=p[j];
		p[j]=t;
	}
}
int main(int argc,char **argv)
{
	FILE *f=fopen(argv[1],"r");	// open file for reading purpose

	char ch,s[]="magadum";
	int i,j,l=0,c=0,c1=0;
	while((ch=fgetc(f))!=EOF)
	{
		c++;
		if(ch=='\n')
		{
			l++; 		// no of lines in a file 
			if(c1<c)
			{
				c1=c;
				c=0;
			}
		}
	}
	rewind(f);
	char **p=malloc(sizeof(char *)*l);	// allocate dma for char double pointer 

	for(i=0;i<l;i++)
	p[i]=malloc(c1+1);

	for(i=0;i<l;i++)
	fgets(p[i],c1+1,f);

	rewind(f);

	for(i=0;i<l;i++)
	{
		if(strstr(p[i],s))	// for string preset or not
		str_rev(p[i]);		// if string preset then reverse string

	}

	for(i=0;i<l;i++)	// for printion content on screen
	printf("%s",p[i]);

	f=fopen(argv[1],"w");	// open file for writing purpose

	for(i=0;i<l;i++)	// writing reversed content in a file 
	fputs(p[i],f);

}
