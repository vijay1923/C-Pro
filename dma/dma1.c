// dynamic memory allocation for 1 int
#include<stdio.h>
#include<stdlib.h>
void main()
{

int *p;		// malloc fun wiil return starting addres it must catch with pointer
p=malloc(sizeof(int ));		/// allocating 4 byte of dynamic memory in heap section 

printf("Enter 1 int \n");	
scanf("%d",p);		// scaning 1 int 

printf("%d\n",*p);

}
