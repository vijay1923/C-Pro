#include<stdio.h>
void main ()
{
	int a[5]={10,20,30,40,50};
	int ele;

	printf("%ld\n",sizeof(a));	// size of int a[5] array is 20 (4 byte * 5 elements = 20 bytes)
	printf("%ld\n",sizeof(a[0]));	// size of single element is 4 bytes
	ele=sizeof(a)/sizeof(a[0]);	// calculation of number of elements
	printf("%d\n",ele);		

}
