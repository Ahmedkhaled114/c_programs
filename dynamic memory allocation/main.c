#include <stdio.h>
#include <stdlib.h>

unsigned int var;

typedef struct person{
    int id;
    char name[10];
}person_t;

struct node{
    int value;
    struct node *next;
};

int main()
{
    printf("Enter var : ");
    scanf("%i", &var);
    /*                           malloc()
      Malloc() function will create a single block of memory of size specified by the user.
      Malloc function contains garbage value.*/

    unsigned int *ptr = (unsigned int *)malloc(var * sizeof(unsigned int));
    unsigned int *p_temp = ptr;
    printf("0x%X\n", ptr);
    if(NULL == ptr){ /* in case of no enough memory*/
        printf("Error\n");
        exit(0);
    }
    unsigned int counter = 0;
    for(counter=0; counter<var; counter++){
        ptr[counter] = counter;
    }
    for(counter=0; counter<var; counter++){
        printf("Value = %i\n", ptr[counter]);
    }
    //free(ptr);

    printf("--------------\n");
    for(counter=0; counter<var; counter++){
        printf("Value = %i\n", p_temp[counter]);
    }
//------------------------------------------------------------------------------------------------

    /*in calloc initial value in memory content 0 */
    /*                                  calloc()
     Calloc() function can assign multiple blocks of memory for a variable.
     The memory block allocated by a calloc function is always initialized to zero.*/

    unsigned int *ptr2 = (unsigned int *)calloc(var, sizeof(unsigned int));
    printf("0x%X\n", ptr2);
    if(NULL == ptr2){
        printf("Error\n");
        exit(0);
    }
    for(counter=0; counter<var; counter++){
        printf("Value = %i\n", ptr2[counter]);
    }
    //free(ptr2);
    printf("--------------\n");

    person_t *ptr3 = (person_t *)malloc(var * sizeof(person_t));
    printf("0x%X\n", ptr3);
    printf("id   = %i\n", ptr3->id);
    printf("name = %s\n", ptr3->name);
    ptr3++;
    printf("id   = %i\n", ptr3->id);
    printf("name = %s\n", ptr3->name);
    printf("--------------\n");

    struct node *first = (struct node *)calloc(1, sizeof(struct node));
    printf("0x%X\n", first);

    printf("--------------\n");

    ptr2 = realloc(ptr2, var*2*sizeof(unsigned int));
    printf("0x%X\n", ptr2);
    for(counter=0; counter<var*2; counter++){
        printf("Value = %i\n", ptr2[counter]);
    }


    return 0;
}


























/*
#include <stdio.h>
#include <stdlib.h>

unsigned int var =4;




int main()
{
    //printf("enter var :");
    //scanf("%i" ,&var);

    unsigned int *ptr =(unsigned int*)malloc( 5);
    printf("add of ptr 0x%x\n", ptr);

      /*                           malloc()
      Malloc() function will create a single block of memory of size specified by the user.
      Malloc function contains garbage value.

    printf("content of ptr %i \n", *ptr);
    *ptr = 66;
    printf("content of ptr %i \n", *ptr);
    ptr++;
    printf("add of ptr 0x%x\n", ptr);

    if(NULL == ptr){/* in case of no enough memory
        printf("Error\n");
        exit(0);
    }
    unsigned int counter = 0;
    for(counter=0; counter<var; counter++){
        ptr[counter] = counter;

    }

    for(counter=0; counter<var; counter++){
        printf("Value = %i\n", ptr[counter]);
    }
     free(ptr);

//---------------------------------------------------------------------------


    printf("--------------\n");

     unsigned int *ptr2 = (unsigned int *)calloc(var , sizeof(int));
    printf("ptr2 = 0x%X\n", ptr2);

    /*in calloc initial value in memory content 0 */
    /*                                  calloc()
     Calloc() function can assign multiple blocks of memory for a variable.
     The memory block allocated by a calloc function is always initialized to zero.

    if(NULL == ptr){/* in case of no enough memory
        printf("Error\n");
        exit(0);
    }
     for(counter=0; counter<var; counter++){
        printf("Value = %i\n", ptr2[counter]);
    }
     free(ptr2);
    return 0;
}





*/






