/* format04.c */

#include <stdio.h>
#include <float.h>

int main()
{
    double pai = 3.14159265398979;
    int mon = 2;
    float flt = 1.2f;

    printf("%5.2f\n", flt);
    printf("%-5.2f\n", flt);
    printf("%05.2f\n",flt);
    printf("%+08.2f\n", flt);
    printf("%-08.2f\n", flt);

    printf("%d\n", mon=3);

    printf("%e\n",pai);

    printf("%08.2f\n",pai);
    printf("%05d\n",mon);

    printf("円周率は%fです\n",pai);
    printf("円周率は%010.2f\n",pai);
    printf("円周率は%-10.2f\n",pai);
    printf("円周率は%10.2f\n",pai);
    return 0;
}