#include<stdio.h>

char * mystrchr(char *s,char ch)
{
	char *p;
	while(p)
	{
		if(*p==ch)
		return p;
		p++;

	}

}

void main()
{
	char s[50];
	char ch;
	printf("Enter the string \n");
	scanf("%s",s);

	printf("Enter the char to find in string \n");
	scanf(" %c", &ch);

	//	printf("String : %s ,character : %c\n",s,ch);


char *p=mystrchr(s,ch);
if(p==0)
printf("Not found\n");
else
printf("found\n");


/*
	for(int i=0;s[i];)
	{


		if(ch==s[i])
		{
			printf("Char found at index : %d\n",i);
			break;
		}
		else
		i++;	
	}

*/
}
