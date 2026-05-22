#include<stdio.h>
void main()
{
	int num,r,i=0;
	char s[10];
	scanf("%d",&num);
	while(num)
	{
		r=num%16;
		if(r>9)
		s[i++]=r+55;
		else 
		s[i++]=r+48;
		num=num/16;
	}
	s[i]='\0';
	for(i=i-1;i>=0;i--)
	printf("%c",s[i]);
	printf("\n");
}
