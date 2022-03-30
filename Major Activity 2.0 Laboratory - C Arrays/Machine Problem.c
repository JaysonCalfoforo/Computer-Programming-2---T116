#include<stdio.h>
void main(){

        int ID = 1010;
        int PIN = 1100;
        
        printf("Enter ID#: ");
        scanf("%d",&ID);

        switch(ID) {
            case 1010:
                printf("Enter PIN: ");
                scanf("%d",&PIN);
            break;
            
            default:
                printf("Invalid ID number");
            }
            getchar();
            
        switch(PIN){
            case 1100:
                printf("\nYou have successfully logged in\n");
                printf("ID#: 1010\n");
            break;
                  
            default:
                printf("Invalid PIN");
            break;
        }   
}