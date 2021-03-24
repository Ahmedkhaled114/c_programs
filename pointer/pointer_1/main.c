#include <stdio.h>
#include <stdlib.h>

unsigned int var1 = 3 , var2 = 4 ;
void Swibe_2_Nums (unsigned int num1 , unsigned int num2 );
unsigned int Swibe_2_Nums_call_by_referance(unsigned int *num1 , unsigned int *num2 );
unsigned int *ptr_0=NULL;
//----------------------------------------------------------------------------
void Swibe_2_Nums (unsigned int num1 , unsigned int num2 ){
    num1 = num1^num2;
    num2 = num1^num2;
    num1 = num1^num2;
    printf("var1 now =%i\nvar2 now =%i\n", num1 , num2 );

}
//----------------------------------------------------------------------------
unsigned int Swibe_2_Nums_call_by_referance(unsigned int *num1 , unsigned int *num2 ){
    if (!num1 ||!num2)
    {
        printf("num1 or num2 = null\n");
        return 0;
    }
    else {
    *num1 = *num1^*num2;
    *num2 = *num1^*num2;
    *num1 = *num1^*num2;
    printf("var1 now =%i\nvar2 now =%i\n", *num1 , *num2 );
    return 1;
    }

}


int main()
{
    printf("var1 = %i\nvar2 = %i\n", var1 , var2);
    printf("----------------------------\n");
    Swibe_2_Nums (var1 , var2 );
    printf("var1 = %i\nvar2 = %i\n", var1 , var2);
    printf("----------------------------\n");
    Swibe_2_Nums_call_by_referance(&var1 , ptr_0 );
        Swibe_2_Nums_call_by_referance(&var1 , &var2);
    printf("var1 = %i\nvar2 = %i\n", var1 , var2);

    return 0;
}
