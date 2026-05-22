#include<stdio.h>
#include<stdlib.h>
struct st 
{
	int rollno;
	char name[20];
	float mark;
};
void main()
{
	int n;
	printf("Enter the noof students\n");
	scanf("%d",&n);
	int i;
	struct st **p;
	for(i=0;i<n;i++)
	p[i]=malloc(sizeof(struct st *)*n);

	for(i=0;i<n;i++)
	{
		printf("Enter the rollno\n");
		scanf("%d",&p[i]->rollno);
		printf("Enter the name\n");
		scanf("%s",p[i]->name);
		printf("Enter the marks\n");
		scanf("%f",&p[i]->mark);
	}
	for(i=0;i<n;i++)
	printf("%d %s %f\n",p[i]->rollno,p[i]->name,p[i]->mark);


/*	for(i=0;i<n;i++)	// to deallocated the dma
	{
		free(p[i]);
		p=0;		// to avoid dangling pointer 
	}
	free(p);
	p=0;

*/

}
