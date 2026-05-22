#include<stdio.h>
#include<string.h>
int my_strlen1(const char *,const char *);

char * my_strchr(char *,char );
void my_strcpy(char *,char *);
void main()
{
	char s[50],m[50],x[50],*p,*q,*t;
	int c,i,j,k,l1,l2;
	printf("Enter the string\n");
	scanf("%[^\n]",m);
	printf("Enter the string\n");
	scanf("%s",s);
	l1=strlen(m);
	l2=strlen(s);

	p=m;
	p=strstr(p,s);
//	printf("%c\n",*p);
	strcpy(p+l2,p);
	
		


printf("m=%s\n",m);

}
char * my_strchr(char *p,char ch)
{
	while(*p)
	{
		if(*p==ch)
		return p;
		p++;

	}
	return 0;

}
int my_strlen1(const char *p,const char *q)
{
	int c;
	while(*p)
	{
		for(c=0;p<q;p++,c++);
		return c;
	}

}
void my_strcpy(char *s,char *d)
{
	while(*s)
	{
		*d=*s;
		s++;
		d++;
	}
	*d=*s;

}

