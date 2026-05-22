// print strong numbers between range  
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
	int num=0,i;
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
	int n1,n2,j,t,sum,r;
	n1=num;
	n2=num1;            

	for(n1;n1<=n2;n1++)
	{
		t=n1;
		sum=0;
		while(t>0)
		{
			r=t%10;
			for(j=1;r;r--)
			{
				j=j*r;
			}
			sum=sum+j;
			t=t/10;

		}
		if(n1==sum)
		printf("%d ",n1);
	}

}
