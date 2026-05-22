#include <stdio.h>
void main()
{
	char *ch;
	char c;
	printf("size of ch :%d  size of c: %d   addr of ch:%lu   addr of c :%lu \n",sizeof(ch),sizeof(c),&ch,&c);
	char s[10];
	scanf("%s",s);
	printf("%c\n",s[5]);

}
