// working of fgets() 
#include<stdio.h>
void main()
{
	FILE *p;
	p=fopen("data","r");
	char s[50];
	fgets(s,6,p);		// if you provide size 5 then it will read 4 char 
	printf("%s\n",s);

	fgets(s,5,p);	 
	printf("%s\n",s);
}
