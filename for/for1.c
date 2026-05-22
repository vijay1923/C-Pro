#include<stdio.h>
void main()
{

int num,rev=0,r;
printf("Enetr the number\n");
scanf("%d",&num);
 for(  ;  num ;num=num/10)
	
{	r=num%10;
	if(r%2==0)
	printf("even digit:%d\n",r);
	else
	printf("odd digit:%d\n",r);
	
}

}
