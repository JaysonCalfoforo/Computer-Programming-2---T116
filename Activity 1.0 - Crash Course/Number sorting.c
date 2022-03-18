    #include <stdio.h>
    int main ()
    {
 
        int number[10];
 
        int i, j, a, n;
        printf("Enter the value of N: ");
        scanf("%d", &n);
 
        printf("Input numbers:\n");
        for (i = 0; i < n; ++i)
	        scanf("%d", &number[i]);
 
 
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (number[i] < number[j])   
            {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a; 
              }
            }
          }
        printf("Sorted list:\n");
 
        for (i = 0; i < n; ++i) 
        {
            printf("%d\n", number[i]);
        }
 
    }  