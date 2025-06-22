// Multiplication table in reverse order
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Multipication table of 10:\n");
    for (int i = 10; i; i--)
    {
        printf("10 x %d =%d\n", i, 10 * i);
    }
    return 0;
}