/* op04.c */

#include <stdio.h>

int main()
{
    double tall = 1.72, weight = 65.2;

    printf("BMIは体重(kg)を身長(m)の２乗で割ったものです\n");
    printf("これが25を超えると肥満です\n");
    printf("たとえば身長%4.2fmで体重%4.2fkgの人では\n",
        tall, weight);
    printf("BMI = %4.2f ÷ (%4.2f × %4.2f)で計算します\n",
        weight,tall,tall);
    printf("その結果は%4.1fでした\n", weight/(tall*tall));

    return 0;
}