// to revers the string in the file 
#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
FILE *p;

p=fopen(argv[1],"r+");

char ch;
int i,c=0;

// to find the length of the file 
while((ch=fgetc(p))!=-1)
c++;
rewind(p);
/// to allocate the dynamic memory to the char array
char *s=malloc(c+1);

// to copy file content into the string
while((ch=fgetc(p))!=-1)
s[i++]=ch;
s[i]='\0';

rewind(p);

// to revers the sting
for(i=0;s[i];i++)
{
 


}



}
