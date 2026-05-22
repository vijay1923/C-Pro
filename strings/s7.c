// to convert lower case to upper case or vise versa
#include<stdio.h>
void main ()
{
	char s[20];
	printf("Enter the string\n");
	scanf("%s",s);
	printf("Before s=%s\n",s);

	int i;
	for(i=0;s[i];i++)
	{
		if(s[i]>='a' && s[i]<='z')
			s[i]=s[i]-32;
		else
			s[i]=s[i]+32;

	}
	printf("After s=%s",s);

}
