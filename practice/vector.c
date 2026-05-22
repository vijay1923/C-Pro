#include<stdio.h>
void main ()
{
	int i,j,k,len,m;

	char s[20];

	printf("Enter the string\n");
	for(len=0;s[len];len++);
	scanf("%s",s);


	printf("%d\n",len);


	for(i=0,m=len-1;i<len;i++,m--)
	{
		for(j=0;j<len-1-i;j++)
		{
			printf(" ");
		}
		for(k=m;k<=len;k++)
		{
			printf("%c",s[k]);

		}

		printf("\n");



	}


}
