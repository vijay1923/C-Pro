#include<stdio.h>
void main()
{
	int i,j,k,row;
	char ch1='a',ch;
	scanf("%d",&row);

	for(i=0;i<row;i++,ch1=ch=i+1)
	{
		k=i;

		for(j=0;j<=i;j++,ch1=ch-k-1,k--)
		{
			ch=ch1;
			printf("%c",ch);
		}

		printf("\n");
	}

}
