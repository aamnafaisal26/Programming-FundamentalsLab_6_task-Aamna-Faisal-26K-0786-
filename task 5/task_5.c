//A water tank starts at a given level. Every hour, if the tank has an even number of liters, half the waterdrains out; if it has an odd number, the tank operator adds 3x + 1 liters as an emergency refill rule (aCollatz-style simulation). Simulate until the tank reaches exactly 1 liter, printing the level each hour and the total number of hours taken.
#include <stdio.h>
int main(){
    int hours=0,level;
    printf("Enter The Level :");
    scanf("%d",&level);
    while(level != 1){
        if ((level % 2) == 0){
            level = level/2;
        }
        else{
            level=3*(level) +1;
         }
         hours++;
         printf("Hour %d\n",hours);
         printf("Level %d litres\n",level);
        }
    return 0;

}