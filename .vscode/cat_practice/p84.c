#include <stdio.h>

int main()
{
    short a= 12, b = 100, c = -50;

    printf("%dを左に1ビットシフト___%d\n", a, a << 1);
    printf(" さらに1ビット左シフト___%d\n", a << 2);
    printf(" さらに1ビット左シフト___%d\n", a << 3);
    printf(" さらに1ビット左シフト___%d\n", a << 4);
    printf("\n");
    printf("%dを右に1ビットシフト___%d\n", b, b >> 1);
    printf("さらに1ビット右シフト___%d\n", b>>2);
    printf("さらに1ビット右シフト___%d\n", b>>3);
    printf("さらに1ビット右シフト___%d\n", b>>4);
    printf("(処理系依存)\n");
    printf("%dを左に1ビットシフト___%d\n", c, c << 1);
    printf("%dを右に1ビットシフト___%d\n", c, c >> 1);

    return 0;
}