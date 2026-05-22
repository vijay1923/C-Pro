// to delete numbers from string
#include<stdio.h>
void main ()
{
	char s[50];
	int i,j;
	printf("Enter the string\n");
	scanf("%[^\n]",s);

	for(i=0;s[i];i++)			// to get on by one char 
	{
		if(s[i]>='0' && s[i]<='9')	// compare it is number or not
		{
			for(j=i;s[j];j++)	// to delete the number
			s[j]=s[j+1];	
			i--;			// to check previous char again

		}

	}

	printf("%s",s);
}
