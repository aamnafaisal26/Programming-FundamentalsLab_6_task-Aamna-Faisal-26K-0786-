//A person deposits money and it grows using compound interest. Given the number of years, calculatehow much a sum of money grows if it's multiplied by a fixed growth factor each year (this isessentially a factorial-style repeated multiplication).
#include <stdio.h>
int main(){
    int year;
    float interest=1.15,money;
    printf("Deposited Amount");
    scanf("%f",&money);
    printf("Please Enter Year");
    scanf("%d",&year);
    printf("15 percent Interest Applied Per Year\n");
    for(int i = 1; i<=year;i++){
        money=money*interest;
        
    }
    printf("Your Amount is %.2f",money);
    return 0;
}