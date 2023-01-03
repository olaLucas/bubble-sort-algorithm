#include <stdio.h>
#include <stdbool.h>

void swap(int *x, int *y)
{
    int swap = *x;
    *x = *y;
    *y = swap;
}


void sort(int arrSize, int array[])
{
    int min_index = 0;

    for (int i = 0; i < arrSize - 1; i++)
    {
        for (int j = i + 1; j < arrSize; j++)
        {
            min_index = i;
            if (array[j] < array[min_index])
            {  
                min_index = j;

                if (array[min_index != i])
                {
                    swap(&array[min_index], &array[i]);
                }
            }
        }
    }

    for (int i = 0; i < arrSize; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n\n");
}

int main(void)
{
    int array[10] = {5,7,3,2,8,6,4,1,9,10};
    int arrSize = sizeof(array)/sizeof(array[0]);

    sort(arrSize, array);
   
    return 0;
}