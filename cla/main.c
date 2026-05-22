#include<stdio.h>
void main(int argc,char **argv)		// argc --> no of arguments, **argv --> all command line aurguments arguments
{
printf("%d\n",argc);		// no of command line arguments including exe. file

//printf("%s\n",*argv);		// --> ./a.out

int i;
for(i=0;i<argc;i++)		// for printing all command line aurguments including exe. file
printf("%s\n",argv[i]);


}
