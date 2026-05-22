#include<stdio.h>
#include<string.h>
void main ()
{
	char s[20]="vijay",d[20]="magadum",d1[20]="magadum";

	printf("%s\n",strcat(d,s));
	printf("%s\n",strncat(d1,s,4));

}
