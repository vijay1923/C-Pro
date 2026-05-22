// string revers using recursion
#include<stdio.h>
void my_strrev(char *,char *);
void main()
{
	char s[20],*p;
	int i;
	scanf("%[^\n]",s);
	p=s;
	for(i=0;p[i];i++);	// for find string length 
	my_strrev(p,p+i-1);

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
