#include <stdio.h>
#include <stdlib.h>

char operation ;
unsigned int state ;

int main()
{
    printf("enter the operation \n");
    scanf( "%c" , &operation ) ;

    switch(operation) {

    case '+' :
        printf("operation is %c \n ", operation) ;
        break ;

    case '-' :
        printf("operation is %c \n ", operation) ;
         break ;

    case '*' :
        printf("operation is %c \n ", operation) ;
         break ;

    case '/' :
        printf("operation is %c \n ", operation) ;
         break;

    default:
        printf("invalid value ") ;

    }

 printf("xxxxxxx ") ;
    return 0;
}
