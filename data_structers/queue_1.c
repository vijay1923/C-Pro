#include <stdio.h>
void main()
{
    char queue[5][20];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the string: ");
        scanf("%s",queue[i]);
    }
    printf("The strings are:\n");
    for(i=0;i<5;i++)
    {
        printf("%s\n",queue[i]);
    }

}
