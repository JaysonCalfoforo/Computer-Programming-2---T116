#include<stdio.h>

int main()
{
    int n;
    printf("Input Any Positive Integers: ");
    scanf("%d", &n);
    
    while(n > 1){
        //for even numbers
        if(n % 2 == 0){
        n = n / 2;
        printf("Current Given Value is %d\n", n);
        }
        //for odd numbers
        else{ 
        n = n * 3 + 1; 
        printf("Current Given Value is %d\n", n);
        }
    }
    return 0;
}