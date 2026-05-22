// For count Lines,Words and Digits in the file 
#include<stdio.h>
int line_count(FILE *);
int word_count(FILE *);
int digit_count(FILE *);
void main(int argc,char **argv)
{
	int c=0,c1=0;
	FILE *p;
	char s[50];
	p=fopen(argv[1],"r");
/*
	while(fscanf(p,"%s",s)!=-1)	// Another logic for count words
	c++;
	printf("%d count\n",c);
*/
	digit_count(p);		// FOR DIGIT COUNT 
	rewind(p);		// FILE PONTER SHOULD START AGAIN FROM ATRATING POSITION
	line_count(p);		// FOR LINE COUNT 
	rewind(p);
	word_count(p);		// FOR WORD COUNT 
	fclose(p);		// FOR CLOSING THE FILE 
}
int digit_count(FILE *p)
{
	char ch;
	int c=0;
	while((ch=fgetc(p))!=-1)
	{
		if(ch>='0' && ch<='9')
			c++;
	}
	printf("Digit count : %d\n",c);
}
int line_count(FILE *p)
{
	char s[50];
	char ch;
	int c=0;
	while((ch=fgetc(p))!=-1)
	{
		if(ch=='\n')
			c++;
	}
	printf("Line count : %d\n",c);
}
int word_count(FILE *p)
{

	char ch;
	int c=0;
	while((ch=fgetc(p))!=-1)
	{
		if(ch==32)
			c++;
	}
	c++;	// how many spaces + 1= words count
	printf("Word count :%d\n",c);
}
