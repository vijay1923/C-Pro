// print prime numbers between range  
#include<stdio.h>
#include<stdlib.h>
void prime(const char *,const char *);
int main(int argc,char **argv)
{
	prime(argv[1],argv[2]);
	printf("\n");

}
void prime(const char *p,const char *q)
{
	int num=0,i,t;
	if(p[0]=='-' || p[0]=='+')
		i=1;
	else
		i=0;

	for(i;p[i];i++)
	{
		if(p[i]>='0' && p[i]<='9')
			num=num*10+p[i]-48;

	}
	//////////////////////////////////////////////////////////////
	int num1=0;

	if(q[0]=='-' || q[0]=='+')
		i=1;
	else
		i=0;


	for(i;q[i];i++)
	{
		if(q[i]>='0' && q[i]<='9')
			num1=num1*10+q[i]-48;

	}


	int n1,n2,j;
	n1=num;
	n2=num1;            

	printf("%d %d\n",n1,n2);

	for(n1;n1<=n2;n1++)
	{
		for(j=2;j<=n1;j++)
		{
			if(n1%j==0)
			break;
		}
		if(n1==j)
		printf("%d ",n1);

	}

}
