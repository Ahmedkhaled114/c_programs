
typedef unsigned char uint8_t ;
typedef unsigned short uint16_t ;
typedef unsigned int uint32_t ;
typedef signed char suint8_t ;
typedef signed short suint16_t ;
typedef signed int suint32_t ;


typedef struct Family_Information {

     char f_name [20];
     char m_name [20];
}Family_t;

typedef struct Person {

     unsigned int id;
     float degree;
     char name [20];
     char address [30];
     Family_t family ;
     struct Person *fiancee;

} Person_t ;

void print_person_data ( Person_t person );
Person_t get_person_from_user(void);
Person_t get_person_from_user_as_aparameter(Person_t person);
void print_person_data_ptr ( Person_t *person );
