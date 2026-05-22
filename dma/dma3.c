// allocate dynamic memory for n no of integers
#include<stdio.h>
#include<stdlib.h>
void main()
{
int n;		// inter noof integer you want to allocate dynamic memory
scanf("%d",&n);

int *p;
p=malloc(sizeof(int)*n);	// alocating n no of int memory

int i;
printf("Enter the %d noof int \n",n);
for(i=0;i<n;i++)
scanf("%d",&p[i]);

for(i=0;i<n;i++)
printf("%d ",p[i]);

}
