// MEARGE ALTERNATE ELEMENTS OF  2 ARRAYS 
#include<stdio.h>
void merge(char *,char *,char *,int ,int ,int );
void main()
{
	char s1[20],s2[20];
	scanf("%[^\n]",s1);
	scanf(" %[^\n]",s2);
	int l1,l2,l3;
	for(l1=0;s1[l1];l1++);
	for(l2=0;s2[l2];l2++);
	printf("l1=%d l2=%d\n",l1,l2);
	char s3[20];
	l3=l1+l2;
	printf("l3=%d\n",l3);

	merge(s1,s2,s3,l1,l2,l3);
}
void merge(char *s1,char *s2,char *s3,int l1,int l2,int l3)
{
	int i,j,k;
	for(i=0,j=0,k=0;i<l3;i++,j++)
	{
		if(i<l1)
		s3[k++]=s1[i];
		if(j<l2)
		s3[k++]=s2[j];
	}
	printf("mereged string is %s\n",s3);
}
