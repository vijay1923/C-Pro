#include<stdio.h>
void main()
{
	FILE *p;


	/* to write in file 
	p=fopen("data","w");
	int a[5]={1,2,3,4,5},i;

	for(i=0;i<5;i++)
	fprintf(p,"%d",a[i]);
	*/

	// to scan from file
	p=fopen("data","r");
 	int a[5],i;
	for(i=0;i<5;i++)
	fscanf(p,"%d ",&a[i]);

	for(i=0;i<5;i++)
	printf("%d",a[i]);
	printf("\n");
	
}
