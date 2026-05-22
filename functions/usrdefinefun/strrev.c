// string reverce 
#include<stdio.h>
void strrev(char *);
void main()
{
	char s[50];
	printf("Enter the string\n");
	scanf("%[^\n]",s);
	strrev(s);
	printf("reverse : %s\n",s);

}
void strrev(char *p)
{
	char *q,t;
	q=p;
	while(*q)
	q++;	
	q--;

	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
}
