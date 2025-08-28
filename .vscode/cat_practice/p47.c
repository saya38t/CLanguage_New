/* format01.c */

#include <stdio.h>

int main()
{
    int a, b, c;

    a=10;/*変数aに10を代入*/
    b=15;/*変数bに15を代入*/

    c=a+b;

    printf("%dたす%dは%dです。\n",a, b, c);
    /* format02.c */
    printf("%dたす%dは%dです。\n",a,b,a+b);

    return 0;
}