// To convert numbers into words
#include<stdio.h>
#include<string.h>
char *s[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void main()
{
	char a[10];
	int i=0;
	printf("enter no\n");
	scanf("%s",a);
	while(a[i])
	{
		printf("%s ",s[a[i]-48]);	
		i++;
	}
	printf("\n");
	
}
