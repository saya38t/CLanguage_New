/* cast01.c */

#include <stdio.h>

int main()
{
    int a = 10, b=4;
    double c;

    c = a/b;
    
    printf("%d ÷ %d = %f...(1)\n",a,b,a/b);
    printf("%d ÷ %d = %f...(2)\n",a,b,c);
    printf("%d ÷ %d = %f...(3)\n",a,b,(double)a/b);

    return 0;
}