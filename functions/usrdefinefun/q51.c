#include<stdio.h>
void print_str(const char *);		// to print string
int my_strlen(const char *);		// to find the string length
int my_strlen1(const char *,const char *);
void my_upper(char *);			// to conver lower case to upper case
char * my_strchr(char *,char );	// to serch char in string
void my_strcpy( char *,char *);	// to copy a string into another string
void my_strrev(char *);
void my_strrev1(char *, char *); 
char *my_strcmp(const char *,const char *);
void main()
{
	char s[50],s1[50],ch,d[50],t[50],ch1,ch2;
	char *p,*q,*t1;
	int i,j,k,c;
	printf("Enter 1st  string\n");
	scanf("%[^\n]",s);
	printf("Before s=%s\n",s);
	p=s;
	int l=0;
	while(q=my_strchr(p,' '))
	{
		c=my_strlen1(p,q);
		if(l<c)
		{
			t1=p;  // storing large word starting address to delete later using strcoy
			l=c;
		}
		p=q+1;

	}
	for(c=0;*p;p++,c++);// couting remaining last word length	
	if(l<c)
	{
		t1=p-c;   // stroeing large word starting address
		l=c;
	}
	my_strcpy(t1+l+1,t1);  //strcpy(source,dest);  to get dest address do source add + large word length + 1 
	printf("l=%d\n%s\n",l,s);




} 
int my_strlen1(const char *p,const char *q)
{
	int c,l;

	for(c=0,l=0;p<q;p++,c++);
	return c;

}
void print_str(const char *p)
{
	printf("%s\n",p);

}
int my_strlen(const char *p)
{
	int i;
	for(i=0;p[i];i++);
	printf("len=%d\n",i);

}
void my_upper(char *p)
{
	while(*p)
	{
		if(*p>='a' && *p<='z')
			*p=*p-32;
		p++;
	}
}


char *my_strchr(char *p,char ch)
{
	while(*p)
	{
		if(*p==ch)
			return p;
		p++;

	}
	return 0;
}
void my_strcpy(char *s,char *d)
{
	while(*s)
	{
		*d=*s;
		s++;
		d++;

	}
	*d='\0';	// when source and destination NOT from 0th position  
//	*d=*s;		// when destination strats from 0th position
}
void my_strrev(char *p)
{
	int i,j,len;
	char t;
	for(len=0;p[len];len++);
	for(i=0,j=len-1;p[i];i++,j--)
	{
		t=p[i];
		p[i]=p[j];
		p[j]=t;

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
		return (char *)p;
	else
		return 0;
}
void my_strrev1(char *p,char *q)
{
	char t;

	while(*p)
	q++;

	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}

}
