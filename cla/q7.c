// basic calculator using command line aurgument
#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	if(argc!=4)
	{
		printf("usage:./a.out num1 op num2 \n");

	}
	int num1,num2;
	num1=atoi(argv[1]);
	num2=atoi(argv[3]);

	switch(argv[2][0])
	{
		case '+':printf("%d\n",num1 + num2);
			 break;
		case '-' : printf("%d\n",num1-num2);
			   break;
		case '*': printf("%d\n",num1*num2);
			  break;
		case '/': printf("%d\n",num1/num2);
			  break;
	}

}

