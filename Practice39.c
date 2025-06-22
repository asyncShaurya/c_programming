//Create a string using "" and print its content using a loop.
#include <stdio.h>
int main()
{
    char str[] = "Shaurya";
    //char str[] ={'S','h','a','u','r','y','a','\0'};
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}