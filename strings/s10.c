#include<stdio.h>
void main ()
{
	char s[20];
	printf("Enter a string\n");
	scanf("%s",s);
	int i,c=0;
	for(i=0;s[i];i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			printf("%c\n",s[i]);
			c++;

		}


	}

	printf("number of vowels=%d",c);

}
