#include <stdio.h>
#include <stdlib.h>

//****** pointer and strings ******//

char *ptr = "Ahmed" ;
char *const ptr1 = "Ahmed" ;
char v ;

//-----------------------------------------------

char var = 'd';
char *const ptr2 = &var ;
const char *const ptr3 = &var ;

//-----------------------------------------------

char *names [] = {"ahmed1" , "ahmed2" ,"ahmed3"};
char *const names_1 [] = {"ahmed1" , "ahmed2" ,"ahmed3"};

//-----------------------------------------------
       //****** pointer of pointer ******//
unsigned int num = 66;
unsigned int *ptr_ = &num;
unsigned int **pptr = &ptr_;

//-----------------------------------------------

int main()
{
    printf("string = %s\n", ptr );
    printf("locatoin of pointer = 0x%x\n", &ptr );
    printf("locatoin of Frist element =0x%x\n", ptr );
    printf("content of Frist element = %c\n", *ptr );
    ptr++ ;
    //*ptr = v ; error , string allocate in flash
    printf("content of after inc ptr element = %c\n", *ptr );
    printf("string = %s\n", ptr );
    printf("content of after inc ptr element = %c\n", *(++ptr) );
    printf("string = %s\n", ptr );
    printf("-----------------------------------\n");

//------------------------------------------------------------

    printf("string = %s\n", ptr1 );
    printf("locatoin of pointer = 0x%x\n", &ptr1 );
    printf("locatoin of Frist element =0x%x\n", ptr1 );
    printf("content of Frist element = %c\n", *ptr1 );
    //ptr++ ; can't inc cons pointer
    //*ptr1 = v ;  error , string allocate in flash
    printf("content of after inc ptr element = %c\n", *ptr1 );
    printf("string = %s\n", ptr1 );
    printf("=================================\n");

//=====================================================

    *ptr2 = 'o';
  //*ptr3 = 'a';  error: assignment of read-only location '*ptr3'|

//=====================================================

    printf("%s\n", names[0] );
    printf("%c\n", *(names[0]+1));
    printf("%s\n", names[0] );
    names[0]++;
    printf("%s\n", names[0] );
    printf("-----------------------------------\n");

    printf("%s\n", names_1[0] );
    printf("%c\n", *(names_1[0]+1));
    //names_1[0]++; error: increment of read-only location 'names_1[0]'
    printf("%s\n", names_1[0] );
    printf("-----------------------------------\n");

//======================================================

    printf("Num=%i\n",num);
    printf("Num=%i\n",*ptr_);
    printf("Num=%i\n", **pptr);

    return 0;
}
