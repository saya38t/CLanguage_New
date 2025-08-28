/* inc01.c */

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 10;

    printf("a = %d\n", a++);
    printf("a = %d\n", a);

    printf("b = %d\n", ++b);
    printf("b = %d\n",b);

    return 0;
}