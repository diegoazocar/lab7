#include <stdio.h>
#include <stdlib.h>

int *bubbleSort(int arr[], int n, int numSwaps[])
{
    int tmp, i, j, c = 0;
    int swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                c++;
                swapped = 1;
            }
        }
        printf("Iteration %d: \n", j);
        for (int a = 0; a < n; a++)
        {
            printf("%d ", arr[a]);
        }
        printf("\n");
        numSwaps[i] = c;
        c = 0;

        if (swapped == 0)
            break;
    }
    return numSwaps;
}

int main()
{
    int arr[] = {12, 2, 8, 19, 13, 7, 1, 16};
    int numSwaps[sizeof(arr)];
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ans = bubbleSort(arr, n, numSwaps);

    printf("The number of swaps for each index are: \n");
    for (int a = 0; a < n; a++)
    {
        printf("%d ", ans[a]);
    }
    printf("\n");
    return 0;
}