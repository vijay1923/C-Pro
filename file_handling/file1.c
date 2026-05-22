#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void str_rev(char *p)
{
	int l,i,j;
	char t;
	l=strlen(p);
	for(i=0,j=l-2;i<j;i++,j--)
	{
		t=p[i];
		p[i]=p[j];
		p[j]=t;
	}
}
int main(int argc,char **argv)
{
FILE *f=fopen(argv[1],"r");
int c=0,c1,l=0;
char ch;
char s[]="india";

while((ch=fgetc(f))!=EOF)
{
	c++;
	if(ch=='\n')
	{
		l++;
		if(c1<c)
		{
			c1=c;
			c=0;
		}
	}
}
rewind(f);
char **p=malloc(sizeof(char *)*l);
int i;
for(i=0;i<l;i++)
p[i]=malloc(c1+1);

for(i=0;i<l;i++)
fgets(p[i],c1+1,f);

for(i=0;i<l;i++)
{
if(strstr(p[i],s))
str_rev(p[i]);
}

for(i=0;i<l;i++)
printf("%s",p[i]);

f=fopen(argv[1],"w");

for(i=0;i<l;i++)
fputs(p[i],f);
}
