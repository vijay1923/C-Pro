#include<stdio.h>
int count(char *);
char *my_strchr(char *,char );
void my_strrev(char *,char *);
void main()
{
	char s[50],*q,*p,t;
	int c,i,j,l;
	scanf("%[^\n]",s);
	p=s;

	//	c=count(s);
	//	printf("%d\n",c);

	while(q=my_strchr(p,' '))
	{
		my_strrev(p,q-1);
		p=q+1;

	}
	for(l=0;p[l];l++);
	for(i=0,j=l-1;i<j;i++,j--)
	{
		t=p[i];
		p[i]=p[j];
		p[j]=t;
	}

	printf("%s\n",s);

}
int count(char *p)
{
	int c=0,i;
	char *q;

	while(q=my_strchr(p,' '))
	{
		if(*p>='0' && *p<='9')
		{
			c++;
			break;
		}

	p=q+1;
	}
}
char *my_strchr(char *p,char ch)
{
	while(*p)
	{
		if(*p==ch)
			return p;
		p++;

	}

}
void my_strrev(char *p,char *q)
{
	char t;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;


	}

}
