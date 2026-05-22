// swaping two numbers without using temp variable
// using multi line and single line 
// using airthmetic operations



#include<stdio.h>
void main ()
{
int n1,n2;
printf("Enter the number\n");
scanf("%d%d",&n1,&n2);
/* 
n1=n1+n2;
n2=n1-n2;
n1=n1-n2;
*/


/*
n1=n1+n2-(n2=n1);
*/

/*
n1=n1*n2;
n2=n1/n2;
n1=n1/n2;
*/

n1=n1*n2/(n2=n1);

printf("n1=%d n2=%d\n",n1,n2);

}
