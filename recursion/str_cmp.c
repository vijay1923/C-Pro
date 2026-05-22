// string compare using recursin 
#include<stdio.h>
int my_strcmp(char *,char *);
void main()
{
	char s[30],p[30];
	int q;
	scanf("%[^\n]",s);
	scanf("%s[^\n]",p);


	q=my_strcmp(s,p);
	if(q==0)
		printf("Eqval\n");
	else
		printf("Not\n");
}
int my_strcmp(char *p,char *q)
{
	if(*p=='\0' && *q=='\0')
	return 0;
	if(*p!=*q)
	return *p - *q; 
	return my_strcmp(p+1,q+1);
	
/*
	for(i=0;p[i];i++)
	{
		if(p[i]!=q[i])
			break;
	}
	if(p[i]==q[i])
	return 0;

*/
}
