#include <kipr/wombat.h>
#include <Karaararara.h>
#include <constants.h>
#include <create_lib.h>
#include <god_lib.h>
#include <locolib.h>
#include <run_functions.h>
/*square_up(int ending,int speed);
drive(int speed,int x(distance));
turn(int speed,int deg, int rad);
smart_servo(part,percentage,1.5,0); don't forget msleep!!!!!
main functions used in this code for right now*/

int main()
{
    is_create();
    
    //driving to get the first pom
    square_up(2,200);
    drive(200,14);
    turn(200,-90,360);
    drive(-200,10);
    //getting claw ready to get the pom on top of the stack
    smart_servo(table,70,1.5,0);
    smart_servo(arm,70,1.5,0);
    smart_servo(claw,85,1.5,0);
    msleep(2000);
    drive(100,4);
    //grabing first on top and placing in starting box
    smart_servo(claw,5,1.5,0);
    msleep(2000);
    smart_servo(arm,40,1.5,0);
    msleep(2000);
    turn(200,-90,360);
    square_up(2,200);
    //drive(200,5);
    smart_servo(claw,70,1.5,0);
    msleep(2000);
    //getting ready to grab the three poms on the bottom
    drive(-200,7);
    turn(200,90,360);
    drive(-200,5);
    smart_servo(table,87,1.5,0);
    smart_servo(arm,90,1.5,0);
    smart_servo(claw,95,1.5,0);
    msleep(2000);
    //grabing and move the poms to their spot
    drive(100,5);
    smart_servo(claw,7,1.5,0);
    msleep(2000);
    smart_servo(table,50,1.5,0);
    smart_servo(arm,40,1.5,0);
    msleep(2000);
    turn(200,90,360);
    smart_servo(claw,85,1.5,0);
    msleep(2000);
    //getting ready to hit next stack
    drive(200,3);
    turn(200,-90,360);
    drive(-200,6);
    smart_servo(table,70,1.5,0);
    msleep(2000);
    drive(200,3);
    turn(200,30,360);
    
    
    printf("Hello World\n");
    return 0;
}
