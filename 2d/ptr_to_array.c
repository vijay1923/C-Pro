#include<stdio.h>
void main()
{
	int a[5];
	int i,j,ele;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
	scanf("%d",&a[i]);

	int *ip;
	int (*p)[5];
	printf("%ld %ld\n",sizeof(ip),sizeof(p));
	ip=a;
	p=&a;

	printf("%u %u\n",ip,*ip);
	printf("%u %u %u\n",p,*p,**p);
	printf("p=%u p+1=%u\n",p,p+1);
	printf("*p=%u *p+1=%u\n",*p,*p+1);

}
