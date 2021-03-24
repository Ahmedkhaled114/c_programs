#include <stdio.h>
#include <stdlib.h>

char arr_1 [][7] = {{"ahmed" },
                    {"khaled"},
                    {"salam" }};
int main()
{
    printf("1st name %s\n", arr_1[0]);
    printf("sec name %s\n", arr_1[1]);
    printf("3rd name %s\n", arr_1[2]);
printf("===========================\n");

    for(int counter_a=0;counter_a<3;counter_a++){

        for(int counter_b=0;counter_b<7;counter_b++){

            printf("%c" , arr_1[counter_a][counter_b]);
        }
    printf("\n");
    }
printf("===========================\n");





    return 0;
}
