// to rev the digits of given number
// eg:-i/p= 123, o/p= 321
#include<stdio.h>
void main ()
{
	int num,r,rev=0;
	printf("Enetr the number\n");
	scanf("%d",&num);

	for (  ;  num>0 ; num=num/10)
	{
		r=num%10;
		rev=rev*10+r;


	}	

	printf("%d",rev);
	printf("\n");

}
