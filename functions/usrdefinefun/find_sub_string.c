#include<stdio.h>
void main ()
{
	char m[20],s[20];
	int i,j,k;
	printf("Enter the two dtrings\n");
	scanf("%s%s",m,s);


	for(i=0;m[i];i++)
	{
		if(m[i]==s[0])
		{
			for(j=1;s[j];j++)
			{
				if(m[i=j]!=s[j])
					break;
			}
			if(s[j]=='\0')
			{
				printf("Substring is present\n");
				return;
			}
		}

	}

	printf("Not present\n");
}
