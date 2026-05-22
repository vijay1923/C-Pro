// to convert 1st char in every word lower case to upper case
#include<stdio.h>
void main ()
{
	char s[50];
	int i;
	printf("Enter the string\n");
	scanf("%[^\n]",s);

	for(i=0;s[i];i++)
	{
		if(i==0 || s[i-1]==32)		// selecting frist char in every word
		{
			if(s[i]>='a' && s[i]<='z')	// checking it is lower or upper case
			{
				s[i]=s[i]-32;		// convert lower case to upper case

			}
		}
	}
printf("%s",s);
}
