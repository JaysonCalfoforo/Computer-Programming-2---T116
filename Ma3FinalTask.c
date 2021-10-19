#include<stdio.h>

int main(){
    int selection, price, payment, change;
         
    printf("\n Please select your order.");
    printf("\n [1]Pepsi (P100) \n [2]Dr. Pepper (P120) \n [3]Coca-Cola (95)");
    printf("\n Choice:");
    scanf("%d", &selection);
    switch(selection){
    
    case 1: price = 100;
        printf("Input Payment:");
        scanf("%d", &payment);
    if(payment >= price){
        change = payment - price;
        printf("\n Change: %d", change);
        printf("\n You have purchased Pepsi.");
    }
    else{ printf("Insufficient funds!");
    }
    break;
    
    case 2: price = 120;
        printf("Input payment:");
        scanf("%d", &payment);
    if(payment >= price){
        change = payment - price;
        printf("\n Change: %d", change);
        printf("\n You have purchased Dr. Pepper.");
    }
    else{ printf("Insufficient funds!");  
    } 
    break;
    
    case 3: price = 95;
        printf("Input payment:");
        scanf("%d", &payment);
    if(payment >= price){
        change = payment- price;
        printf("\n Change: %d, change");
        printf("\n You have purchased Coca-Cola");
    }
    else{ printf("Insufficient funds!");
    }
    break;
    default: printf("No order found!");
    }
return 0;}