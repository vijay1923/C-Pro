#include<stdio.h>
#include<stdlib.h>
int my_strlen(char *);
int my_strcmp(char *, char *);
void main(int argc, char ** argv)
{
	int len1, len2;
	int p;
	len1=my_strlen(argv[1]);
	printf("len1=%d\n",len1);
	len2=my_strlen(argv[2]);
	printf("len2=%d\n",len2);

	p=my_strcmp(argv[1],argv[2]);
	if(p == 0)
		printf("eqval\n");
	else
		printf("not \n");
}
int my_strlen(char *p)
{
	int i;
	for(i=0;p[i];i++);
	return i;
}
int my_strcmp(char *p, char *q)
{
	int i;
	for(i=0;p[i] ;i++)
	{

		if(p[i] != q[i])
			break;
	}
	if(p[i] == q[i])
	return 0;

	return p;
}
