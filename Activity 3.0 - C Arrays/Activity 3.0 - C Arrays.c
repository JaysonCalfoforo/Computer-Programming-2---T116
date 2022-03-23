#include <stdio.h>
int main() {
    int n, i;
    float num[10], sum = 0, avg;

    printf("Enter the size of the Array: ");
    scanf("%d", &n);

    while (n > 10 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("\nEnter Element %d: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum;
    printf("\nSum of all array elements = %.2f", avg);
    return 0;
}
