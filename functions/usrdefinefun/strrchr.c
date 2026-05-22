#include<stdio.h>
char *my_strrchr(char *,char );
void main()
{
	char s[20],ch,*p;
	printf("Enter the string\n");
	scanf("%s",s);
	printf("Enter the character \n");
	scanf(" %c",&ch);

	p=my_strrchr(s,ch);
	if(p==0)
	{
           printf("Not found \n");
           printf("Char : %c\n",*p);
	}
	else 
	{	
	  printf("Found \n",);
	}
}

char *my_strrchr(char *p,char ch)
{
	char *q = p;
	while(*p)
	p++;	// end of string 
	p--;	// last char of string 
	while(p>=q) 	// starting from last char till 1st char of string
	{
		if(*p==ch)
		return p;
		p--;
	}
	return 0;
}
