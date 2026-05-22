#include<stdio.h>
int my_strlen1(const char *,const char *);
char * my_strchr(char *,char );
void my_strcpy(char *,char *);
void main()
{
	char s[50],*p,*q,*t;
	int c,i,j,k,l;
	printf("Enter the string\n");
	scanf("%[^\n]",s);
	p=s;
	l=0;
	while(q=my_strchr(p,' '))
	{
		c=my_strlen1(p,q);
		if(c>l)
		{
			t=p;
			l=c;
		}
		p=q+1;
	}
	for(c=0;*p;p++,c++);
	if(c>l)
	{
		t=p-c;
		l=c;
	}
	my_strcpy(t+l+1,t);

	printf("%s\n",s);

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
