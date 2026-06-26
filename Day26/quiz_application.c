#include <stdio.h>

int main()
{
    int ans, score = 0;

    printf("Q1. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("Q2. 2 + 3 = ?\n");
    printf("1. 4\n2. 5\n3. 6\n4. 7\n");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("Your Score = %d/2", score);

    return 0;
}