// To find sizeof bit field 
#include<stdio.h>
struct st
{
	int i;
	unsigned int j:4;	// 4 is bit size 
};
void main()
{	
	struct st v;

	v.j=1;
	int c=0;	// to count size of bit field
	while(v.j)
	{
		v.j=v.j<<1;	// left shift v.j until v.j become 0
		c++;
	}
	printf("sizeof bit field v.j=%d byte\n",c);

}
