#include <stdio.h>
int main()
{
   int n,i,sum=0;
   printf("enter the number of elememts:");
   scanf("%d",&n);
   int arr[n];
    printf("enter %d  elememts:\n",n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
     for (i = 0; i < n; i++)
     {
         sum=sum+arr[i];
     }
     printf("sum of array elements=%d\n",sum);
     return 0;
}
   
