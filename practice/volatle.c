// this program demonstrate effect of volatile keyword in c language
// first without volatile keyword and then with volatile keyword

#include <stdio.h>
void main()
{
    /*Without volatile keyword compiler will optimize the loop and may not execute it as expected*/

    // int i = 0;
    // while (i < 5)
    // {
    //     printf("i = %d\n", i);
    //     i++;
    // }




    /*With volatile keyword compiler will not optimize the loop and will execute it as expected*/
  // now with volatile keyword
    volatile int i = 0;     
    while (i < 5)
    {
        printf("i = %d\n", i);
        i++;
    }
}


