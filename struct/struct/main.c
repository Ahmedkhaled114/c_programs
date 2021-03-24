#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char uint8_t ;
typedef unsigned short uint16_t ;
typedef unsigned int uint32_t ;

typedef struct Family_Information {

     char f_name [20];
     char m_name [20];
}Family;

struct Person {

     unsigned int id;
     float degree;
     char name [20];
     char address [30];
     Family family ;

} osama , mona;

struct Person ahmed = {12,1.6,"ahmed", "tanta"};
struct Person khaled = {1,4.6,"khaled", "cairo"};
struct Person alaa = {.name = "alaa",.id = 5,.address="alex",.degree = 3.6};
struct Person osama  = {22,4.4,"osama", "cairos"};


int main()
{

    /* memory alignment   */
    printf("size of ahmed = %i\n" , sizeof(ahmed));
    printf(" ahmed id = %i\n" , ahmed.id);
    ahmed.id=11;
    printf(" ahmed id = %i\n" , ahmed.id);
    printf(" khaled id = %i\n" , khaled.id);

    mona=osama;
    printf(" mona.name = %s\n" ,mona.name);
    // mona.name = "mona"; error: assignment to expression with array type|
    strcpy( mona.name , "mona");
    printf(" mona.name = %s\n" ,mona.name);

    strcpy (ahmed.family.f_name,"KHALED");
    printf("ahmed.family.f_name= %s\n" ,ahmed.family.f_name);

    printf("--------------------------------\n");

    print_person_data(ahmed);/** its forbidden due to stack frame */
    return 0;
}

/** its forbidden to pass struct to function */
void print_person_data (struct Person per ) {

     printf(" ahmed name = %s\n" , per.name);
     printf(" ahmed F_name = %s\n" , per.family.f_name);


};
