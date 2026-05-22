#include<stdio.h>
void main()
{
char s[5][10];
int ele,i;
ele=sizeof(s)/sizeof(s[0]);
printf("Enter the string\n");

for(i=0;i<ele;i++)		// for scaning the 5 strings
scanf("%s",s[i]);

for(i=0;i<ele;i++)		// for printing the 5 strings 
printf("%s\n",s[i]);

}
