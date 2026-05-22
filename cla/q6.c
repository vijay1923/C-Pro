#include<stdio.h>
#include<stdlib.h>
double sum(const char *);
void main(int argc,char **argv)
{
	float f1,f2,f3,f,f0;
	float sum1,avsum;
	f1=atof(argv[1]);
	f2=atof(argv[2]);
	f3=atof(argv[3]);

	// pre defined function
	f=f1+f2+f3;
	f0=f/3;
	printf("f1=%f f2=%f f3=%f\n",f1,f2,f3);
	printf("sum =%f\n",f);
	printf("average sum=%f\n",f0);

	printf("-------------------------");
	sum1=sum(argv[1]);
	printf("sum=%f\n",sum1);

}
double sum(const char *p)
{
	int i,j=1;
	float sum=0.0,avsum=0.0,f;

	if(p[0]=='+' || p[0]=='-')
		i=1;
	else
		i=0;

	for(i;p[i]!='.';i++)
	{
		if(p[i]>='0' && p[i]<='9')
			sum=sum*10+p[i]-48;
		else
			break;

	}
	i++;
	for(i;p[i];i++)
	{
		sum=sum*10+p[i]-48;
		j=j*10;

	}


if(p[0]=='-')
sum=-sum;
return sum;



}
