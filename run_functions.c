#include <kipr/wombat.h>
#include <constants.h>
#include <create_lib.h>
#include <god_lib.h>
#include <locolib.h>
#include <run_functions.h>

int god_start(){
	is_create();
    reset_timer(1);
    return pom_sort();
}

int pom_sort(){
	smart_servo(shifter,50,2,0);
    smart_servo(claw,1,2,0);
    smart_servo(arm,60,2,0);
    msleep(2000);
    square_up(2,250);
    msleep(50);
    drive(300,11);
    turn(200,-90,0);
    smart_servo(arm,95,1,0);
    drive(-300,6);
    drive(300,5);
    msleep(300);
    smart_servo(claw,99,1,0);
    msleep(900);
    smart_servo(arm,70,1,0);
    msleep(400);
    smart_servo(shifter,1,1,0);
    drive(-300,9);
    msleep(400);
    turn(200,-90,0);
    smart_servo(claw,1,1,0);
    msleep(800);
    square_up(2,300);
    drive(-300,3);
    turn(300,90,0);
    smart_servo(shifter,99,2,0);
    smart_servo(arm,99,1,0);
    drive(-300,3);
    drive(300,4);
    smart_servo(claw,99,1,0);
    msleep(1000);
    drive(-300,4);
    turn(200,90,0);
    smart_servo(claw,1,1,0);
    msleep(900);
    smart_servo(shifter,50,1,0);
    smart_servo(arm,1,1,0);
    msleep(500);
    turn(200,-90,0);
    return 0;
}