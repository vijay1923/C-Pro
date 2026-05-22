// to search any charchert is present or not at string
#include<stdio.h>
void main ()
{
	char s[20];
	char ch;
	int i;
	printf("Enter a string\n");
	scanf("%s",s);
	printf("Enter a charcher\n");
	scanf(" %c",&ch);	// put space before %c 

	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
		{
			printf("Present\n");
			return;
		}
	}
	printf("Not present\n");
}
