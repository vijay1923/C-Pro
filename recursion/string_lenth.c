// to find string length 

#include<stdio.h>
int my_strlen(const char *);
void main()
{
	char s[20];
	int l;
	printf("Enter the string\n");
	scanf("%s",s);

	l=my_strlen(s);		// fun call
	printf("\nl=%d\n",l);	

}
int my_strlen(const char *p)
{
	if(*p)
	return 1+my_strlen(p+1);	// recursive fun cal
	else
	return 0;

}
