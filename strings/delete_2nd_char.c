#include<stdio.h>
void main ()
{
	char s[50];
	int i,j,index,pos;

	printf("Enter the positon\n");
	scanf("%d",&pos);

	printf("Enter the string\n");
	scanf("%s",s);
	for(i=0,index=0;s[i];i++)
	{

		if(s[i]!=' ')
		{
			index++;
			if(index==pos)
			{	
				for(j=i;s[j];j++)
				s[j]=s[j+1];
				i--;

			}
		}
		else 
		index=0;
	}
	printf("%s",s);
}
