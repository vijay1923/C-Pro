// to write struct dat in the file 
#include<stdio.h>
typedef struct st
{
	int rollno;
	char name[20];
	float marks;
}v;			// v is another name of struct st
void main()
{
	v a={10,"vijay",70.75};
	FILE *p;
	p=fopen("data","w");
	fprintf(p,"%d %s %f",a.rollno,a.name,a.marks);
}


