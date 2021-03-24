#include <stdio.h>
#include <stdlib.h>
#include "main.h"

extern Person_t ahmed , doaa ;

Person_t person1 = { 11 , 3.5 , "ramy", "cairo" , "sayed" , "mona" , NULL};

//3

Person_t *ptr_person = &person1 ;
Person_t doaa = {22 , 7.5 , "doaa" , "alex" , "ali", "dddd" , &ahmed };
Person_t ahmed = { 11 , 3.5 , "ahmed", "cairo" , "sayed" , "mona" , &doaa  };

/**=========================================================================**/

int main()
{
  /*
  //1
  print_person_data ( person1 );
  printf ("========================\n");
  Person_t person_0= get_person_from_user();
  printf ("------------------------\n");
  print_person_data ( person_0);
  */

//-------------------------------------------------------------------

   /*
   //2
   printf ("========================\n");
   Person_t person_1 =  get_person_from_user_as_aparameter(person1);
   printf ("------------------------\n");
   print_person_data ( person_1);
    */

//=========================================================================


   //3
   /*printf ("========================\n");
   printf("data= %s\n" , ptr_person -> name);
   printf("data= %i\n" , ptr_person -> id);
   printf ("------------------------\n");
   print_person_data_ptr ( &person1 );*/

   /*
   printf("0x%x\n", &ahmed);
   printf("0x%x\n", &doaa );

   printf("0x%x\n", ahmed.fiancee );
   printf("0x%x\n", doaa.fiancee );
   */

   printf ("============*****===============\n");
   print_person_data_ptr ( &ahmed );




    return 0;
}

/**=========================================================================**/



          //1
void print_person_data ( Person_t person ) {

     printf("name    = %s\n" , person.name);
     printf("F_name  = %s\n" ,person.family.f_name);
     printf("m_name  = %s\n" ,person.family.m_name);
     printf("address = %s\n" , person.address);
     printf("id      = %i\n" , person.id);
     printf("degree  = %0.2f\n" , person.degree);

};

//-------------------------------------------------------------------

Person_t get_person_from_user(void){


    Person_t person;
    printf ("enter id: ");
    scanf("%i", &person.id);
    fflush(stdin);
    printf ("enter name: ");
    scanf("%s", &person.name);
    return person ;
};

//-------------------------------------------------------------------

    //2
Person_t get_person_from_user_as_aparameter(Person_t person){



    printf ("enter id: ");
    scanf("%i", &person.id);
    fflush(stdin);
    printf ("enter name: ");
    scanf("%s", &person.name);
    return person ;
};

//-------------------------------------------------------------------
    //3
void print_person_data_ptr ( Person_t *person ) {

     static counter = 0 ;
     printf("name    = %s\n" , person->name);
     printf("F_name  = %s\n" ,person->family.f_name);
     printf("m_name  = %s\n" ,person->family.m_name);
     printf("address = %s\n" , person->address);
     printf("id      = %i\n" , person->id);
     printf("degree  = %0.2f\n" , person->degree);

     if (person->fiancee && counter==0){
            printf("-------Fiancee details--------\n");
        counter = 1 ;
        print_person_data_ptr ( person->fiancee );
     }
     else if (counter == 1){
        printf("%s is in relation with %s:)\n", person->name,person->fiancee->name);
     }
};
