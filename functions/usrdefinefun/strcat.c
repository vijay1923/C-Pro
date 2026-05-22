#include<stdio.h>
void my_strcat(char *,char *);
void main()
{
	char s[20],d[50];
	printf("Enter the destination string\n");
	scanf("%s",d);
	printf("Enter the source string\n");
	scanf("%s",s);
	my_strcat(s,d);
	printf("string : %s\n",d);
}
void my_strcat(char *s,char *d)
{
	while(*d) 	// to get last address 
		d++;

	while(*s)
	{
		*d=*s;	// copying source 
		d++;
		s++;
	}
	*d='\0';	// to end the string
}

