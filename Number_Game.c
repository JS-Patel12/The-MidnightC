#include <stdio.h>

void main()
{
    int secret, guess, attempts = 0;

    printf("====================================\n");
    printf("      NUMBER GUESSING GAME\n");
    printf("====================================\n");

    printf("Player 1, enter the secret number: ");
    scanf("%d", &secret);

    // Print blank lines so Player 2 can't easily see the number
    for (int i = 0; i < 30; i++)
    {
        printf("\n");
    }

    printf("Player 2, start guessing!\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secret)
        {
            printf("Too High!\n");
        }
        else if (guess < secret)
        {
            printf("Too Low!\n");
        }
        else
        {
            printf("\nCongratulations!\n");
            printf("You guessed the number correctly.\n");
            printf("Total Attempts = %d\n", attempts);
        }

    } while (guess != secret);
}