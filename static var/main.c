#include <stdio.h>
#include <stdlib.h>
unsigned int var = 7 ;

void print_var (void)
{
    unsigned int var = 1 ;

    printf("var=%i\n",var) ;
    var ++ ;
    printf("var=%i\n",var) ;

  //===============================================

    static unsigned int s_var = 1 ;

    printf("s_var=%i\n",s_var) ;
    s_var ++ ;
    printf("s_var=%i\n",s_var) ;
    printf("----------------------\n");
}

int main()
{
    printf("var=%i\n",var) ;
    printf("----------------------\n");
    print_var();
    print_var();
    print_var();
    return 0;
}
