// to copy one file content into another file 
#include<stdio.h>
int digit_check(const char *p)
{	
	int i;
	for(i=0;p[i];i++)
	{
		if(p[i]>='0' && p[i]<='9')
			return 1;
	}
	return 0;
}
void main()
{
	FILE *ps,*pd;
	ps=fopen("data","r");	// source file 
	pd=fopen("data1","w");	// destination file 

	char s[50];
	while(fscanf(ps,"%s",s)!=-1)
	{
		if(digit_check(s))
		fprintf(pd,"%s ",s);
	}

}
