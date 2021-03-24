#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int var_1 =85 ;

/*
    -Automatic 'A'
    -Manual    'M'
*/


char home_state ='H';


int main()

{  /* printf("var_1 = %i\n", var_1);
    printf("var_2 = %i \t\n", (var_1|(1 <<5)));
    printf("%d", sizeof(printf("Hello world!\n")));*/
 while ('H' == home_state ){

    printf("Home is in the Automatic & Manual Mode\n");
    Sleep(750);
    printf("enter The Mode :\n");
    scanf("%c" , &home_state);
    fflush(stdin);

    while ('M' == home_state){
        printf("Home is in Manual Mode\n");
        Sleep(500);
        scanf("%c" , &home_state);
        fflush(stdin);
    }

    while ('A' == home_state){
        printf("Home is in Automatic Mode\n");
        Sleep(500);
        scanf("%c" , &home_state);
        fflush(stdin);
    }
     scanf("%c" , &home_state);
     fflush(stdin);
 }
    return 0;
}
