#include<stdio.h>
#include<string.h>
void main()
{
char s[5][10],t[5][10];
int ele,i,j;
ele=sizeof(s)/sizeof(s[0]);
printf("Enter the string\n");

for(i=0;i<ele;i++)		// for scaning the 5 strings
scanf("%s",s[i]);

for(i=0;i<ele;i++)
{
	for(j=0;j<ele-1-i;j++)
	{
		if(strcmp(s[j],s[j+1])>0)
		{
			strcpy(t,s[j]);
			strcpy(s[j],s[j+1]);
			strcpy(s[j+1],t);
		}
	}
}

printf("\n");
for(i=0;i<ele;i++)		// for printing the 5 strings 
printf("%s\n",s[i]);
}
