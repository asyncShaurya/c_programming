//print natural number using for loop
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i;
    printf("Enter the number \n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf(" The natural number is %d\n", i);
    }

    return 0;
}