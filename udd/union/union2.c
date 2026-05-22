// if you modify the any of the members value then it will afest others too
#include<stdio.h>
union u
{
int i;
char ch;
float f;

};
void main()
{
	union u v;
	v.i=260;
	printf("%d\n",v.ch);
	v.ch='a';
	printf("%d\n",v.i);
}

