// to rev the word having digits
#include<stdio.h>
#include<string.h>
void rev_word(char *);
void main()
{
	char s[40],f[10],*p,*q;
	int i,j,k,l,len;
	printf("Enter the string\n");
	scanf("%[^\n]",s);

	rev_word(s);
	printf("%s\n",s);
}
void rev_word(char *p)
{
	int i,j,k;
	char t,*q;
	for(i=0;p[i]!=' ';i++)		
	{
		if(p[i]>='0' && p[i]<='9')
		{
			for(j=i;p[j]!=' ';j++)
			{
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}


}
