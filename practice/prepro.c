#include<stdio.h>

#define SQR(x) (x*x)
int main()
{
int a,b=3;
a=SQR(b+3);
printf("%d\n",a);	//ans -> 15

}

/*
#define f(g,g2) g##g2
int main()
{
int var12=100;
printf("%d\n",f(var,12)); // ans-> 100
}
*/

/*
#define prod(a,b) a*b
int main()
{
int x=3,y=4;
printf("%d",prod(x+2,y-1));	// ans -> 15
}
*/

/*
#define swap(a,b,c) c t;t=a,a=b,b=t;
void main()
{
int x=10,y=20;
swap(x,y,int);
printf("%d %d",x,y);	// ans -> 20 10
}
*/

/*
#define prod(x)(x*x)
int main()
{
int i=3,j,k;
j=prod(i++);
k=prod(++i);
printf("\n%d %d",j,k); // ans-> 9 25 
}
*/

/*
#include<stdio.h>

int i=2;
#ifdef DEF
i*=i;
printf("\n%d",i);
#endif
*/
