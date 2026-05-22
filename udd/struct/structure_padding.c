#include<stdio.h>

struct st
{
	int i;
	char ch;
	float f;
};
void main()
{
	struct st v;
	printf("%ld\n",sizeof(v));	// expecteded size is 9 byte but 12 byte memory is allocated due to structure padding 

}
