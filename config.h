/*
 * General configuration for HoverBot.ino
 * Tested on an Arduino Mega
 */

// HARDWARE
#define PWM_CHANNEL_1 2
#define PWM_CHANNEL_2 3
#define PWM_CHANNEL_3 18
#define LEDPIN 13

#define MOTORDIR_0 1    // Lukas default: -1
#define MOTORDIR_1 -1   // Lukas default: 1


/**
 * Note by Lukas in: 
 * - https://docs.google.com/document/d/1BMKzhPN70OgQfNl87zCoNQgiD5hnJ96jCFjzUalukxU/edit?ts=5ce60720#
 * in "Controller Tuning"
 * **
 * The controller is based on five parameters:
    KP_BALANCE: Determines how much the robot reacts to leaning forward or backward. 
                A high value might lead to tilt oscillations
    KD_BALANCE: Determines how much the robot reacts to the rate of tilt change. 
                It generally dampens oscillations, but a value too high might lead to increased 
                oscillations (mainly due to time lags in the control loop)
    KP_POSITION: Determines how strongly the robot reacts to RC throttle commands
    KP_STEERING: Determines how strongly the robot reacts to RC steering commands
    KD_ORIENTATION: Determines how much the robot tries to counteract turning around 
                    the vertical axis - higher values make going straight easier but turning slower
 */
// CONTROLLER
#define KP_BALANCE 0.35       // Lukas default: 0.4
#define KD_BALANCE -0.03      // Lukas default: -0.065
#define KP_POSITION 0.015     // Lukas default: 0.015       
#define KP_STEERING 0.01      // Lukas default: 0.01
#define KD_ORIENTATION 0.001  // Lukas default: 0.01; my robot enter in loop on vertical axis.
#define TILT_LIMIT 40

// RADIO CONTROL
#define ENGAGE_THRESHOLD 1500
#define PWM_CENTER 1500

// SCHEDULING
#define BLINK_INTERVAL 200
#define CONTROLLER_INTERVAL 10
#define ACTIVATION_INTERVAL 50

// SERIAL
#define BAUDRATE_ODRIVE 115200
#define BAUDRATE_PC 115200
