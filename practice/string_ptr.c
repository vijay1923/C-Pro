#include<stdio.h>
void main ()
{
	int a[5],ele,i;
	int *p=a;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the arrray\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=p[0];i<ele;i++)
		printf("%d",p[i]);


}
