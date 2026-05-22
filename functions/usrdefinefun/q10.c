// to count and delete digits in given string
#include<stdio.h>
int count(char *);
void delete_digit(char *);
void main ()
{
	char s[20];
	int c;
	scanf("%s",s);

	c=count(s);
	printf("count=%d\n",c);
	delete_digit(s);
	printf("%s\n",s);

}
int count(char *p)
{

	int c=0,i;
	for(i=0;p[i];i++)
	{
		if(p[i]>='0' && p[i]<='9')
			c++;
	}
	return c;
}
void delete_digit(char *p)
{
	int i,j;
	for(i=0;p[i];i++)
	{
		if(p[i]>='0' && p[i]<='9')
		{
			for(j=i;p[j];j++)
			p[j]=p[j+1];
			i--;
		}

	}

}
