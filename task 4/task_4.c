//A bank's system needs to verify a 4-to-6 digit PIN entered by a customer. Take the PIN as an integerand, digit by digit, find the sum of its digits and print the PIN reversed (used as a basic checksum/verification step).
#include <stdio.h>
int main(){
    int pin,digit,pin_rev=0,sum=0;
    printf("Enter Pin : ");
    scanf("%d",&pin);
    if(pin<1000 || pin >999999){
        printf("Invalid Pin");
        return 0;
    }
    while(pin >0){
        digit=pin % 10;
        sum+=digit;
        pin=pin/10;
        pin_rev=(pin_rev * 10) +digit;

    }
    printf("Sum : %d\n",sum);
    printf("Reversed : %d",pin_rev);
    return 0;
}