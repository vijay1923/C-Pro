// diff between array of array and array of pointer 
#include<stdio.h>
void print(int ,int ,char (*)[]);
void print1(int ,char **);
void main()
{
	char s[][10]={"abcd","efgh","ijkl"};
	char *p[]={"ABC","EFGH","IJKL"};

	print(2,10,s);
	print1(3,p);

}
void print(int r,int c,char (*s)[c])
{
	int i;
	for(i=0;i<r;i++)
		printf("%s\n",s[i]);
}
void print1(int r,char **p)
{
	int i;
	for(i=0;i<r;i++)
		printf("%s\n",p[i]);
}
