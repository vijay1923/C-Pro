// function for return int ,char and float data 
#include<stdio.h>

struct st 
{
	int rollno;
	char name[20];
	float marks;
};

struct st ret_isf(void );
void main()
{
	struct st v;
	v=ret_isf();
	printf("%d %s %f\n",v.rollno,v.name,v.marks);

}
struct st ret_isf(void )
{
	struct st v={8,"vijay",70.50};
	return v;
}
