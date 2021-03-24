#include <stdio.h>
#include <stdlib.h>

#include "main.h"

int nums[] = {NUMBERS};
int numbers[MAX_NUMBERS];
unsigned char reg = 0x55;
int my_array[] = {11,22,33,44,55};

//-------------------------------------------------------------------------------------------

void print_numbers(int arr_numbers[], int arr_size);
void lcd_init_4bit_mode(void);
void lcd_init_8bit_mode(void);

//--------------------------------------------------------------------------------------------

void system_type1_init(void);
void system_type2_init(void);
void system_type3_init(void);
void system_init(void);

//============================================================================================

int main()
{
    printf("PI_value = %f\n", PI);
    printf("mode = %i\n", TEST_MODE);
    printf("my name %s\n", MY_NAME);

    int *ptr = (int *) malloc(BUFFER_SIZE);
    free(ptr);

    if(MAX_NUMBERS == 100){
        printf("Yes\n");}
    printf("mode = %i\n", NUMBER_ONE);
    printf("mode = %i\n", NUMBER);

    printf("Summing = %i\n", SUM(2,3));
    printf("Summing = %f\n", SUM(2.5,3));
    printf("Min : %i\n", MIN(3,2));
    printf("Min : %i\n", MIN(2,3));
    printf("Age : %i\n", AGE_SEC(28));

    printf("Reg = 0x%X\n", reg);
    // reg = reg & ~(1 << 0);
    CLEAR_BIT(reg,0);
    printf("Reg = 0x%X\n", reg);

//--------------------------------------------------------------------------------------------

    print_numbers(my_array, 5);

//--------------------------------------------------------------------------------------------

        system_init();
    printf("----------\n");

    printf("Ahmed" "khled\n");
    printf("%s\n", AHMED_NAME);


    return 0;
}

//============================================================================================

void print_numbers(int arr_numbers[], int arr_size){
    unsigned int counter = 0;
    printf("Data : \n");
    for(counter=0; counter<arr_size; counter++){
        printf("%i\t", arr_numbers[counter]);
        #ifdef DEBUG_MODE
            printf("print_numbers is running now & number = %i\n", arr_numbers[counter]);
        #endif // DEBUG_MODE
    }
    printf("\n");
}

//-----------------------------------------------------------------------------------------------

void lcd_init_4bit_mode(void){
}

void lcd_init_8bit_mode(void){
}

void lcd_init(void){
    #if (LCD_MODE==4)
    lcd_init_4bit_mode();
    #elif (LCD_MODE==8)
    lcd_init_8bit_mode();
    #else
    #error Wrong LCD MODE.
    #endif
}

//---------------------------------------------------------------------------------------------


void system_type1_init(void){
    printf("System1\n");
    #line 55 "ahmed.c"
    printf("System initialization Done at line %i and file : %s\n", __LINE__, __FILE__);
}
void system_type2_init(void){printf("System2\n");}
void system_type3_init(void){printf("System3\n");}
void system_init(void){
    #ifdef SYSTEM_TYPE1
    system_type1_init();
    #endif // SYSTEM_TYPE1
    #ifdef SYSTEM_TYPE2
    system_type2_init();
    #endif // SYSTEM_TYPE1
    #ifdef SYSTEM_TYPE3
    system_type3_init();
    #endif // SYSTEM_TYPE1
}








