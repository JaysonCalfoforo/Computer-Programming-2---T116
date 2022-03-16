#include<stdio.h>
void convert(int, int);

int main()
{
        int num;
        printf("Enter Decimal Integer: ");
        scanf("%d", &num);
        printf("\nBinary: ");
        convert(num, 2);
        printf("\n");
        printf("\nOctal: ");
        convert(num, 8);
        printf("\n");
        printf("\nHexadecimal: ");
        convert(num, 16);
        printf("\n");

        return 0;
}

void convert (int num, int base)
{
        int rem = num%base;

        if(num==0)
                return;
        convert(num/base, base);

        if(rem < 10)
                printf("%d", rem);
        else
                printf("%c", rem-10+'A' );
}