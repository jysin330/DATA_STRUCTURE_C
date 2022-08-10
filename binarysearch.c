#include <stdio.h>
void binarysearch(int array[], int size, int num)
{

    int high = (size - 1);
    int avg, low = 0;
    avg = (high + low) / 2;
    while (avg != 0)
    {
        if (avg == low || avg == high || array[0]>num)
        {
            printf("element not found");

            break;
        }

        if (array[low] == num || array[high] == num)
        {
            printf("element found at ");
            if (array[low] == num)
            {
                printf("array[%d]=%d", low, num);
            }
            else if (array[high] == num)
            {
                printf("array[%d]=%d", high, num);
            }
            break;
        }
        else if (array[avg] == num)
        {
            printf("element found at ");
            printf("array[%d]=%d", avg, num);
            break;
        }

        if (num < array[avg])
        {
            high = avg;
        }
        else if (num > array[avg])
        {
            low = avg;
        }
        avg = (high + low) / 2;
    }
}

int main()
{
    int n, arr[10];
    printf("enter the size of aarray : ");
    scanf("%d", &n);
    printf("elements in array aarray : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int element;
    printf("the element we have to search ");
    scanf("%d", &element);
    binarysearch(arr, n, element);
    return 0;
}