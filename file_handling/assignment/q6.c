#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(int argc,char **argv)
{
FILE *p,*q,*r;
p=fopen(argv[1],"r");
q=fopen(argv[2],"r");
r=fopen(argv[3],"w");
char a[50],b[50];
fscanf(p,"%[^-1]",a);
printf("%s\n",a);

}
