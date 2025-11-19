 #include <stdio.h>
  int main()
{
    int n;
       printf("Enter number of elements: ");
       scanf("%d", &n);
       int arr[n];
         printf("Enter elements:\n");
           for(int i = 0; i < n; i++)
             scanf("%d", &arr[i]);
   int max_sum = arr[0], curr_sum = 0;
    for(int i = 0; i < n; i++)
    {
        curr_sum += arr[i];
          if (curr_sum > max_sum)
             max_sum = curr_sum;
              if (curr_sum < 0)
               curr_sum = 0;
    }
          printf("Largest Subarray Sum = %d\n", max_sum);
}
     
