// strncmp userdefined function 
#include<stdio.h>
int my_strncmp(char *,char *,int );
void main()
{
	char s1[10],s2[10];
	int p,n;
	printf("Enter the s1 string\n");
	scanf("%s",s1);
	printf("Enter the s2 string\n");
	scanf("%s",s2);
	printf("How char you want compare\n");
	scanf("%d",&n);
	p=my_strncmp(s1,s2,n);
	if(p==0)
	printf("same \n");
	else
	printf("Not same \n");
}
int my_strncmp(char *s1,char *s2,int n)
{
	int i;
	for(i=0;i<n-1;i++)
	{
		if(s1[i]!=s2[i])
		break;
	}
	if(s1[i]==s2[i])
	return 0;
	else
	return -1;
}
