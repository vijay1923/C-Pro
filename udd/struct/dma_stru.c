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
	struct st *p;
	p=malloc(sizeof(struct st));
	printf("Enter the rollno\n");
	scanf("%d",&p->rollno);
	printf("Enter the name\n");
	scanf("%s",p->name);
	printf("Enter the mark\n");
	scanf("%f",&p->mark);


	printf("%d %s %f\n",p->rollno,p->name,p->mark);
}
