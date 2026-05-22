// typedefing of struct userdata type 
#include<stdio.h>
/* 1 method 
struct one
{
	int i;
	char s[10];
	float f;
};
typedef struct one ST;	//ST is a another name of struct one 
void main()
{
	ST a={10,"vijay",9.10};
	printf("%d %s %f\n",a.i,a.s,a.f);

}
*/

// 2 method 
typedef struct one 
{
	int i;
	char s[10];
	float f;
}ST;
void main()
{
	ST a={8,"vijay",70.52};
	printf("%d %s %f\n",a.i,a.s,a.f);

}
