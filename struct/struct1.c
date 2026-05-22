// struct
#include<stdio.h>
struct one		// userdefined datatype name
{
	int i;
	char ch;
	float f;

};
void main()
{
	struct one v;		// struct variable name
	v.i=10;
	v.ch='a';
	v.f=12.3;

	printf("i=%d ch=%c f=%f\n",v.i,v.ch,v.f);

}
