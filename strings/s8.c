#include<stdio.h>
void main ()
{
	char s[20];
	printf("Enter the string\n");
	scanf("%s",s);
	int i;
	for(i=0;s[i];i++)
	{
		if(s[i]%2==0)
			printf("%c",s[i]);
	}
	printf("\n");

}
