#include<stdio.h>
void main ()
{
	 char s[50];
	int i,c,j,c1;
	printf("Enter the string\n");
	scanf("%[^\n]",s);

	char *p=s;
	for(i=0,c=0;s[i]!=' ';i++,c++);
	i++;
	for(j=i,c1=0;s[j];j++,c1++);
	printf("%d %d",c,c1);


/*	for(;*p!=' ';p++);  // going to first spce after first word
	p++;
	for(;*p!=' ';p++,c++)   // in second word finding no of digits

	printf("digits count in second world %d\n",c);

	for(i=0;s[i];i++)
	{
		if(s[i]!=32)
		{
			if(s[i]>='a' && s[i]<='z')
				s[i]=s[i]-32;


		}


	}
	printf("%s",s);

*/












}
