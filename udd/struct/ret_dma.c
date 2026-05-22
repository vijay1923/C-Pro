// alloctae the dynamic memory for 1 student data base and return starting address 
#include<stdio.h>
#include<stdlib.h>
struct st 
{
	int rollno;
	char name[20];
	float marks;
};

struct st * ret_dma(void );		// fun declaration

void main()
{
	struct st *p;
	p=ret_dma();		// fun call

	printf("Enetr the rollno,name and marks\n");
	scanf("%d%s%f",&p->rollno,p->name,&p->marks);

	printf("%d %s %f\n",p->rollno,p->name,p->marks);

}
struct st * ret_dma(void )
{
	struct st *p;
	p=malloc(sizeof(struct st));		// allocate dynamic memory for struct st 
		return p;			// return starting address of that memory

}
