#include <stdio.h>
#include <stdlib.h>
#include "judge.h"

int main(){
    char tictactoe[3][3] = {{'\0'}};
    char player1, player2;
    char *winner = (char*) calloc(1, 1);
    int count = 1, x, y;

    printf("請輸入先手玩家所使用之符號或字母。\n");
    scanf("%c", &player1);
    printf("請輸入後手玩家所使用之符號或字母。\n");
    scanf("\n%c", &player2);
    printf("\n格式:\n");
    printf("1 1 | 1 2 | 1 3\n");
    printf("---------------\n");
    printf("2 1 | 2 2 | 2 3\n");
    printf("---------------\n");
    printf("3 1 | 3 2 | 3 3\n\n");


    printf("=========================================================================================\n");
    printf("                                                         ##                         ##\n");
    printf("                                                         ##                         ##\n");
    printf("  ### ##   ####    ##  ##    ####              #####    #####    ####    ######    #####\n");
    printf(" ##  ##       ##   #######  ##  ##            ##         ##         ##    ##  ##    ##\n");
    printf(" ##  ##    #####   ## # ##  ######             #####     ##      #####    ##        ##\n");
    printf("  #####   ##  ##   ##   ##  ##                     ##    ## ##  ##  ##    ##        ## ##\n");
    printf("     ##    #####   ##   ##   #####            ######      ###    #####   ####        ###\n");
    printf(" #####\n");
    printf("=========================================================================================\n");

    printf("\n那麼，請先手玩家開始輸入。\n");
    printf("請輸入欲填入的編號(x, y)，以空格隔開。\n");
    scanf("%d %d", &x, &y);
    tictactoe[x - 1][y - 1] = player1;

    while(!success(tictactoe, winner) && ++count != 9){
        if(count % 2 == 0){
            printf("輪到後手玩家。\n");
            printf("請輸入欲填入的編號(x, y)，以空格隔開。\n");
            scanf("%d %d", &x, &y);
            tictactoe[x - 1][y - 1] = player2;
        }
        else{
            printf("輪到先手玩家。\n");
            printf("請輸入欲填入的編號(x, y)，以空格隔開。\n");
            scanf("%d %d", &x, &y);
            tictactoe[x - 1][y - 1] = player1;
        }
    }

    if(count == 9){
        printf("平手!");
    }
    else{
        if(*winner == player1){
            printf("先手玩家勝利!\n");
            printf("總共走了%d步。\n", count);
        }
        else{
            printf("後手玩家勝利!\n");
            printf("總共走了%d步。\n", count);
        }
    }

    #ifdef WIN32
    system("pause");
    #endif
}