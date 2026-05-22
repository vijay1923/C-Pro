// reverse the word in the string 
#include<stdio.h>
void strrev(char *,char *);
char *my_strchr(char *,char );
void main()
{
	char *p,*q,s[40];
	printf("Enter the string\n");
	scanf("%s",s);
	p=s;
	while(q=my_strchr(p,' '))
	{
		strrev(p,q-1);
		p=q+1;
	}
	printf("%s\n",s);


}
char *my_strchr(char *p,char ch)
{
	while(*p)
	{
		if(*p==ch)
		return p;
		p++;
	}
	return 0;
}
void strrev(char *p,char *q)
{
	char t;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		strrev(p+1,q-1);	// recursion 
	}
}
