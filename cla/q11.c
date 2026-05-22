// count digts in the string
#include<stdio.h>
#include<stdlib.h>
int count(char *);
void main(int argc, char ** argv)
{

	int c;
	c=count(argv[1]);
	printf("count=%d\n",c);
}
int count(char*p)
{

	int i, c=0;
	for(i=0;p[i];i++)
	{

		if(p[i]>='0' && p[i] <= '9')
			c++;
	}

	return c;
}
