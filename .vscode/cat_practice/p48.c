/* format03.c */

#include <stdio.h>

int main()
{
    double a = 0.5, b= 10.5;
    int c = 215, d;
    char e = 'A';

    printf("%f+%f=%f\n",a,b,a+b);
    d=c+11;
    printf("cの値は%dでこれに11を加えると%dとなります\n",c,d);
    printf("eには\"%c\"が代入されています。\n",e);

    return 0;
}