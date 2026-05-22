#include<stdio.h>
void my_strcpy(char *,char *);
void main()
{
	char d[20],s[20];
	printf("Enter the destination string\n");
	scanf("%s",s);
	my_strcpy(d,s);
	printf("desti : %s\n",d);
}

void my_strcpy (char *d,char *s)
{
	while(*s)
	{
		*d++=*s++;
	}
	*d='\0';
}
