//A warehouse stores the stock count of 10 different product shelves in an array. Print the shelf stocklevels in reverse order (as if scanning from the back of the warehouse to the front), then let a staff member search for a specific stock count and report which shelf (index) holds it, or that it doesn'texist.
#include <stdio.h>
int main(){
    int shelf[10]={10,34,22,32,43,10,19,89,99,56};
    int search,found=0,location,shelf_num;
    printf("---Scanning---");
    for(int i=9;i>=0;i--){
        shelf_num=i+1;
        printf("Shelf : %d \n Stock Count : %d\n",shelf_num,shelf[i]);

    }
    printf("Scan Complete\n");
    printf("Enter Item To Search ");
    scanf("%d",&search);
    for(int i=0;i<=9;i++){
        if (shelf[i] == search){
            found=1;
            location=i;
         }
        }
    if (found == 0){
        printf("Search Not Found");
    }
    else{
        printf("Search Found At Location : %d",location);
    }
    return 0 ;
    

}