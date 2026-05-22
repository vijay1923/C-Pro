// to avoid structure padding use #pragma pack(1)
 
 //*********** first method **************//
/*
#include<stdio.h>

#pragma pack(1)
struct st
{
	char ch;
	int i;
	float f;
};
void main()
{
	struct st v;
	printf("%ld\n",sizeof(v));
}

*/



//********** second method ***********//
#include<stdio.h>

#pragma pack(1)
struct st
{
	char ch;
	int i;
	float f;
}__atribute__(packed);		// use __atribute__(packed)
void main()
{
	struct st v;
	printf("%ld\n",sizeof(v));
}

