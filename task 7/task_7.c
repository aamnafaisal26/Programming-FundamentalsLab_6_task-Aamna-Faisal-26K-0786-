//A self-service kiosk shows a menu: 1) Add Item, 2) Remove Item, 3) View Total, 4) Checkout. Thekiosk should keep showing this menu and processing the customer's choice repeatedly until they select Checkout, since the menu must appear at least once even for a walk-up customer.
#include <stdio.h>
int main(){
    int choice,price=50,total=0,items=0;
    do{
        printf("---MENU---\n");
        printf("1.Add An Item \n");
        printf("2.Delete An Item\n");
        printf("3.View Total\n");
        printf("4.Checkout\n");
        printf("Enter Your Choice(1-4):");
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                items++;
                total+=price;
                printf("Item Successfully Added\n");
                printf("Current Items : %d\n",items);
                break;
            case 2 :
                items --;
                total-=price;
                printf("Item Removed Successfully\n");
                printf("Current Items : %d\n",items);
                break;
            case 3 :
                printf("Items : %d\n",items);
                printf("Total : %d PKR\n",total);
                break;
            case 4 :
                break;
            default :
                printf("Invalid Choice\n");
                break;
            
                       }

            
    }while (choice != 4) ;
    printf("Checked out");
    return 0;

}