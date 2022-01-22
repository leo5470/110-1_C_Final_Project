#include <stdio.h>
#include <stdlib.h>
#include "judge.h"

int main(){
    char tictactoe[3][3] = {{'\0'}};
    char player1, player2;
    char *winner = (char*) calloc(1, 1);
    int count = 1, x, y;

    printf("�п�J���⪱�a�ҨϥΤ��Ÿ��Φr���C\n");
    scanf("%c", &player1);
    printf("�п�J��⪱�a�ҨϥΤ��Ÿ��Φr���C\n");
    scanf("\n%c", &player2);
    printf("\n�榡:\n");
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

    printf("\n����A�Х��⪱�a�}�l��J�C\n");
    printf("�п�J����J���s��(x, y)�A�H�Ů�j�}�C\n");
    scanf("%d %d", &x, &y);
    tictactoe[x - 1][y - 1] = player1;

    while(!success(tictactoe, winner) && ++count != 9){
        if(count % 2 == 0){
            printf("�����⪱�a�C\n");
            printf("�п�J����J���s��(x, y)�A�H�Ů�j�}�C\n");
            scanf("%d %d", &x, &y);
            tictactoe[x - 1][y - 1] = player2;
        }
        else{
            printf("������⪱�a�C\n");
            printf("�п�J����J���s��(x, y)�A�H�Ů�j�}�C\n");
            scanf("%d %d", &x, &y);
            tictactoe[x - 1][y - 1] = player1;
        }
    }

    if(count == 9){
        printf("����!");
    }
    else{
        if(*winner == player1){
            printf("���⪱�a�ӧQ!\n");
            printf("�`�@���F%d�B�C\n", count);
        }
        else{
            printf("��⪱�a�ӧQ!\n");
            printf("�`�@���F%d�B�C\n", count);
        }
    }

    #ifdef WIN32
    system("pause");
    #endif
}