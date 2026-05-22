//differnce between the charcter pointer and integer pointer

#include<stdio.h>
void main ()
{
int i=258,*ip;
char ch,*cp;

ip=&i;
cp=(char *)&i;
printf("i=%d\n",i);
printf("*ip=%d *cp=%d",*cp,*ip);

*cp='a';
printf("i=%d\n",i);
printf("*ip=%d *cp=%d\n",*ip,*cp);
}
