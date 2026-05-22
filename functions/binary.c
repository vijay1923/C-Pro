#include<stdio.h>
void binar(int);
void main()
{
int num;
printf("Enter the number\n");
scanf("%d",&num);
binar(num);
}
void binar(int num)
{
int pos;
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");

}
