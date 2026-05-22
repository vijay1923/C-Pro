// to find largest element and find on which position it is and how many times it is repeated.


#include<stdio.h>
void main ()
{
	int j,i,ele,a[5],L,ind,c1,t;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements\n");
	for(i=0;i<ele;i++)

		scanf("%d",&a[i]);
	L=a[0];
	ind=0;
	for(i=0;i<ele;i++)
	{
		if(a[i]>L)
		{
			L=a[i];
			ind=i;

		
                }


        }



printf("Largest element is=%d on index of =%d\n",L,ind);

for(i=0,t=L;i<ele;i++)
{
	if(t==a[i])
		c1++;
}


printf("largest elements is %d times repeated\n",c1);

}
