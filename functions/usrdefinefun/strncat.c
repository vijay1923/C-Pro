// strncat user defined function 
#include<stdio.h>
void my_strncat(char *,char *,int );
void main()
{
	char s[20],d[50];
	int n;
	printf("Enter the destination string\n");
	scanf("%s",d);
	printf("Enter the source string\n");
	scanf("%s",s);
	printf("How many char you want to cancetinate\n");
	scanf("%d",&n);

	my_strncat(s,d,n);

	printf("String : %s\n",d);

}
void my_strncat(char *s,char *d,int n)
{
	int i,l;
	for(l=0;d[l];l++);

	for(i=0;i<n;i++)
	{
		d[l++]=s[i];
	}
	d[l]='\0';
}
