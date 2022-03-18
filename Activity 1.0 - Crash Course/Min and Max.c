#include <stdio.h>

void main()
{
    int arr1[100];
    int i, mx, mn, n;

       printf("Enter numbers: ");
       scanf("%d",&n);

       for(i=0;i<n;i++)
            {
	      printf("element - %d: ",i);
	      scanf("%d",&arr1[i]);
       
       if(arr1[i]<0)
       printf("Invalid input. Try again\n");
	    }

    mx = arr1[0];
    mn = arr1[0];

    for(i=1; i<n; i++)
    {
        if(arr1[i]>mx)
        {
            mx = arr1[i];
        }


        if(arr1[i]<mn)
        {
            mn = arr1[i];
        }
    }
    printf("Max: %d\n", mx);
    printf("Min: %d\n", mn);
    }
    