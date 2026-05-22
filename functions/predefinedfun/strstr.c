#include<stdio.h>
#include<string.h>
void main()
{
	char m[]="embedded";		// main string
	s[]="be";			// sub string to find

	printf("%u\n",m);		// to print strating addres of main string
	printf("%u\n",strstr(m,s));	// to print addres of sub string 
	printf("%s\n",strstr(m,s));	// to print main string from where sub string found


}
