#include <stdio.h>
#include <stdlib.h>

int arr[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };

int main()
{
    printf("0x%X\n", arr);
    printf("0x%X\n", arr+0);  /*address of first array*/
    printf("0x%X\n", arr+1);  /*address of second array*/
    printf("0x%X\n", arr+2);  /*address of 3rd array*/

    printf("-------------\n");

    printf("0x%X\n", *(arr+0));  /*address of first element in first array*/
    printf("%i\n", *(*(arr+0))); /*content of first element in first array*/
    printf("0x%X\n", *(arr+1));  /*address of first element in sec array*/
    printf("%i\n", *(*(arr+1))); /*content of first element in sec array*/

    printf("-------------\n");

    printf("0x%X\n", *(arr+0)+1); /*address of sec element in first array*/
    printf("%i\n", *(*(arr+0)+1));/*content of sec element in first array*/

    printf("-------------\n");

    unsigned int i = 2, j = 3;
    printf("%i\n", *(*(arr+i)+j));

    for(i=0; i<3; i++){
       for(j=0; j<4; j++){
            printf("%i\t", *(*(arr+i)+j));
       }
       printf("\n");
    }

    printf("-------------\n");

//------------------------------------------------------------------------------------
                                 /** important **/
    int *ptr = arr;
    int *ptr0 = *(arr+0);

    printf("%i\n", sizeof(arr));        /* first name is the address of  array
                                            and will print size of 2d array*/
    printf("%i\n", sizeof(ptr));

    printf("%i\n", sizeof(*(arr+0)));        /* first name is the address of array
                                            and will print size of first array*/
    printf("%i\n", sizeof(ptr0));

    printf("%i\n", sizeof(*(arr+0)+1)); /* size of address of sec element in first array*/

//------------------------------------------------------------------------------------

        int arr2[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
    int *ptr1 = *(arr2+0)+1;
    int (*ptr2)[4] = *(arr2+0);

    printf("0x%X\n", ptr1);
    printf("0x%X\n", ptr2);

    ptr1++; // 4
    ptr2++; // 16

    printf("0x%X\n", ptr1);
    printf("0x%X\n", ptr2);


    return 0;
}
