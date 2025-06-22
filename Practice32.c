// calling array with function
#include <stdio.h>
void printArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, *(ptr + i));
    }
}

int main()
{
    int arr[] = {1, 2, 3, 45, 57, 80, 76};
    printArray(arr, 7);
    return 0;
}