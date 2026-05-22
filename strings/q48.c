#include<stdio.h>
#include<string.h>
int palin(char *s,char *p)
{
	
	for( ;s<p;s++,p--)
	{
		if(*s != *p)
			break;
	}
	if(*s==*p)
		return 1;
	else
		return 0;
}
char * my_strchr(char *p,char ch)
{
	while(p)
	{
		if(*p==ch)
		return p;
		p++;
	}

}
void copy(char *p,char *q)
{
	while(*p)
	{
		*q=*p;
		p++;
		q++;
	}
	*q=*p;
}

int main()
{
	char s[100];
	printf("Enter the string\n");
	scanf("%[^\n]",s);
	char *p,*q;
	p=s;
	while(q=my_strchr(p,' '))
	{
		if(palin(p,q))
		{
			printf("V\n");
			copy(p,q);
		}
		else
			p=q+1;
	}
	printf("%s\n",s);
}
