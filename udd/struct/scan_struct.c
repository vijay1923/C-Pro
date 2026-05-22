// 1 student data base structure 
#include<stdio.h>
struct st
{
	int rollno;
	char name[20];
	float marks;
};
void main()
{
	struct st v;
	{
		printf("Enter the rollno of student\n");
		scanf("%d",&v.rollno);
		printf("Enter the name of student\n");
		scanf("%s",v.name);
		printf("Enter the marks of student\n");
		scanf("%f",&v.marks);

		printf("rollno=%d name=%s marks=%f \n",v.rollno,v.name,v.marks);

	}


}

