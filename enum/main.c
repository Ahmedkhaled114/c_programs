#include <stdio.h>
#include <stdlib.h>

enum state{
    STATE_NOK,
    STATE_OK1,
    STATE_OK2  ,
    STATE_OK3
}st;

//-----------------------------------------------------------------------------

typedef enum states{
    STATE_NOK1 = 2,
    STATE_OK11,
    STATE_OK22 = 0,
    STATE_OK33
}states_t;

states_t st22;
//-----------------------------------------------------------------------------
typedef enum timer0_prescaller{
    TIMER0_PRESCALLER_DIVID_2,
    TIMER0_PRESCALLER_DIVID_4,
    TIMER0_PRESCALLER_DIVID_8,
    TIMER0_PRESCALLER_DIVID_16,
    TIMER0_PRESCALLER_DIVID_32,
    TIMER0_PRESCALLER_DIVID_64,
    TIMER0_PRESCALLER_DIVID_128,
    TIMER0_PRESCALLER_DIVID_256 = 66
}timer0_prescaller_t;


void timer0_init(timer0_prescaller_t timer0_prescaller){
    switch(timer0_prescaller){
        case TIMER0_PRESCALLER_DIVID_2: printf("Ahmed1\n"); break;
        case TIMER0_PRESCALLER_DIVID_4: printf("Ahmed2\n"); break;
        case TIMER0_PRESCALLER_DIVID_8: printf("Ahmed3\n"); break;
        default : printf("No\n");
    }
}

//-----------------------------------------------------------------------------

enum state print_ahmed(void){
    enum state fun_state = STATE_NOK;
    printf("State = %i\n", fun_state);
    printf("Ahmed Khaled \n");
    fun_state = STATE_OK1;
    printf("State = %i\n", fun_state);
    return fun_state;
}


int main()
{
    enum state ret_state = print_ahmed();
    if(ret_state == STATE_NOK){
        print_ahmed();
    }
    printf("----------------\n");
    enum state ret_status = STATE_NOK;
    for(ret_status=STATE_NOK; ret_status<=STATE_OK3; ret_status++){
        printf("state = %i\n", ret_status);
    }

    printf("----------------\n");
    printf("size = %i\n", sizeof(ret_status));

    return 0;
}
