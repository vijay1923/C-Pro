#include<stdio.h>
void print(int ,int ,int (*p)[]);
void main()
{
	int a[2][3]={{10,20,30},{40,50,60}};

		print(2,3,a);

	}
	void print(int r,int c,int (*p)[c])	// r= rows,c=colunm
	{
		int i,j;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			printf("%d ",p[i][j]);
			printf("\n");
		}


	}
