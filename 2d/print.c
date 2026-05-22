#include<stdio.h>
#include<stdarg.h>
void Display(char *,...);
void main()
{
	char ch='a';
	int i=10;
	float f=23.5;
	printf("ch=%c i=%d f=%f\n",ch,i,f);
	Display("ch=%c i=%d f=%f\n",ch,i,f);
}
void Display(char *p,...)
{
	int i,num;
	float f;
	char ch;
	va_list v;
	va_start(v,p);

	for(i=0;p[i];i++)
	{
		if(p[i]=='%')
		{
			i++;
			if(p[i]=='c')
			{
				ch=va_arg(v,int);
				printf("%c",ch);
			}
			else if(p[i]=='d')
			{
				num=va_arg(v,int);
				printf("%d",num);
			}
			else if(p[i]=='f')
			{
				f=va_arg(v,double);
				printf("%f",f);
			}
		}
		else
			printf("%c",p[i]);
	}
}

