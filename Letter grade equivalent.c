#include<stdio.h>

int main (){
int num;
    printf("Enter grade: ");
    scanf("%d", &num);
if(num > 0 && num <= 50){
    printf("Your letter grade is F.\n");
}
else if(num >= 50 && num <= 59){
    printf("Your letter grade is E.\n");
}
else if(num >= 60 && num <= 67){
    printf("Your letter grade is D.\n");
}
else if(num >= 68 && num <= 75){
    printf("Your letter grade is B-.\n");
}
else if(num >= 76 && num <= 83){
    printf("Your letter grade is B.\n");
}
else if(num >= 84 && num <= 91){
    printf("Your letter grade is A-.\n");
}
else if(num >= 91 && num <= 100){
    printf("Your letter grade is A.\n");
}
else if(num <= 0){
    printf("Invalid input. Try again.\n");
}
return 0;
}
    