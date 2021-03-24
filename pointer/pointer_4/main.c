#include <stdio.h>
#include <stdlib.h>

int my_array [5] = {11,22,33,44,55};
int *ptr1 = my_array;

int (*ptr2)[5] = my_array;
// point to array of 5 elements , if inc the step will be 5 byte

int main()
{
    printf("0x%X\n", my_array);
    printf("0x%X\n", ptr1);
    printf("%i\n", *ptr1);
    printf("%i\n", *(ptr1 + 1));
    printf("-----------------\n");
    printf("0x%X\n", ptr1);
    printf("0x%X\n", ptr2);
    printf("%i\n", *ptr1);
    printf("0x%X\n", *ptr2);
    printf("-----------------\n");
    printf("%i\n", sizeof(ptr1));
    printf("%i\n", sizeof(*ptr2));
    printf("-----------------\n");
     printf("%i\n", **ptr2);

    return 0;
}
