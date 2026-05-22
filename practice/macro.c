#include<stdio.h>
#define A 1
/*
struct st 
{
int i;
};
*/


int main()
{
struct st
{
int b1:1;
int b2:4;
int b3:4;
}bit={1,2,13};
printf("%d %d %d\n",bit.b1,bit.b2,bit.b3);


/*
struct st v,v1;
v.i=1,v1.i=1;
if(v==v1)	//error 
printf("Yes\n");
else
printf("Not\n");
*/

/*
enum vector {a,b=-2,c};
printf("%d\n",c); // -1
*/

/*
#define A 2
printf("%d\n",A); //2
*/

/*
int i=1;
while(i--)
continue ;
printf("%d\n",i); //-1
*/

/*
int i=1;
while(i--)
!i;
printf("%d\n",i);  //-1
*/


/*
for(;15>>2+3;)	/// 15>>5 will be 0 then condition fails nothing will print
printf("Vector\n");
*/

/*
#ifndef A
printf("india\n");
printf("vector\n");	// nothing will print
#endif
*/

/*
#ifdef A
printf("%d\n",A);	// error 
*/

/*
#ifndef A 
printf("india\n"); // it will not execute 
#endif
printf("Vector\n");	// vector
*/

/*
static int i=3;
if(i--)
{
main();
printf("%d\n",i); // -1 -1 -1 
}
*/
/*
int i,j=3;
for(i=1;i++,j--;);
printf("%d %d\n",i,j);	// 5 -1
*/
/*
enum vector {hyd,blr,ch};
enum vector c=blr;
printf("%d\n",blr);	// 1
*/

/*
int j=1;
static int i=j;
printf("%d\n",i);
*/
}
