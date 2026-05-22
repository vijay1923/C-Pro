// to count largest word in string

#include<stdio.h>
void main()
{
	char s[50];
	int L,l,i;
	printf("Enter the string\n");
	scanf("%[^\n]",s);
	for(i=0,l=0,L=0;s[i];i++)
	{
		if(s[i]!=32)
		L++;
		else
		L=0;
		if(L>l)
		l=L;
	}
	printf("large word count is %d\n",l);



}
