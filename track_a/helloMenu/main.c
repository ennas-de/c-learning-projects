#include <stdio.h>
#include <stdbool.h>

int loadMenu(void);
float buyData(void);
float buyAirtime(void);

void main() {
    float airtimeBalance = 0;
    float dataBalance = 0;

    int optionInput;
    bool continuePrograme = true;

    printf("=======================Hello User!======================\n");
    printf("            Welcome to our establishment.\n\n");

    optionInput = loadMenu(); // calling initial menu

    while (continuePrograme) {
        int choice;

        switch (optionInput) {
            case 1:
                const float newDataAMount = buyData();
                dataBalance += newDataAMount;

                printf("\n\nCongratulations! \nYou have successfully bought %0.2fGB worth of data", newDataAMount);
                printf("\nYour current data balance is: %0.2fGB\n", dataBalance);
                break;
            case 2:
                const float newAirtimeAMount = buyAirtime();
                airtimeBalance += newAirtimeAMount;

                printf("\n\nCongratulations! \nYou have successfully bought #%.2f naira airtime", newAirtimeAMount);
                printf("\nYour current airtime balance is: #%.2f naira\n", airtimeBalance);
                break;
            case 3:
                printf("\nYour current data balance is: %.2fGB\n", dataBalance);
                break;
            case 4:
                printf("\nYour current airtime balance is: #%.2f naira\n", newAirtimeAMount);
                break;
            case 5:
                printf("\nGoodbye...\n");
                continuePrograme = false;
                break;
            default:
                printf(("\nWrong selection. Quiting...\n"));
                continuePrograme = false;
                break;
        }

        if (continuePrograme) {
            printf("\nWhat do you want to do next:\n");
            printf("1. Load Main Menu \n");
            printf("2. Quit \n");

            printf("$: ");
            scanf("%d", &choice);

            if (choice == 1) {
                optionInput = loadMenu();
            } else if (choice == 2) {
                optionInput = 5;
            }
        }
    }

    printf("\nQuiting...");
}

int loadMenu(void) {
    int choice = 0;

    printf("\n\n======================OPTIONS MENU======================:\n");
    printf("\t\t\t1. Buy Data\n");
    printf("\t\t\t2. Buy Airtime\n");
    printf("\t\t\t3. Check Data Balance\n");
    printf("\t\t\t4. Check Airtime Balance\n");
    printf("\t\t\t5. Quit\n");

    printf("\t\t\t$> ");
    scanf("%d", &choice);

    return choice;
}

float buyData(void) {
    const float DATA_PRICE_PER_GB = 100;
    const float ONE_GB = 1.00F;
    float userPrice;
    float dataAmount;

    printf("\n=================Buy Data:=================\n");
    printf("1GB data costs #%.2f\n", DATA_PRICE_PER_GB);

    printf("\nHow much do you want to buy with?: ");
    scanf("%f", &userPrice);

    printf("\n You are buying #%.2f Naira worth of data", userPrice);

    dataAmount = (ONE_GB * userPrice) / DATA_PRICE_PER_GB;

    return dataAmount;
}

float buyAirtime (void) {
    const float AIRTIME_PRICE_PER_1 = 1;
    float userPrice;
    float airtimeAmount;

    printf("\n=================Buy Airtime:=================\n");
    printf("1 Unit of airtime costs #%.2f\n", AIRTIME_PRICE_PER_1);

    printf("\nHow much do you want to buy with?: ");
    scanf("%f", &userPrice);

    printf("\n You are buying #%.2f Naira worth of airtime", userPrice);

    airtimeAmount = AIRTIME_PRICE_PER_1 * userPrice;

    return airtimeAmount;
}