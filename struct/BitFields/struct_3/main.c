#include <stdio.h>
#include <stdlib.h>

typedef struct sensors_value{
    unsigned char sensor_1 : 1;
    unsigned char sensor_2 : 1;
    unsigned char sensor_3 : 1;
    unsigned char sensor_4 : 1;
    unsigned char sensor_5 : 1;
    unsigned char sensor_6 : 1;
    unsigned char sensor_7 : 1;
    unsigned char sensor_8 : 1;
    unsigned char sensor_9 : 4;
     //unsigned char :0;  will make padding and size will b 4 byte.
    unsigned char sensor_11 : 2;
    unsigned char :0; // not effective here
    unsigned char sensor_10;
}sensors_value_t;

int main()
{
   sensors_value_t push_buttons_values;
    printf("sizeof sensors_value_t= %ibyte\n", sizeof(push_buttons_values));
    push_buttons_values.sensor_1 = 1;
    push_buttons_values.sensor_2 = 0;
    push_buttons_values.sensor_3 = 1;
    push_buttons_values.sensor_4 = 0;
    push_buttons_values.sensor_5 = 1;
    push_buttons_values.sensor_6 = 0;
    push_buttons_values.sensor_7 = 1;
    push_buttons_values.sensor_8 = 0;
    push_buttons_values.sensor_9 = 3;
    push_buttons_values.sensor_9 = push_buttons_values.sensor_9 + 2;
    printf("0x%X\n", push_buttons_values);

    printf("push_buttons_values.sensor_9 = %i\n", push_buttons_values.sensor_9);
    push_buttons_values.sensor_9 = 15;
    printf("push_buttons_values.sensor_9 = %i\n", push_buttons_values.sensor_9);
    push_buttons_values.sensor_9 = 16;
    printf("push_buttons_values.sensor_9 = %i\n", push_buttons_values.sensor_9);
    push_buttons_values.sensor_9 = 17;
    printf("push_buttons_values.sensor_9 = %i\n", push_buttons_values.sensor_9);

    printf("-------------------\n");
}
