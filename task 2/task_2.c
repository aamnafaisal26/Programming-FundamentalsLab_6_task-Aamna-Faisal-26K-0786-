//A teacher has n students in a class. Take n from the user, then take each student's test score (out of 100). Print the class's total score and average score.
#include <stdio.h>
int main(){
    int n,score,sum=0;
    float avg;
    printf("How Many Students");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        printf("Enter Score of Student %d out of 100\n",i);
        scanf("%d",&score);
        sum+=score;

    
    }
    avg=sum/n;
    printf("sum is : %d\n",sum);
    printf("average is : %.2f",avg);
    return 0;

}