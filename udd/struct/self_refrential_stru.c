// self refrential structure
#include<stdio.h>
#include<stdlib.h>
struct st
{
	int rollno;
	char *name;			// char name member is pointer type
	float mark;

};
void main ()
{
	struct st *p;
	p=malloc(sizeof(struct st));

	p->name=malloc(20);		// if structer member is pointer the this type of memory allocation require 

	printf("Enter the rollno\n");
	scanf("%d",&p->rollno);
	printf("Enter the name\n");
	scanf("%s",p->name);
	printf("Enter the marks\n");
	scanf("%f",&p->mark);

	printf("%d %s %f\n",p->rollno,p->name,p->mark);

}
