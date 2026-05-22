// Float binary using char pointer

#include<stdio.h>
void main ()
{
	float f=23.5;  // float value
	char *cp;	// char pointer 
	int pos;
	for(cp=(char *)&f,cp=cp+3;cp>=(char *)&f;cp--)       // outer loop (it will execute 4 times)
	{

		for(pos=7;pos>=0;pos--)                      // inner loop (it will execute 8 times)
		{
			printf("%d",*cp>>pos&1);             // binary printing formule

		}

	}
	printf("\n");
}
