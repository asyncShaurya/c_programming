// area and volume of circle

#include <stdio.h>
int main()
{
    int radius;
    printf("Enter the value of radius \n");
    scanf("%d", &radius);
    printf("the area of circle is %f\n", 3.14 * radius * radius);
    int height = 3;
    printf("Volume of the cylinder is %f\n", 3.14 * radius * radius * height);
    return 0;
}