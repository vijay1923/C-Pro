// To read structur data from file 
#include<stdio.h>
typedef struct st
{
	int rollno;
	char name[20];
	float marks;
}v;
void main()
{
	v a;
	FILE *p;
	p=fopen("data","r");
	fscanf(p,"%d%s%f",&a.rollno,&a.name,&a.marks);
	printf("%d%s%f\n",a.rollno,a.name,a.marks);

}
