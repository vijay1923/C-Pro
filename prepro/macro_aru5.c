// Token pesting
#include<stdio.h>
#define TP(a,b) a##b 	// TP is  token pesting 
void main()
{
	int ab=20,a2=25,r;
	r=TP(a,b);
	printf("r=%d\n",r);
	r=TP(a,2);
	printf("r=%d\n",r);
	r=TP(1,5);
	printf("r=%d\n",r);

}
