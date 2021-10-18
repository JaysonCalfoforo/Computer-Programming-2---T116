#include<stdio.h>

int main (){
int temp;
    printf("input temperature:");
    scanf("%d", &temp);
if(temp < 0){
    printf("freezing weather.");
}
else if(temp >= 0 && temp <= 10){
    printf("very cold weather.");
}
else if(temp >= 10 && temp <= 20){
    printf("cold weather.");
}
else if(temp >= 20 && temp <= 30){
    printf("normal weather.");
}
else if(temp >= 30 && temp <= 40){
    printf("hot weather.");
}
else if(temp >= 40){
    printf("very hot weather.");
}
return 0;
}
    