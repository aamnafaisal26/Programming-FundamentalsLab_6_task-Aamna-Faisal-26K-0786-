//A university's result-entry portal must ensure a data-entry clerk cannot submit a mark outside the 0–100 range. Keep asking the clerk to re-enter the mark until it is valid, then declare the student Pass(≥50) or fail.
#include <stdio.h>
int main(){
    int marks;
    do{
        printf("Enter Marks(0-100 inclusive)KEEP RANGE IN MIND");
        scanf("%d",&marks);
    }while (marks < 0 || marks > 100);
    if (marks>=50){
        printf("PASS");
    }
    else{
        printf("FAIL");
    }
    return 0;
}