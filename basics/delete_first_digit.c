#include<stdio.h>
void main ()
{
	int num,a[5],ele,i,c,t,t1,r,pos,p;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;a[i];i++)
	{
		if(a[i]>9)
		{
			for(t=a[i],c=0;t;t=t/10,c++);

			for(t1=a[i],p=1,num=0;t1;t1=t1/10,c--)
			{
				r=t1%10;
				if(c!=1)
					num=num+r*p;
				pos=pos*10;

			}
			printf("%d ",num);

		}

	}
	printf("\n");
}
