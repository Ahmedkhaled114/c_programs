#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/************ BitFields **********/

non_bit_fields_t st1;
bit_fields_t st2;
sensor_states_t temp_sensors_state;

int main()
{


    printf("size of st1 = %i\n", sizeof(st1));
    printf("size of st2 = %i\n", sizeof(st2));

    st2.state1 = 3; // maximum value is 7 > 3 bit
    st2.state2 = 6; // maximum value is 7 > 3 bit

    printf("st2.state1 = %i\n", st2.state1);
    printf("st2.state2 = %i\n", st2.state2);


    temp_sensors_state.state1 = read_sensnor_state(0);
    printf("sensors_state1 = %i\n", temp_sensors_state.state1);
    printf("size of  temp_sensors_state = %i\n", sizeof(temp_sensors_state));

    return 0;
}

unsigned char read_sensnor_state(unsigned int sensor_id){
    return 1;
}


