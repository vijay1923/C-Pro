#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void str_rev(char *);
int main(int argc,char **argv)
{
	FILE *f=fopen(argv[1],"r");
	char ch;

	int c=0,i=0,c1=0,j,l=0;
	char s[50];
	while(fgets(s,50,f))
	{
		l++; // no of lines present in a file 
	}
	rewind(f);
	while((ch=fgetc(f))!=EOF)
	{
		c++;
		if(ch=='\n')
		{
			if(c1<c)
			{
				c1=c; 		// largest line length
				c=0;
			}
		}
	}
	rewind(f);
	char **p=malloc(sizeof(char *)*l); 	// assigning memory to the char double pointer 
	for(i=0;i<l;i++)	// alloacte dynamic memory 
		p[i]=malloc(c1+1);

	for(i=0;i<l;i++)	// 
		fgets(p[i],c1+1,f);

	for(i=0;i<l;i++)	/// for printing poupurse
		printf("%s",p[i]);
	printf("****************\n");

	str_rev(p[0]); // to reversse the 

	for(i=0;i<l;i++)
	printf("%s",p[i]);
}
void str_rev(char *p)
{
	char t;
	int i,j,l=strlen(p);
	for(i=0,j=l-1;i<j;i++,j--)
	{
		t=p[i];
		p[i]=p[j];
		p[j]=t;
	}
	p[l]='\n';
}
