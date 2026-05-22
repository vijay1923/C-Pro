// print binar of given number

#include<stdio.h>
void binary(int );
void main()
{
	int num,r;
	printf("Enter the binary\n");
	scanf("%d",&num);

	binary(num);	// function call
	printf("\n");


}
void binary(int n)
{
	static int pos=31;	// use static storage class ---> pos should not modify

	if(pos>=0)
	{
		printf("%d",n>>pos&1);
		pos--;
		binary(n);	// recursive fun call
	}

}
