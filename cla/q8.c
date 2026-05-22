#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int my_strlen(char *);
void my_strrev(char *);
void main(int argc, char ** argv)
{
	int i;
	i=my_strlen(argv[1]);
	printf("len=%d\n",i);

	my_strrev(argv[1]);
	printf("%s\n", argv[1]);
}
int my_strlen(char *p)
{
	int i;
	for(i=0;p[i];i++);
	return i;
}
void my_strrev(char *p)
{
	char *q,t;
	q=p;
	while(*q)
		q++;
	q--;

	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		q--;
		p++;
	}
}
