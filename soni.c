
#include<stdio.h>
char board[]={0,1,2,3,4,5,6,7,8,9};
void printBoard();
int check_win();
int main()
{
    int player=1,input,status=-1;
    printBoard();

while(status=-1)
{
    player=(player%2==0)?2:1;
    char mark=(player==1)?'X':'O';
    printf("Please enter number for player %d  \n",player);
    scanf("%d \n",&input);
    if(input<1|| input>9)
    {
        printf("invalid result");
    }
}

board[input]=mark;
printBoard();

int result=check_win();
if(result==1)
{
    printf("player %d is the WInner",player);
}
else if(result==0)
{
    printf("draw");
}

player++;
}


void printBoard()
{
    printf("------TIC TAC TOE GAME-----\n");
    printf("    1       |    2         |    3   \n");
    printf("------------|--------------|---------\n");
    printf("    4       |    5         |    6    \n");
    printf("------------|--------------|---------\n");
    printf("    7       |    8         |    9    \n");
    printf("\n");
}

