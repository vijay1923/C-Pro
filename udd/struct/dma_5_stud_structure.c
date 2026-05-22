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
	struct st *p[5];

	int i;

	for(i=0;i<5;i++)
		p[i]=malloc(sizeof(struct st));


	for(i=0;i<5;i++)
	{
		printf("Enter the rollno\n");
		scanf("%d",&p[i]->rollno);
		printf("Enter the name\n");
		scanf("%s",p[i]->name);
		printf("Enter the marks\n");
		scanf("%f",&p[i]->mark);
	}
	for(i=0;i<5;i++)
	printf("%d %s %f\n",p[i]->rollno,p[i]->name,p[i]->mark);
}
