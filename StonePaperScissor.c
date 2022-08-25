#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generaterandomnumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char1, char2)
{
    // returns 1 if c1>c2 and 0 otherwise .if c1==c2 it will return -1
    if (char1 == char2)
    {
        return -1;
    }
    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }
    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }
    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}
int main()
{
    int playerscore = 0, compscore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'r', 'p', 's'};

    printf("Welcome to rock ,paper, scissors game\n");
    for (int i = 0; i < 3; i++)
    {
        // Take Player's Input
        printf("Player 1's turn:\n");
        printf("Choose 1 for Rock , 2 for Paper ,3 for Scissor\n");
        scanf("%d\n", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("You choose %c\n\n", playerchar);

        // Take Computer's Input

        printf("Computer's turn:\n");
        printf("Choose 1 for Rock , 2 for Paper ,3 for Scissor\n");
        temp = generaterandomnumber(3) + 1;
        compchar = dict[temp - 1];
        printf("CPU chose %c\n\n", compchar);

        if (greater(compchar, playerchar) == 1)
        {
            compscore += 1;
            printf("CPU GOT 1 POINT\n\n");
        }
        else if (greater(compchar, playerchar) == -1)
        {
            compscore += 1;
            playerscore += 1;
            printf("IT'S A DRAW \n\n");
        }
        else
        {
            playerscore += 1;
            printf("YOU GOT 1 POINT\n\n");
        }
        printf("YOU :%d\n,CPU :%d\n", playerscore, compscore);
    }
    if (playerscore > compscore)
    {
        printf("YOU WIN THE GAME\n");
    }
    else if (playerscore < compscore)
    {
        printf("CPU WIN THE GAME\n");
    }
    else
    {
        printf("IT'S A DRAW");
    }

    return 0;
}
