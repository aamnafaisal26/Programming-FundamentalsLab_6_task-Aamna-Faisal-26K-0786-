//A weather station records the temperature (°C) every hour for 8 hours in a day. Store the readings in an array and report the hottest temperature, the coldest temperature, and the second-hottest temperature of the day.
#include <stdio.h>

int main(){
    int temp, hottest_temp=-999, second_hottest_temp=-999, coldest_temp=999;
    int hottest_hour = 0, second_hottest_hour = 0, coldest_hour = 0; 
    int temperature[8];
    
    for(int hour = 1; hour <= 8; hour++){ 
        printf("Enter Temp for Hour %d : ", hour); 
        scanf("%d", &temp);
        temperature[hour-1] = temp; 
        
        if (temp > hottest_temp){
            second_hottest_temp = hottest_temp; 
            second_hottest_hour = hottest_hour;
            hottest_temp = temperature[hour-1];
            hottest_hour = hour;
        }
        else if (temp > second_hottest_temp){
            second_hottest_hour = hour;
            second_hottest_temp = temperature[hour-1];
        }
        
        if (temp < coldest_temp){
            coldest_hour = hour;
            coldest_temp = temperature[hour-1];
        }
    } 

    printf("---SUMMARY---\n");
    for(int hour = 1; hour <= 8; hour++){
        printf("Hour %d : %d -C\n", hour, temperature[hour-1]);
    }
    
    printf("Hottest Hour : %d\n", hottest_hour);
    printf("Hottest Temperature : %d -C \n", hottest_temp);
    printf("Second Hottest Hour : %d \n", second_hottest_hour);
    printf("Second Hottest Temperature : %d -C \n", second_hottest_temp);
    printf("Coldest Hour : %d \n", coldest_hour); 
    printf("Coldest Temperature : %d -C \n", coldest_temp);
    
    return 0;
}
    



