#include<stdio.h>
void main()
{
	int a[5],ele,i,s,ss;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	if(a[0]<a[1])
	{
		s=a[0];
		ss=a[1];
	}
	else
	{
		s=a[1];
		s=a[0];
	}
	for(i=2;i<ele;i++)
	{
		if(a[i]<s)
		{
			ss=s;
			s=a[i];
		}
		else if(a[i]<ss && a[i]!=s)
		{
			ss=a[i];
		}

	}
	printf("ss=%d  s=%d\n",ss,s);
}
