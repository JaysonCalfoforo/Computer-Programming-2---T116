#include <stdio.h>

int main() 
{
    int m, n, i;
    double p = 1.0;
    printf("Enter X: ");
    scanf("%d",&m);
    printf("Enter Y: ");
    scanf("%d",&n);

    if (n==0) {
        printf("%d ^ %d = %f",m,n,p);
    }

    else if (n > 0) {
        for(i = 0; i < n; i++)
            p*=m;
        printf("%d ^ %d = %f",m,n,p); 
    }

    else { // n < 0
        n = -n;
        for (i = 0 ; i < n ; i++)
            p*=m;
        printf("%d ^ %d = %f", m, -n, 1 / p);
    }
}