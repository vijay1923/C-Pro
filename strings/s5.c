// to print strinin revers order
#include<stdio.h>
void main ()
{
	int len,i;
	char s[20];
	printf("Enter the string\n");
	scanf("%s",s);
	printf("Before s=%s\n",s);
	for(len=0;s[len];len++);
	printf("length=%d\n",len);
	for(i=len-1;i>0;i--)
	printf("%c",s[i]);
	printf("\n");


}
