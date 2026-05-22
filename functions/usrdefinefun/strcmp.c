// Strcmp userdefined function 
#include<stdio.h>
int my_strcmp(char *,char *);
int main()
{
	char s1[40],s2[40];
	int p;
	printf("Enter the s1 string \n");
	scanf("%s",s1);
	printf("Enter the s2 string\n");
	scanf(" %s",s2);

	p=my_strcmp(s1,s2);
	if(p==0)
		printf("same \n");
	else
		printf("Not same \n");
}
int  my_strcmp(char *s1,char *s2)
{
	int i;
	for(i=0;s1[i];i++)
	{
		if(s1[i]!=s2[i])
			break;
	}
	if(s1[i]==s2[i])
	return 0;
	else
	return s1-s2;	
}

