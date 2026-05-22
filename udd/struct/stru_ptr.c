// structure pointer
#include<stdio.h>
struct st
{
	int rollno;
	char name[20];
	float marks;

};
void main()
{
	struct st v={1,"viajy",70.50};		//structure variable v
	struct st *p;				// structure pointer 
	p=&v;
	printf("%d %s %f\n",p->rollno,p->name,p->marks);


}

