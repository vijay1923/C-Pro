// to duplicate characters from given string

#include<stdio.h>
void delete_duplicate(char *);
void main()
{
	char s[30],ch,*p;
	scanf("%s",s);
	delete_duplicate(s);
	printf("After : %s\n",s);
}
void delete_duplicate(char *p)
{
	int i,j,k;
	for(i=0;p[i];i++)
	{
		for(j=i+1;p[j];j++)
		{
			if(p[i]==p[j])
			{
				for(k=j;p[k];k++)
				{
					p[k]=p[k+1];
				}
				i--;
			}

		}

	}

}
