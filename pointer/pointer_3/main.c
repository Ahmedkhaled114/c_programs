#include <stdio.h>
#include <stdlib.h>

      /********* pointer to function *********/

void print_ahmed (void);
void print_alaa (void);
void (*ptr) (void);    // pointer to function

//================================================================
int return_summing (int num_1 , int num_2 );
// pointer to function with i/p and o/p
int (*ptr_return_summing) (int , int ) = return_summing;
//================================================================
     /* array of two elements each element is a
           pointer point to function */

void (*arr_ptr[2]) (void) = { print_ahmed , print_ahmed };
//================================================================
             /* pass a function to function
                by using pointer to function*/

void print_name (void (*ptr) (void));

//================================================================
            /** example on call back function **/
unsigned int Led = 0;
void led_on1(void);
void led_on2(void);
void led_on3(void (*ptr_led_confiramtion)(void));
void led_confiramtion(void);
//================================================================
/* Complex decleration */
void (*fun_ptr[2])(void(*fun_ptr7[3])(void));


/**-------------------------------------------------------------**/

int main()
{

   print_ahmed();
   printf("0x%x\n", print_ahmed );
   ptr = print_ahmed ;
   ptr();
   ptr = print_alaa ;
   (*ptr)();
   printf("=============================\n");

/*-------------------------------------------------------------*/

   int sum = return_summing(3,3);
   printf("suming is = %i \n", sum);
   sum = ptr_return_summing(5,2);
   printf("suming is = %i \n", sum);
   sum =(*ptr_return_summing)(5,3);
   printf("suming is = %i \n", sum);
   printf("=============================\n");

/*-------------------------------------------------------------*/

   arr_ptr[0]=print_ahmed;
   arr_ptr[1]=print_alaa;
   arr_ptr[0]();
   arr_ptr[1]();

   (*arr_ptr[0])();
   (*arr_ptr[1])();

   for (unsigned int counter = 0 ; counter <2 ; counter++){
        (*arr_ptr[counter])();
   }
   printf("=============================\n");

/*-------------------------------------------------------------*/

   print_name (print_ahmed);
   print_name (print_alaa);
   printf("=============================\n");

/*-------------------------------------------------------------*/

    printf("Led = %i\n", Led);
    led_on1();
    printf("Led = %i\n", Led);

    return 0;
}

/**-------------------------------------------------------------**/

void print_ahmed (void) {printf("ahmed\n");}

void print_alaa (void) {printf("alaa\n");}

int return_summing (int num_1 , int num_2 ){

    return num_1 + num_2;

}
void print_name (void (*ptr) (void)){
     printf("starting print ur name :");

     (*ptr)(); /** call back function **/

}
//--------------------------------------------------------

       /** example on call back function **/

void led_on1(void){
    led_on2();
}

void led_on2(void){
    led_on3(led_confiramtion);
}

void led_on3(void (*ptr_led_confiramtion)(void)){
    printf("Led ON\n");
    (*ptr_led_confiramtion)();
}

void led_confiramtion(void){
    Led = 1;
}
//--------------------------------------------------------

