//Student is pass or fail
#include <stdio.h>
int main()
{
    int physics, chemistry, maths;
    float total;
    printf("Enter Physics marks\n");
    scanf("%d", &physics);

    printf("Enter Chemistry marks\n");
    scanf("%d", &chemistry);

    printf("Enter Maths marks\n");
    scanf("%d", &maths);
    total = (physics + maths + chemistry) / 3;
    if ((total < 40) || physics < 33 || maths < 33 || chemistry < 33)
    {
        printf("Your total percentage is %f and you are fail\n", total);
    }
    else
    {
        printf("Your total percentage is %f and you are pass\n", total);
    }

    return 0;
}