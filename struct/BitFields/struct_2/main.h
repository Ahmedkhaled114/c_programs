

typedef unsigned char uint8_t ;
typedef unsigned short uint16_t ;
typedef unsigned int uint32_t ;
typedef signed char suint8_t ;
typedef signed short suint16_t ;
typedef signed int suint32_t ;


typedef struct NonBitFields{
    unsigned char state1; // 1 byte
    unsigned char state2; // 1 byte
}non_bit_fields_t;

typedef struct BitFields{
    /* state1 + state2 < i byte , so can allocated in 1 byte */
     /* <cant reach address of the BitField > */
    unsigned char state1 : 3; // maximum 3 bit
    unsigned char state2 : 3; // maximum 3 bit

}bit_fields_t;



typedef struct BitFields_1{
    /* state1 + state2 < i byte , so can allocated in 1 byte */
     /* <cant reach address of the BitField > */
    unsigned char state1 : 3; // maximum 3 bit
    unsigned char state2 : 3; // maximum 3 bit
    unsigned char state3 ;    // 1 byte - can reach it's address .
    unsigned char state4 : 8; // 1 byte ** (can't) reach it's address .
}bit_fields_t_1;

typedef struct sensor_states{
    unsigned char state1 : 1;
    unsigned char state2 : 1;
    unsigned char state3 : 1;
    unsigned char state4 : 1;
    unsigned char state5 : 1;
    unsigned char state6 : 1;
    unsigned char state7 : 1;
    unsigned char state8 : 1;
}sensor_states_t;

unsigned char read_sensnor_state(unsigned int sensor_id);

