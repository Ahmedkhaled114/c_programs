#include <stdio.h>
#include <stdlib.h>

unsigned char counter  ;
unsigned int ar_nums [] = {1,2,3,4,5,};
unsigned short var = 99 ;
int main()
{
    printf("Hello world!\n");



    for (counter=0 ; counter<5 ; counter++){
        printf("ar_nums[%i]=%i\n",counter,ar_nums[counter]);
    }
    printf("------------------------------------\n");
//---------------------------------------------------------------
    int sum=0 ;

    for (counter=0 ; counter<5 ; counter++) {

        sum+=ar_nums[counter];

    }

     printf("summing is %i \n" , sum);
 printf("------------------------------------\n");
//----------------------------------------------------------------
    static unsigned int exist =0 ;
     for (counter=0 ; counter<5 ; counter++) {
            if (ar_nums[counter]==3){
              //  printf("3 is exist\n");
                exist++;

            }
            else {};

     }
      printf("exist %i\n " , exist );
printf("------------------------------------\n");
//-----------------------------------------------------------------
    printf("VAR=%i\n",var);
    printf("ar_nums[5]=%i\n",ar_nums[5]);
printf("****************\n");
     for (counter=0 ; counter<5 ; counter++){
        printf("add=0x%x\n",&ar_nums[counter]);
    }
    printf("add_v=0x%x\n",&var);
printf("****************\n");
    ar_nums[5]=122;

    printf("VAR=%i\n",var);
    return 0;
}
