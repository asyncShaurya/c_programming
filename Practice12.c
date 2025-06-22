//print natural number using do while loop
#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 0;
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    do
    {
        printf("The natural numbers are %d\n", i+1);
        i++;
    } while (i <n );
    return 0;
}