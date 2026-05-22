#include<stdio.h>
#include<string.h>
char * mystrchr(char *,char);
void mystrcpy(char *p,char *q);
int  palin(char *,char *);
int mystrlen(const char *,const char *);

void main()
{	int i,c=0,c1,l,j;
	char s[50],*p,*q,*t;
	printf("Enter the string\n");
	scanf("%[^\n]",s);
	//printf("%s\n",s);
	p=s;	
	while(q=mystrchr(p,' '))
	{
	     c1=palin(p,q);
	      if(c1==1)
		{ 
			l=mystrlen(p,q);
			printf("%d\n",c);
			if(c>l)
			{
				l=c;
				t=p;
			}
		}
		p=q+1;
	}
	for(c=0;*p;p++,c++);
	if(c>l)
	{
		t=p-c;
		l=c;
	}
	mystrcpy(t+l+1,t);
	printf("%s\n",s);
}
char * mystrchr(char *p,char ch)
{
	while(*p)
	{
		if(*p==ch)
			return p;
		p++;
	}
	return 0;
}
int palin(char *p,char *q)
{
	int l,i,j;

	l=strlen(p);
	for(i=0,j=l-1;p<q;i++,j--)
	{
		if(p[i]!=p[j])
		{
			return 0;
		}
	}
	return 1;
}

int mystrlen(const char *p,const char *q)
{
	int l;
	while(*p)
	{
		for(l=0;p<q;p++,l++);
		return l;

	}

}
void mystrcpy(char *p,char *q)
{
	while(*p)
	{
		*p=*q;
		p++;
		q++;
	}
	*p=*q;

}
