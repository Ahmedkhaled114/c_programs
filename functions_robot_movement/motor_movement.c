
#include "motor_movement.h"



static void robot_calibiration (void){
    printf("robot_calibiration\n");
}


void robot_motor_move_forward (void){
    robot_calibiration();
    printf("robot_motor_move_forward\n");
}

void robot_motor_move_backwrd(void){
    robot_calibiration();
    printf("robot_motor_move_backwrd \n");
}

void robot_motor_move_left(void){
    robot_calibiration();
    printf("robot_motor_move_left \n");
}

void robot_motor_move_right(void){
    robot_calibiration();
    printf("robot_motor_move_right \n");
}

void robot_motor_move_twist_right(void){
    printf("robot_motor_move_twist_right \n");
    robot_motor_movement_speed_50();
}

void robot_motor_move_twist_left(void){
    printf("robot_motor_move_twist_left \n");
    robot_motor_movement_speed_100();
}

void robot_motor_move_stop(void){
    printf("robot_motor_move_stop \n");
}
void robot_move(unsigned char move_selection){
     switch (move_selection){
         case ROBOT_MOVE_STOP        : robot_motor_move_stop();        break;
         case ROBOT_MOVE_TWIST_LEFT  : robot_motor_move_twist_left();  break;
         case ROBOT_MOVE_TWIST_RIGHT : robot_motor_move_twist_right(); break;
         case ROBOT_MOVE_RIGHT       : robot_motor_move_right();       break;
         case ROBOT_MOVE_LEFT        : robot_motor_move_left();        break;
         case ROBOT_MOVE_FORWARD     : robot_motor_move_backwrd();     break;
         case ROBOT_MOVE_BACKWRD     : robot_motor_move_backwrd();     break;
         default: robot_motor_move_stop();

     }
}



unsigned char robot_move_return_status(unsigned char move_selection){
     switch(move_selection){

         case ROBOT_MOVE_STOP        : robot_motor_move_stop();        return 1;
         case ROBOT_MOVE_TWIST_LEFT  : robot_motor_move_twist_left();  return 1;
         case ROBOT_MOVE_TWIST_RIGHT : robot_motor_move_twist_right(); return 1;
         case ROBOT_MOVE_RIGHT       : robot_motor_move_right();       return 1;
         case ROBOT_MOVE_LEFT        : robot_motor_move_left();        return 1;
         case ROBOT_MOVE_FORWARD     : robot_motor_move_backwrd();     return 1;
         case ROBOT_MOVE_BACKWRD     : robot_motor_move_backwrd();     return 1;
         default: robot_motor_move_stop();                             return 0;

     }

     return 0;
}







