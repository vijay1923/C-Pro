//  Nested structure 
#include<stdio.h>
struct date
{
	int day;
	int month;
	int year;
};

struct st
{
	int rollno;
	char name[20];
	float marks;
	struct date dob;	// dob is the variable of date structure
	struct date doj;	// doj is the variable of date structure
};

void main()
{
	struct st v;

	v.dob.day=25;
	v.dob.month=11;
	v.dob.year=2024;

	v.doj.day=26;
	v.doj.month=11;
	v.doj.year=2024;

	printf("dob: %d:%d:%d\n",v.dob.day,v.dob.month,v.dob.year);
	printf("doj: %d:%d:%d\n",v.doj.day,v.doj.month,v.doj.year);

}
