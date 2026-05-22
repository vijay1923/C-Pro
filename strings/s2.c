// to print charcters in string
#include<stdio.h>
void main ()
{
	int i;
	char s[10];
	printf("Enter the string\n");
	scanf("%s",s);
	for(i=0;s[i];i++)
	printf("%c ",s[i]);
	printf("\n");


}
