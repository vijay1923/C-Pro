#include<stdio.h>
void main()
{
	char p[30],t;
	scanf("%s",p);
	int i,j,k;
	for(k=0;p[k];k++);
	//printf("%d\n",k);
	for(i=0,j=k-1;p[i]; )
	{
		if((p[i]>='a' && p[i]<='z') && (p[j]>='a' && p[j]<='z'))
		{
			t=p[i];
			p[i]=p[j];
			p[j]=t;

		}
		if((p[i]>=!'a') && (p[i]<=!'z'))
			i++;
		if((p[j]>=!'a') && (p[j]<='z'))
			j--;
		else 
		i++;
		j--;
	}
	printf("%s\n",p);

}
