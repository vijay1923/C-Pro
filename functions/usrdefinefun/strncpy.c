#include<stdio.h>
void my_strncpy(char *,char *,int );
void main()
{
	char d[20],s[20];
	int n;
	printf("Enter the source string\n");
	scanf("%s",s);
	printf("Enter the number of char you want to copy\n");
	scanf("%d",&n);
	my_strncpy(d,s,n);
	printf("desti : %s\n",d);
}

void my_strncpy(char *d,char *s,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		d[i]=s[i];
	}
	d[i]='\0';

}
