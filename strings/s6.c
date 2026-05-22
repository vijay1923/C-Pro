// to reverse the content of string
#include<stdio.h>
void main ()
{
	int i,j,len;
	char s[20],t;

	printf("Enter the string\n");
	scanf("%s",s);
	for(len=0;s[len];len++);

	for(i=0,j=len-1;i<j;i++,j--)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}
	printf("%s",s);
	printf("\n");

}
