#include<stdio.h>

int main()
{
    int rpm = 3000, seconds = 60, degrees = 360, d;
         
    d = 3000 / 60 * 360;
    printf("\n rpm / sec * deg = %d", d);
    printf("\n %d degrees per second", d);
    return 0;
}
