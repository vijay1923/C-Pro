// count the char is how many times present in string
#include<stdio.h>
#include<string.h>
int my_strchr(char *,char );
void main()
{
	char s[30],ch;
int count;
	printf("Enter the string\n");
	scanf("%[^\n]",s);
	printf("Enter the char\n");
	scanf(" %c",&ch);

	printf("count=%d\n",my_strchr(s,ch));

}
int my_strchr(char *p,char ch)
{
	if(*p=='\0')
	return 0;
	if(*p==ch)
	return 1+my_strchr(p+1,ch);
	return my_strchr(p+1,ch);

}
