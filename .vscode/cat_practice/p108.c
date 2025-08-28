#include <stdio.h>

int main()
{   
    int c;
    int end = 0;

    while(1){
        printf("*****MENU*****\n"
            "A: ゲーム\n"
            "B: 音楽\n"
            "C: 表計算\n"
            "X: 終了\n"
            "**************\n");
        printf("_____>");

        while(1){
            c = getchar();
            if (c != '\n')
                break;
        }

        switch (c){
            case 'A':
            case 'a':
                printf("\nゲームばかりしないでください\n\n");
                break;
            case 'B':
            case 'b':
                printf("\n音楽が選択されました\n\n");
                break;
            case 'C':
            case 'c':
                printf("\n表計算が選択されました\n\n");
                break;
            case 'X':
            case 'x':
                end = 1;
                break;
            default:
                printf("\n不正な入力です\n\n");
                break;
        }
        
        if (end == 1){
            break;
        }
    }
    printf("\n不正な入力です\n");
    return 0;
}