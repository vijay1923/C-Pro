// Assignment 1
#include<stdio.h>
#include<stdlib.h>
struct st
{
	int rollno;
	char name[20];
	float marks;
};
void vowel(char *);
void main()
{
	int n;
	printf("Enter the number of students\n");	// number of students 
	scanf("%d",&n);

	struct st **p;				
	int i;
	for(i=0;i<n;i++)
	p[i]=malloc(sizeof( struct st *)*n); 	// dynamic memory allocation for total students

	printf("--------\n");
	for(i=0;i<n;i++)			
	{
		printf("Enter the rollno\n");
		scanf("%d",&p[i]->rollno);
		printf("Enter the name\n");
		scanf("%s",p[i]->name);
		printf("Enter the marks\n");
		scanf("%f",&p[i]->marks);
	}

	int op;
	printf("Emter the op:");
	scanf("%d",&op);
	if(op==1)
	{
	  for(i=0;i<n;i++)
	  if(p[i]->rollno%2==0)
	  printf("%d %s %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
	}

	if(op==2)
	{
		for(i=0;i<n;i++)
		{
			
		}


	}


}
void vowel(char *p)
{
	int i=0,len;
	for(len=0;p[len];p++,len++);

	if(p[i] && p[len-1] == 'a' || 'e' || 'i' || 'o' || 'u'  )
	printf("%d %s %f\n",p->rollno,p->name,p->marks);

}


}
