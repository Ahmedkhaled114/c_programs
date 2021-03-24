#include "motor_movement_speed.h"

#define ROBOT_MOVE_STOP        0u
#define ROBOT_MOVE_FORWARD     1u
#define ROBOT_MOVE_BACKWRD     2u
#define ROBOT_MOVE_LEFT        3u
#define ROBOT_MOVE_RIGHT       4u
#define ROBOT_MOVE_TWIST_LEFT  5u
#define ROBOT_MOVE_TWIST_RIGHT 6u

extern void robot_motor_move_forward(void);
extern void robot_motor_move_backwrd(void);
extern void robot_motor_move_left(void);
extern void robot_motor_move_right(void);
extern void robot_motor_move_twist_right(void);
extern void robot_motor_move_twist_left(void);
extern void robot_motor_move_stop(void);
extern void robot_move(unsigned char move_selection);
extern unsigned char robot_move_return_status(unsigned char move_selection);
