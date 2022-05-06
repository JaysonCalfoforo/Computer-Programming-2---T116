#include <stdio.h>
 
int main()
{
  
    float f,c,k;
    int choice;
 
    printf("[1] Convert temperature from Fahrenheit to Celsius."); 
    printf("\n[2] Convert temperature from Celsius to Fahrenheit.");
    printf("\n[3] Convert temperature from Celsius to Kelvin.");
    printf("\n[4] Convert temperature from Kelvin to Celsius.");
    printf("\n[5] Convert temperature from Kelvin to Fahrenheit.");
    printf("\n[6] Convert temperature from Fahrenheit to Kelvin.");
    printf("\nEnter your choice (1,2,3,4,5,6): ");
    scanf("%d",&choice);
 
    if(choice ==1){
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f",&f);
        c= (f - 32) / 1.8;
        printf("Temperature in Celsius: %.2f",c);
    }
    else if(choice==2){
        printf("\nEnter temperature in Celsius: ");
        scanf("%f",&c);
        f= (c*1.8)+32;
        printf("Temperature in Fahrenheit: %.2f",f);
    }
    else if(choice==3){
        printf("\nEnter temperature in Celsius: ");
        scanf("%f",&c);
        k= c+273.15;
        printf("Temperature in Kelvin: %.2f",k);
    }
    else if(choice==4){
        printf("\nEnter temperature in Kelvin: ");
        scanf("%f",&k);
        c= k-273.15;
        printf("Temperature in Celsius: %.2f",c);
    }
      else if(choice==5){
        printf("\nEnter temperature in Kelvin: ");
        scanf("%f",&k);
        f= (k-273.15)*9/5+32;
        printf("Temperature in Fahrenheit: %.2f",f);
    }
    else if(choice==6){
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f",&f);
        k= (f-32)*5/9+273.15;
        printf("Temperature in Kelvin: %.2f",k);
    }
    else{
        printf("\nInvalid Choice !!!");
    }
    return 0;
}
    