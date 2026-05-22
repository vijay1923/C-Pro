// structure using function
#include<stdio.h>
#include<stdlib.h>

struct st
{
	int rollno;
	char name[20];
	float marks;
};

void print1(int ,char *,float );
void print2(struct st);
void print3(struct st *);

void main()
{
	struct st v={8,"viajy",70.50};

	print1(v.rollno,v.name,v.marks);	// fun call print1 
	print2(v);
	print3(&v);
	printf("main   : %d %s %f\n",v.rollno,v.name,v.marks);

}
void print1(int r,char *n,float m)
{
	printf("print1 : %d %s %f\n",r,n,m);
}
void print2(struct st v)
{
	printf("print2 : %d %s %f\n",v.rollno,v.name,v.marks);
}
void print3(struct st *p)
{
	printf("print3 : %d %s %f\n",p->rollno,p->name,p->marks);
}        
