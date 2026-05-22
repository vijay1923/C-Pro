#include<stdio.h>
void main ()
{
int r1,r2,num,pos,i;
printf("Enter the numebr\n");
scanf("%d",&num);
printf("Enter the pos\n");
scanf("%d",&pos);

r1=num>>pos;
r2=num<<32-pos;
num=r1|r2;

for(pos=31;pos>=0;pos--)

printf("%d",num>>pos&1);
printf("\n");
printf("num=%d",num);



}
