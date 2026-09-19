#include <stdio.h>
#include <math.h>

int main(void)
{
start:           // Her starter programmet forfra
    int seconds; // Erklærer variablen seconds som en integer
    char yes;    // Erklærer variablen yes som en char til senere brug
    printf("\nDette program omregner sekunder til uger, dage, timer, minutter samt resterende sekunder!\nIndtast antal sekunder herunder\n\n");
    scanf("%d", &seconds);
    printf("\nDu indtastede %d sekunder\n", seconds);

    // Erklærer de resterende variabler som integers, og finder herefter resten efter divisionen
    int minutes = seconds / 60;
    seconds = seconds % 60;
    int hours = minutes / 60;
    minutes = minutes % 60;
    int days = hours / 24;
    hours = hours % 24;
    int weeks = days / 7;
    days = days % 7;

    printf("Dette svarer til: %d uger, %d dage, %d timer, %d minutter og %d sekunder\n", weeks, days, hours, minutes, seconds);
    printf("\nVil du prøve igen? y for ja\n");
    scanf(" %c", &yes); // Spørger brugeren om de vil prøve igen, og gemmer svaret i variablen yes
    if (yes == 'y') // Hvis brugeren indtaster 'y', går programmet tilbage til start
    {
        goto start;
    }
    else
    {
        return 0;
    }
};