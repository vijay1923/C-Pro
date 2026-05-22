// conditional compilation 
// Q. WAP which conatins two or more tha two main and inform to the preprocessor place any of the main in .i file 
#include<stdio.h>

#define op 3

#if(op==1)
void main()
{
	printf("In main 1..\n");
}
#elif(op==2)
void main()
{
	printf("In main 2..\n");
}
#elif(op==3)
void main()
{
	printf("In main 3..\n");
}
#else
void main()
{
	printf("In main 4..\n");
}
#endif		// it is mandetry to write #endif at end of the program to know the compiler that program is terminated 
