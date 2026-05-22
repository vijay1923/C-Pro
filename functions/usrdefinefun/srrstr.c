// to iplace 2nd string adjecent to the 1st string in main string
#include<stdio.h>
#include<string.h>
void main ()
{
	char m[50],f[50],s[50],t[50],*p;
	int l1,l2;
	printf("Enter the main string\n");
	scanf("%[^\n]",m);
	printf("Enter the 1st string\n");
	scanf("%s",f);
	printf("Enter the 2nd string string\n");
	scanf("%s",s);

	printf("Before m=%s\n",m);
	l1=strlen(f);		// to find the length of 1st string
	l2=strlen(s);		//to find the length of 2nd string 
//	printf("%d%d\n",l1,l2);
	p=m;		// giving base address of m to ptr p	

	while(p=strstr(p,f))		// finding 1st dtring into a msin string
	{
		strcpy(t,p+l1);		// copy the rest of the string into temp string
		strcpy(p+l1,s);		// merging 2nd string after the 1st string
		strcat(p,t);		// after gerging 2nd string merg  temp string into the 
		p=p+l1+l2;		// after placing 2nd string ptr should be strat from end of 2nd string

	}

	printf("After m=%s\n",m);

}
