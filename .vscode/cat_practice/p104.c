#include <stdio.h>

int main()
{
    int n;
    
    printf("1から5までの整数を入力してください____");
    scanf("%d", &n);

    switch(n){
        case 1:
            printf("あなたは一番小さい数字を入力しましたね\n");
            break;
        case 2:
            printf("今日は良いことがあるでしょう\n");
            break;
        case 3:
            printf("中庸の徳です\n");
            break;
        case 4:
            printf("4は幸せの4\n");
            break;
        case 5:
            printf("あなたは5を選びました\n");
            break;
        default:
            printf("1から5の数字を入力してください\n");
            break;
    }

    printf("これでおしまいです\n");

    return 0;
}