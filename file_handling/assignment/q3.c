// Count how many lines are present in the given file by using "fgets" 
#include<stdio.h>
void main(int argc,char **argv)
{
	int c=0;
	FILE *p;
	p=fopen(argv[1],"r");
	char s[50];
	while(fgets(s,50,p))
	{
		c++;
	}
//	printf("%s\n",s);
	printf("Total line count : %d\n",c);

}
