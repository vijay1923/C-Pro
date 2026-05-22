#include<stdio.h>
void print_str(const char *);		// to print string
int my_strlen(const char *);		// to find the string length
void my_upper(char *);			// to conver lower case to upper case
char * my_strchr(char *,char );	// to serch char in string
void my_strcpy( char *,char *);	// to copy a string into another string
void my_strrev(char *);
void my_strrev1(char *, char *); 
char *my_strcmp(const char *,const char *);
void main()
{
	char s[50],s1[50],ch,d[50],t[50],ch1,ch2;
	char *p,*q;
	int i,j,k;
	printf("Enter 1st  string\n");
	scanf("%[^\n]",s);
	printf("Before s=%s\n",s);
	p=s;

	while(p=my_strchr(p,' '))
	{
		my_strrev1(p,q-1);
		p=q+1;
	}
	my_strrev(p);

	printf("After s=%s",s);





/*	printf("Enter 2nd string\n");
	scanf("%s",s1);

	p=strcmp(s,s1);
	if(p==0)
		printf("eqval\n");
	else 
		printf("not");
*/


	/*	printf("Enter the char1\n");	// to serch the char1 
		scanf(" %c",&ch1);
	printf("Enter the char2\n");	// to insert the char2
	scanf(" %c",&ch2);
	printf("Before s=%s\n",s);

	char *p;
	p=s;		
	while(p=my_strchr(p,ch1))		 // to serch a char1 in given string
	{	
		my_strcpy(p+1,t);		 // copy string into temp string
		*(p+1)=ch2;			 // placing char2 
		my_strcpy(t,p+2);		 // merge temp string after the placing the char2
		p=p+1;
	}	
	printf("after s=%s\n",s);
*/

	/*	printf("Enter the char\n");
	scanf(" %c",&ch);
	printf("before s=%s\n",s);
	while(p=my_strchr(s,ch))		// to delete the char from string using strchr and strcpy
	my_strcpy(p+1,p);
	printf("after s=%s\n",s);
*/


/*	my_strcpy(s+4,s+1);		// to delete the string charcters
	printf("%s",s);
*/



//	my_strrev(s);

/*	my_strcpy(s,d);		// fun call to copy string
	print_str(d);
*/


/*	const char *p=my_strchr(s,ch);	// to search a char in string
         if(p==0)
	  printf("char is not present\n");
	  else
	  printf("char is present\n");
*/
	 
	//	my_upper(s);		// fun call for convert lower case to upper case
	//	int len=my_strlen(s);	// fun call to find string length

//		print_str(s);		// fun call to print string 

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
