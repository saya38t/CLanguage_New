/* inc02.c */

#include <stdio.h>

int main()
{
    int a,b;
    a = b = 10;
    printf("a = %d\n",++a);
    b = b+1;
    printf("b = %d\n", b);
    return 0;
}