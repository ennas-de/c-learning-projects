#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

// Formulas:
    // Celsius to Kelvin, K = C + 273.15
    // Celsius to Fahrenheit, F = (9/5)C + 32
    // Fahrenheit to Celsius, C = (5/9)(F-32)
    // Fahrenheit to Kelvin, K = (5/9)(F+459.67)
    // Fahrenheit to Rankin, R = F + 459.67
    // Rankin to Kelvin, K = (5/9)R


int main() {
    float initialTemp;
    char initialUnit;
    float finalTemp;
    char finalUnit;

    usleep(300000);

    printf("Temparature Converter App\n\n");
    sleep(2);

    printf("Available Conversion Units: Celcius (C), Kelvin (K), and Fahrenheit (F).\n");
    printf("Enter the Temperature details like: InitialTemperature+InitialUnit finalUnit; e.g. '36C K'\n> ");
    scanf("%f %c %c", &initialTemp, &initialUnit, &finalUnit); 

    // printf("Inputed values: \nInitial Temperate: %.2f%c \nFinal Unit: %c\n", initialTemp, initialUnit, finalUnit);

    initialUnit = tolower(initialUnit);

    switch (initialUnit) {
        case 'c':
            if (tolower(finalUnit) == 'k') {
                // K = C + 273.15
                finalTemp = initialTemp + 273.15;
                break;
            } else if (tolower(finalUnit) == 'f') {
                // F = (9/5)C + 32
                finalTemp = ((9/(float)5) * initialTemp) + 32;
                break;
            } else {
                printf("Invalid Final Unit!\n");
            }

            break;
        case 'k':
            if (tolower(finalUnit) == 'c') {
                // K = C + 273.15
                finalTemp = initialTemp - 273;
                break;
            } else if (tolower(finalUnit) == 'f') {
                // K = (5/9)(F+459.67)
                finalTemp = (initialTemp / (9 / (float)5)) - 459.67;
                break;
            } else {
                printf("Invalid Final Unit!\n");
            }
            break;
        case 'f':
            if (tolower(finalUnit) == 'c') {
                // C = (5/9)(F-32)
                finalTemp = (5 / (float)9) * (initialTemp - 32);
                break;
            } else if (tolower(finalUnit) == 'k') {
                // K = (5/9)(F+459.67)
                finalTemp = (5 / (float)9) * (initialTemp + 459.67);
                break;
            } else {
                printf("Invalid Final Unit!\n");
            }
            break;
        default:
            printf("Invalid Initial Unit specified.\n Exiting...\n");
            break;
    }

    // clear screen;
    printf("Converting %.2f°%c to %c = %.2f°%c\n\n", initialTemp, toupper(initialUnit), toupper(finalUnit), finalTemp, toupper(finalUnit));

    return 0;
}