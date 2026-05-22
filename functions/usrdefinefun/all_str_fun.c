#include<stdio.h>
int my_strlen(const char *);
void my_strrev1(char *);
void my_strrev(char *,char *);
char *my_strchr(char *,char );
char *my_strcmp(const char *,const char *);
void main()
{
	char s[50],*q,*p,f[50];
	int i,l,c;
	scanf("%[^\n]",s);
//	scanf(" %[^\n]",f);
	l=my_strlen(s);
	p=s;

	while(q=my_strchr(p,' '))
	{
		c=0;
		for(p;p<q;p++,c++)
		{
			if(*p>='0' && *p<='9')
			{
				my_strrev(p-c,q-1);
				break;
			}
		}
		p=q+1;
		if(*p==0)
		break;
	}
	printf("%s\n",s);

	//	printf("length=%d\n",l);

//	q=my_strchr(s,'x');
//	printf("%c\n",*q);

/*	q=my_strcmp(s,f);
	if(q==0)
		printf("Equal\n");
	else
		printf("Not\n");
*/
}
int my_strlen(const char *p)
{
	static int c=0;
	if(*p!=0)
	{
		c++;
		 my_strlen(p+1);
	}
	return c;
}
char *my_strchr(char *p,char ch)
{
	while(*p)
	{
		if(*(p+1)==ch || *(p+1)==0)
		return p+1;
		return my_strchr(p+1,ch);
	}
}
char *my_strcmp(const char *p,const char *q)
{
	int i;
	for(i=0;p[i];i++)
	{
		if(p[i]!=q[i])
			break;
	}
	if(p[i]==q[i])
		return 0;
	else
	return (char *)p;

}
void my_strrev(char *p,char *q)
{
	char t;
	if(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		return my_strrev(p+1,q-1);
	}

}
void my_strrev1(char *p)
{
	char *q,t;
	q=p;
	while(*q)
	q++;
	q--;

	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
}
