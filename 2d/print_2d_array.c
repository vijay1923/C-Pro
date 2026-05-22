#include<stdio.h>
void main()
{
	int a[2][3]={{10,20,30},{40,50,60}};
	int (*p)[2];
	int c,r,i,j;
	c=sizeof(a)/sizeof(a[0]);
	r=sizeof(a[0])/sizeof(a[0][0]);

	p=a;
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
			printf("%d ",p[i][j]);
		printf("\n");

	}

}
