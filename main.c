#include <kipr/wombat.h>
#include <create_lib.h>
#include <god_lib.h>
#include <locolib.h>
/*square_up(int ending,int speed);
drive(int speed,int x(distance));
turn(int speed,int deg, int rad);
smart_servo(part,percentage,1.5,0); don't forget msleep!!!!!
main functions used in this code for right now*/

int main()
{
    is_create();
    
    square_up(2,200);
    drive(200,8);
    turn(200,-90,360);
    smart_servo(table,50,1.5,0);
    msleep(2000);
    
    
    printf("Hello World\n");
    return 0;
}
