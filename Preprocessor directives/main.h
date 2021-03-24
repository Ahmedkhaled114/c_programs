#ifndef MAIN_USER  //file gard
#define MAIN_USER

#define PI 3.14
#define TEST_MODE (11U)
#define MY_CHAR 'A'
#define MY_NAME ("Ahmed")
#define BUFFER_SIZE 100
#define MAX_NUMBERS 100
#define NUMBERSs 1, 2, 3
#define NUMBERS 1,\
                2,\
                3
#define NUMBER NUMBER_ONE
#define NUMBER_ONE 500U

#define SUM(X,Y) (X+Y)
#define MIN(X,Y) ((X) < (Y)? (X) : (Y))
#define AGE_SEC(AGE) (AGE*365*24*60*60)

#define CLEAR_BIT(REG,BIT) (REG &= ~(1 << BIT))
#define SET_BIT(REG,BIT) (REG |= (1 << BIT))
#define TOGGEL_BIT(REG,BIT) (REG ^= (1 << BIT))

//#define DEBUG_MODE
#define LCD_MODE 8



#define SYSTEM_TYPE1

#define SYSTEM 5
#if (SYSTEM==1)
#include "system1.h"
#elif (SYSTEM==2)
#include "system2.h"
#elif (SYSTEM==3)
#include "system3.h"
#endif
#undef SYSTEM

#define USER_SYSTEM "user_system.h"
#include USER_SYSTEM

#define VAR 1
#undef VAR
#if defined(VAR)
#error VAR is defined.
#endif // defined

#define VAR 1
#if !defined(VAR)
#error VAR is not defined.
#endif // defined

#define STRING1 "Ahmed"
#define STRING2 "Khaled"
#define AHMED_NAME STRING1 STRING2


#endif // MAIN_USER
