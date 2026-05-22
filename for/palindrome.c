#include<stdio.h>
void main()
{
	int num,temp,r,rev=0;
	printf("Enter the number \n");
	scanf("%d",&num);
	for(temp=num;temp;temp=temp/10)
	{
		r=temp%10;
		rev=rev*10+r;
	}
	if(num==rev)
	printf("number is palindrome\n");
	else
	printf("number is not palindrome\n");


}
