#include <stdio.h>
#include <stdlib.h>

#include "motor_movement.h"

int main()
{
    robot_motor_move_forward();
    robot_motor_move_backwrd();
    robot_motor_move_twist_right();
    robot_motor_move_twist_left ();
    robot_motor_movement_speed_50();

    robot_move(ROBOT_MOVE_STOP);
    unsigned char return_val = robot_move_return_status(ROBOT_MOVE_FORWARD);
          printf("return_val = %i\n", return_val);
    return_val = robot_move_return_status(ROBOT_MOVE_BACKWRD);
          printf("return_val = %i\n", return_val);
    return_val = robot_move_return_status(9);
          printf("return_val = %i\n", return_val);
    return 0;

}
