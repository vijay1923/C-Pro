#include<stdio.h>
#include<string.h>
void main()
{
	char s[50],s1[50];
	printf("Enter the string \n");
	scanf("%s",s);
	printf("String:- %s",s);
	int len=strlen(s);
	printf("length of string :- %d\n",len);
	int i=0,j,c,m=0;
	for(i=0;s[i];i++)
	{
		c=0;
		for(j=0;s[j];j++)
		{
			if(s[i]==s[j])
				c++;
		}
	//	s1[m++]=s[i];
		s1[m++]=c;
sprintf(m++,%s,c);
	//	printf("char :-%c | count:- %d\n",s[i],c);
	}
	printf("%s",s1);
}
