// to count the char count in given string by using --------> [ recursion ]
#include<stdio.h>
int count(char *,char );
void main()
{
	char s[40],ch;
	scanf("%[^\n]",s);
	scanf(" %c",&ch);

	printf("count=%d\n",count(s,ch));
}
int count(char *p,char ch)
{
	if(*p=='\0')
	return 0;
	if(*p==ch)
	return 1 + count(p+1,ch); 
	return count(p+1,ch); 


}
