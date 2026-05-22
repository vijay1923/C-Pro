#include<stdio.h>
void del_str_digit(int *,int *)
void main()
{
	int a[5];
	int i,ele;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		scanf("%d".&a[i]);

	del_str_digit(a,&ele);

	for(i=0;i<ele;i++)
		printf("%d ".a[i]);
	printf("\n");
}
void del_str_digit(int *a,int *ele)
{

	int i
		for(i=0;i<*ele;i++)
		{
			for(t=a[i];t;t=t/10)
			{
				r=t%10;
				for(j=2;j<=r;j++)
				{
					if(r%j==0)
						break;

				}	
				if(r==j)	
				{
					b=r;		
				}
			

			}


		}



}
