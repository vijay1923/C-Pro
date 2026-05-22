// to copy the sourec string into destination string using recursion
#include<stdio.h>
void my_strcpy(char *,char *);
void main ()
{
char s[30],q[40];
scanf("%[^\n]",s);


my_strcpy(s,q);
printf("%s\n",q);

}
void my_strcpy(char *p,char *q)
{
	if(*p=='\0')
	return ;
	*q=*p;
	my_strcpy(p+1,q+1);


/*
	while(*p)

	{
		*q++=*p++;		// to copy the string
	}

*/

}
