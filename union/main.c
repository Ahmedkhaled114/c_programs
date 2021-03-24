#include <stdio.h>
#include <stdlib.h>



typedef union temp_storage{
    unsigned int test1;
    float test2;
    char test4[4];
}temp_storage_t;

temp_storage_t temp_storage1;

//------------------------------------------------------------------

typedef union register_8bits{
    unsigned char register_8bits;
    struct register_bits{
        unsigned char bit0 : 1;
        unsigned char bit1 : 1;
        unsigned char bit2 : 1;
        unsigned char bit3 : 1;
        unsigned char bit4 : 1;
        unsigned char bit5 : 1;
        unsigned char bit6 : 1;
        unsigned char bit7 : 1;
    }bits;
}register_8bits_t;

//------------------------------------------------------------------

typedef union register_16bits{
    unsigned short register_16bits;
    struct register_bits1{
        unsigned char bit0 : 1;
        unsigned char bit1 : 1;
        unsigned char bit2 : 1;
        unsigned char bit3 : 1;
        unsigned char bit4 : 1;
        unsigned char bit5 : 1;
        unsigned char bit6 : 1;
        unsigned char bit7 : 1;
        unsigned char bit8 : 1;
        unsigned char bit9 : 1;
        unsigned char bit10 : 1;
        unsigned char bit11 : 1;
        unsigned char bit12 : 1;
        unsigned char bit13 : 1;
        unsigned char bit14 : 1;
        unsigned char bit15 : 1;
    }bits;
    struct register_bits1_byte{
        unsigned char byte0 : 8;
        unsigned char byte1 : 8;
    }byte;
}register_16bits_t;

int main()
{


    printf("%i\n", sizeof(temp_storage1));// size of union = size of the largest var in it
    temp_storage1.test1 = 4225;
    temp_storage1.test1 *= 4;
    printf("value = %i\n", temp_storage1.test1);


    temp_storage1.test2 = 3.4;
    temp_storage1.test2 *= 2.3;
    printf("value = %0.5f\n", temp_storage1.test2);

    temp_storage1.test4[0] = 'a';
    temp_storage1.test4[1] = 'l';
    temp_storage1.test4[2] = 'a';
    temp_storage1.test4[3] = 'a';
    temp_storage1.test4[4] = '\0';
    printf("value = %s\n", temp_storage1.test4);

    temp_storage_t *ptr_temp_storage1 =&temp_storage1;
    printf("value = %s\n", ptr_temp_storage1->test4);

//-----------------------------------------------------------------

    printf("-----------------\n");
    register_8bits_t reg1;
    reg1.register_8bits = 0x55;

    printf("reg1.bits.bit0 = %i\n", reg1.bits.bit0);
    printf("reg1.bits.bit0 = %i\n", reg1.bits.bit1);
    printf("reg1.bits.bit0 = %i\n", reg1.bits.bit2);
    printf("reg1.bits.bit0 = %i\n", reg1.bits.bit3);

    printf("0x%X\n", &reg1);
    reg1.bits.bit0 = 0;
    printf("register_8bits now =%i\n", reg1.register_8bits);
    printf("-----------------\n");

//------------------------------------------------------------------


    register_16bits_t reg2;
    reg2.register_16bits = 0xAABB;
    printf("0x%X\n", reg2.register_16bits);
    reg2.byte.byte0 = 0x11;
    reg2.byte.byte1 = 0x22;
    printf("0x%X\n", reg2.register_16bits);
    reg2.bits.bit0 = 0;
    printf("0x%X\n", reg2.register_16bits);

    return 0;
}
