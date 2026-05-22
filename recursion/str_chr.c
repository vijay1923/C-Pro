#include<stdio.h>
#include<string.h>
char * my_strchr(char *,char );
void main()
{
	char s[30],ch;
	printf("Enter the string\n");
	scanf("%[^\n]",s);
	printf("Enter the char\n");
	scanf(" %c",&ch);

	if(my_strchr(s,ch)>0)
		printf("Present\n");
	else
		printf("Not\n");

}
char * my_strchr(char *p,char ch)
{
	if(*p=='\0')
	return 0;
	if(*p==ch)
	return p;
	return my_strchr(p+1,ch);


}
