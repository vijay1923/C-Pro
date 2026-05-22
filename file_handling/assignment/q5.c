#include<stdlib.h>
#include<string.h>
#include<stdio.h>
void main(int argc,char **argv)
{
	FILE *p,*q,*r;
	p=fopen(argv[1],"r");
	q=fopen(argv[2],"r");
	r=fopen(argv[3],"w");
	int c=0;
	char ch;
	while((ch=fgetc(p))!=-1)
		c++;
	rewind(p);
	char *s=malloc(c+1);
	c=0;
	while((ch=fgetc(q))!=-1)
		c++;
	rewind(q);
	char *a=malloc(c+1);
	int i=0;
	while((ch=fgetc(p))!=-1)
		s[i++]=ch;
	s[i]='\0';
	i=0;
	while((ch=fgetc(q))!=-1)
		a[i++]=ch;
	a[i]='\0';

	int l1,l2,l3;
	l1=strlen(s);
	l2=strlen(a);
	l3=l1+l2;
	char *s1=malloc(l3+1);
int j,k;
	for(i=0,j=0,k=0;i<l3;i++,j++)
	{
		if(i<l2)
			s1[k++]=s[i];
		if(j<l2)
			s1[k++]=a[j];
	}
	fputs(s1,r);
}
