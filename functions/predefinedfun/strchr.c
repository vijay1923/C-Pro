#include<stdio.h>
#include<string.h>
void main ()
{
	char s[]="embedded";		
	ch='e';				// charcter to find in string

	printf("%u\n",s);	
	printf("%u\n",strchr(s,ch));	// strchr gives frist occurance	    // to fond char from L -----> R
	printf("%s\n",strchr(s,ch));	// to print string from frist occurance

	printf("%u\n",strrchr(s,ch));	// strrchr gives last occurance     // to find char from L <----- R 
	printf("%s\n",strrchr(s,ch));	// to print string from last occurance


}
