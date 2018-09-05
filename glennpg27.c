/*a program that calculates how much of a bonus you get if you give 15% to charity
 pg 27*/
#include <stdio.h>

int main(void)
{
    float a , b;

    printf("how much of a bonus did you get?\n");
    scanf(" %f", &a);
    b=.85*a;
    printf(" if you give 15 percent to charity, you will still");
    printf("have %.2f.\n",b);
    return 0;
}