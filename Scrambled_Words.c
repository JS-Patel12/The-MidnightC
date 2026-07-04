#include <stdio.h>

void main()
{
    char words[5][20] = {
        "apple",
        "computer",
        "school",
        "orange",
        "guitar"};

    char scrambled[5][20] = {
        "elppa",
        "pmocretu",
        "olohcs",
        "gnoear",
        "rtagiu"};

    char guess[20];
    int i;
    int score = 0;

    printf("=====================================\n");
    printf("\tWORD SCRAMBLE GAME\n");
    printf("=====================================\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nRound %d\n", i + 1);
        printf("Scrambled Word : %s\n", scrambled[i]);

        printf("Enter your guess : ");
        scanf("%s", guess);

        int j = 0;
        int correct = 1;

        while (words[i][j] != '\0' || guess[j] != '\0')
        {
            if (words[i][j] != guess[j])
            {
                correct = 0;
                break;
            }
            j++;
        }

        if (correct)
        {
            printf("Correct!\n");
            score += 10;
        }
        else
        {
            printf("Wrong!\n");
            printf("Correct Word : %s\n", words[i]);
        }

        printf("Current Score : %d\n", score);
    }

    printf("\n=====================================\n");
    printf("Game Over!\n");
    printf("Final Score : %d / 50\n", score);
    printf("=====================================\n");
}