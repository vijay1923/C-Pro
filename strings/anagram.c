#include<stdio.h>
#include<string.h>
void main ()
{
	char s[20],s1[20],t;
	int i,j,k,p;
	printf("Enter the frist strings\n");
	scanf("%s",s);
	printf("Enter the second string \n");
	scanf("%s",s1);

	for(i=0;s[i];i++)		// To sort the string [s]
	{
		for(j=i+1;s[j];j++)
		{
			if(s[i]>s[j])
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;

			}

		}

	}

	//	printf("%s\n",s);

	for(i=0;s1[i];i++)		// to sort the string[s1]
	{
		for(j=i+1;s1[j];j++)
		{
			if(s1[i]>s1[j])
			{

				t=s1[i];
				s1[i]=s1[j];
				s1[j]=t;
			}

		}


	}
	//	printf("%s\n",s1);


	/* p=strcmp(s,s1);		// compare s and s1 strings 
	   if(p==0)
	   printf("anagram strings\n");
	   else
	   printf("Not anagram strings\n");

	 */

	for(i=0;s[i];i++)
	{
		if(s[i]!=s1[i])		// to check every char in both the strings
			break;
	}
	if(s[i]==s1[i])
		printf("Anagram\n");
	else 
		printf("Not\n");

}
