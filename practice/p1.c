#include<stdio.h>
#define f(g,g2) g##g3 
#define cube(x)  x*x*x
struct st
{
struct st *next;
};
int main()
{
printf("%d \n",sizeof(*next));


/*
int a,b,c;
b=3;
a=cube(b++);
b=3;
c=cube(++b);
printf("%d  %d\n",a,c); // 60 150
*/


/*
int a=1,b=1;
if(a++ =b)
printf("Equal \n");
else
printf("Not\n");
*/

/*
	union
	{

		struct
		{
			char c[2];
			char ch[2];
		}s;
		struct 
		{
			short int i;
			short int j;
		}st;

	}u={12,1,15,1};
	printf("%d %d\n",u.st.i,u.st.j); // 268 271
*/



/*
int a[2][2][2]={{10,2,3,4},{5,6,7,8}};
int *p,*q;
p=&a[2][2][2];
*q=***a; // error 
printf("%d...%d",*p,*q);
*/

/*
char *cptr,c;
void *vptr,v; // a variable cant be void -> errror 
c=10;
v=0;
cptr=&c;
vptr=&v;
printf("%c %d",c,v);
*/

/*int var12=100;
printf("%d",f(var,12));
*/
}

/*
int main()
{
	int a=6,b=4;
	while(a+b)
	{
		printf("a=%d  b=%d\n",a,b);
		a=a/2;
		b%=3;
	}
}
*/
