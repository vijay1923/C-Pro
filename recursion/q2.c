// to count digits less than 6 in a given number
#include<stdio.h>
int rec_count(int );
void main()
{
	int num,count;
	scanf("%d",&num);

	count=rec_count(num);
	printf("count of digits less than 6=%d",count);
}
int rec_count(int num)
{
	int count,r;
	if(num==0)
	return 0;

	r=num%10;
	if(r<6)
		return 1+rec_count(num/10);	
	else
		return rec_count(num/10);

}

