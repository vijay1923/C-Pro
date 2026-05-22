// virtual sorting of 2d string / char 2d array
#include<stdio.h>
#include<string.h>
void main()
{
	char s[5][10],*p[5],*t;
	int ele,i,j;

	ele=sizeof(s)/sizeof(s[0]);
	for(i=0;i<ele;i++)
	p[i]=s[i];

        printf("p=%d\n",sizeof(p));

	printf("Enter the 5 strings\n");
	for(i=0;i<ele;i++)
	scanf("%s",s[i]);

	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(strcmp(p[j],p[j+1])>0)
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
	printf("After using pointers...\n");
	for(i=0;i<ele;i++)
	printf("%s\n",p[i]);

}
