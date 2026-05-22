// string revers using recursion
#include<stdio.h>
void my_strrev(char *,char *);
char * my_strchr(char *,char );
void main()
{
	char s[20],*p,*q;
	int i;
	scanf("%[^\n]",s);
	p=s;

	while(q=my_strchr(p,' '))
	{
		my_strrev(p,q-1);
		p=q+1;
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
char * my_strchr(char *p,char ch)
{
	if(*p=='\n')
	return 0;
	if(*p==ch)
	return p;
	return my_strchr(p+1,ch);
	
}
