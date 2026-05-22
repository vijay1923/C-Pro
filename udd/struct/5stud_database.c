#include<stdio.h>
struct st
{
	int rollno;
	char name[20];
	float marks;
};
void main()
{
	struct st v[5],t;

	int ele,i,j;

	ele=sizeof(v)/sizeof(v[0]);

	for(i=0;i<ele;i++)
	{
		printf("enter rollno:\n");
		scanf("%d",&v[i].rollno);
		printf("enter name:\n");
		scanf("%s",v[i].name);
		printf("enter marks:\n");
		scanf("%f",&v[i].marks);
	}
	printf("before:\n");
	for(i=0;i<ele;i++)
	printf("%d %s %f\n",v[i].rollno,v[i].name,v[i].marks);
/*
	printf("--------------------------\n");

	int op;
	printf("enter option of sorting:\n");
	printf("press 1 for rollno wise\n");
	printf("press 2 for name wise\n");
	printf("press 3 for marks wise\n");

	scanf("%d",&op);

	if(op==1)
	{
		// rollno wise
		for(i=0;i<ele-1;i++)
		{
			for(j=0;j<ele-1-i;j++)
			{
				if(v[j].rollno>v[j+1].rollno)
				{
					t=v[j];
					v[j]=v[j+1];
					v[j+1]=t;
				}
			}
		}
	}
	else if(op==2)
	{
		//name wise
		//if(strcmp(v[j].name,v[j+1].name)>0)
	}
	else
	{
		//marks wise
		if(v[j].marks>v[j+1].marks)
	}

	printf("after:\n");
	for(i=0;i<ele;i++)
		printf("%d %s %f\n",v[i].rollno,v[i].name,v[i].marks);

     }

*/
}
