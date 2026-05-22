#include<stdio.h>
enum day{mon,tue=10,wed=10000000000,thu,fri,sat};
enum month{jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,des};
void main()
{
	enum day v;
	enum month v1;
	printf("%ld\n",sizeof(v));		// sizeof enum variable  is depends on constant value 
	printf("%ld\n",sizeof(v1));

	printf("%d\n",tue);
	printf("%d\n",jan);
}
