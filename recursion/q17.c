#include<stdio.h>
char * my_strchr(char *,char );
void main()
{
	char s[30],*q,*p;
	scanf("%[^\n]",s);
	p=s;
	q=my_strchr(p,' ');
	printf("%c",*q);

}
char * my_strchr(char *p,char ch)
{
	if(*p)
	{
	if(p==ch)
	return p;
	p++;
	my_strchr(p,ch);

	}



}
