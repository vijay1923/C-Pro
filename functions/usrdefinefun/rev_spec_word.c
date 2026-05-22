/// to revers the word having digit or special char  in the given string
#include<stdio.h>
#include<string.h>
char *my_strchr(char *,char );
void my_strrev(char *,char *);
void main()
{
	char s[50],*p;
	char *q,t;
	int c,c1,i,len,j;
	scanf("%[^\n]",s);
	p=s;
	while(q=my_strchr(p,' '))
	{
		c=0;
		for(p;p<q;p++,c++)
		{
			if(*p=='#' || *p=='#')
			{
				my_strrev(p-c,q-1);
				break;
			}
		}
		p=q+1;
		if(*q==0)
		break;
	}
	printf("%s\n",s);
}
void my_strrev(char *p,char *q)
{
	char t;
	if(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		my_strrev(p+1,q-1);
	}
}
char *my_strchr(char *p,char ch)
{
	if(*p)
	{
		if(*(p+1)==ch || *(p+1)==0)
		return p+1;
		return my_strchr(p+1,ch);
		
	}
}
