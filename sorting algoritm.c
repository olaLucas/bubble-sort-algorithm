#include <stdio.h>

void swap(int *x, int *y)
{
    int swap = *x;
    *x = *y;
    *y = swap;
}

void sort(int array[], int arraySize)
{
    int min_index = 0;

    for (int i = 0; i < arraySize - 1; i++)
    {
        for (int j = i + 1; j < arraySize; j++)
        {
            if (array[j] < array[i])
            {   
                if (j != i)
                {
                    swap(&array[j], &array[i]);
                }   
            }
        }
    }
}

void printing(int array[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n\n");
}

int main(void)
{
    int array[10] = {9,3,2,6,8,10,4,1,7,5};
    int arraySize = sizeof(array)/sizeof(array[0]);

    sort(array, arraySize);
    printing(array, arraySize);

    return 0;
}
