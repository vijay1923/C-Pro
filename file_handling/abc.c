#include<stdio.h>
#include<string.h>
int main(int argc,char **argv)
{
	FILE *p=fopen(argv[1],"r+");
	char s[20];
	int l;
	while((fscanf(p,"%s",s))!=EOF)
	{
		l=strlen(s);
		for(int i=0,j=l-1;i<j;i++,j--)
		{
			char t=s[i];
			s[i]=s[j];
			s[j]=t;
		}
		fseek(p,-l,SEEK_CUR);
		fputs(s,p);
	}
}
