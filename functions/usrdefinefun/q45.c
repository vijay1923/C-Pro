// qustionno 44 and 45

#include<stdio.h>
void main ()
{
	char m[40],s[40];
	int i,j,k,c;
	printf("Enter the main string\n");
	scanf("%[^\n]",m);
	printf("Enter the sub string\n");
	scanf("%s",s);

	printf("main string=%s\n",m);
	printf("sub string=%s\n",s);

	for(i=0,c=0;m[i];i++)
	{
		if(m[i]==s[0])
		{
			for(j=1;s[j];j++)
			{
				if(m[i+j]!=s[j])
					break;
			}
			if(s[j]=='\0')
			{
				c++;
				printf("present\n");
			}
		}
	}

	printf("present =%d times\n",c);
}
