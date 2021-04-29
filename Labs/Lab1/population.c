#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    // TODO: Prompt for end size

    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years

    int startSize;
    int endSize;

    do
    {
        startSize = get_int("Start size: ");
    }
    while (startSize < 9);

    do
    {
        endSize = get_int("End size: ");
    }
    while (endSize < startSize);

    int bornPerYear;
    int passAwayPerYear;
    int totalYears = 0;

    while (startSize < endSize)
    {
        bornPerYear = startSize / 3;
        passAwayPerYear = startSize / 4;
        startSize = startSize + (bornPerYear - passAwayPerYear);
        totalYears++;
    }

    printf("Years: %i\n", totalYears);
}
