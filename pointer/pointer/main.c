#include <stdio.h>
#include <stdlib.h>

#define sum_of_2_num(num01 , num02)  num01+num02
unsigned int sum  ;

unsigned int num1 = 55 ;
unsigned int num2 = 66 ;

unsigned int *ptr1=NULL ;
unsigned int *ptr2=NULL ;

unsigned int nums[5]= {11,22,33,44,55};

int main()
{
    printf("num1=%i\n ", num1);
    printf("add num1=0x%x\n ", &num1);
    printf("num1=%i\n ", *(&num1));
    printf("---------------------\n");

    ptr1=&num1;
    ptr2=&num2;

    printf("add num1= 0x%x\n",ptr1);
    printf("num1= %i\n",*ptr1);

    *ptr1 = *ptr2;

    printf("num1 now = %i\n",num1);

    printf("size of ptr = %i\n",sizeof(ptr1));
    printf("---------------------\n");

    //----------------------------------------------------------

    printf("add nums[0] =x%x\n",&nums[0]);

    //nums=&nums[2];   error...
    unsigned int *ptr_nums = nums ;
    printf("ptr_nums =x%x\n",ptr_nums);
    printf("nums[0] =%i\n",*(ptr_nums));

    //nums++;  error...
    ptr_nums++;
    printf("nums[0] =%i\n",*(ptr_nums));
    printf("---------------------\n");
    //----------------------------------

    for (ptr_nums=nums ; ptr_nums<= &nums[4] ; ptr_nums++){

        printf("value of location 0x%x = %i\n", ptr_nums ,*(ptr_nums));
    }
    printf("---------------------\n");

    sum = sum_of_2_num (3,12);
    printf("sum= %i \n" , sum );
    return 0;
}
