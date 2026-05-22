#include<stdio.h>
#include<stdlib.h>
double my_atof(const char *);
void main(int argc,char **argv)
{

	float f;
	int num;
	f=atof(argv[1]);
	printf("pre_f=%f\n",f);

	f=my_atof(argv[1]);
	printf("usr_f=%f\n",f);
}
double my_atof(const char *p)
{
	int i,j=1;

	float f=0.0,f1=0.0;

	if(p[0]=='-' || p[0]=='+')
		i=1;
	else
		i=0;
	for(i;p[i]!='.';i++)
	{
		if(p[i]>='0' && p[i]<='9')
			f=f*10+p[i]-48;
		else
			break;

	}
	i++;
	for(i;p[i];i++)
	{
		f1=f1*10+p[i]-48;
		j=j*10;
	}
	f=f+f1/j;

	if(p[0]=='-')
	f=-f;
	return f;
}
