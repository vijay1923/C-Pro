// design a fun to alloctae dynamic memory for 1 student data base without return type
#include<stdio.h>
#include<stdlib.h>
struct st 
{
	int rollno;
	char name[20];
	float marks;
};

void ret_dma(struct st **);		// fun declaration

void main()
{
	struct st *p;
	ret_dma(&p);			// fun call

	printf("Enter the rollno,name and marks\n");
	scanf("%d%s%f",&p->rollno,p->name,&p->marks);

	printf("%d %s %f\n",p->rollno,p->name,p->marks);

}
void ret_dma(struct st **p)
{
	*p=malloc(sizeof(struct st));

}
