// to check the system is 8 bit,16 bit,32 bit or 64 bit 
 
#include<stdio.h>

#define MP 64
#if(MP==8)
void main()
{
	printf("MP is 8-bit\n");
}
#elif(MP==16)
void main()
{
	printf("MP is 16-bit\n");
}
#elif(MP==32)
void main()
{
	printf("MP is 32-bit\n");
}
#elif(MP==64)
void main()
{
	printf("MP is 64-bit\n");
}
#endif
