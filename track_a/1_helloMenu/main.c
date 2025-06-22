#include <stdio.h>
#include <stdbool.h>

int loadMenu(void);
float buyData(void);
float buyAirtime(void);
float getUserPrice();

void main() {
    float airtimeBalance = 0.00F;
    float dataBalance = 0.00F;

    int optionInput;
    bool continuePrograme = true;

    printf("=======================Hello User!======================\n");
    printf("            Welcome to our establishment.\n\n");

    optionInput = loadMenu(); // calling initial menu

    while (continuePrograme) {
        int choice;

        switch (optionInput) {
            case 1:
                float newDataAMount = buyData();
                dataBalance += newDataAMount;

                printf("\n\nCongratulations! \nYou have successfully bought %0.2fGB worth of data", newDataAMount);
                printf("\nYour current data balance is: %0.2fGB\n", dataBalance);
                break;
            case 2:
                float newAirtimeAmount = buyAirtime();
                printf("newAirtimeAmount (%.2f) vs airtimeBalance (%.2f)", newAirtimeAmount, airtimeBalance);
                airtimeBalance += newAirtimeAmount;

                printf("\n\nCongratulations! \nYou have successfully bought #%.2f naira airtime", newAirtimeAmount);
                printf("\nYour current airtime balance is: #%.2f naira\n", airtimeBalance);
                break;
            case 3:
                printf("\nYour current data balance is: %.2fGB\n", dataBalance);
                break;
            case 4:
                printf("\nYour current airtime balance is: #%.2f naira\n", airtimeBalance);
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
            } else {
                printf("Wrong choice. Loading Menu...");
                loadMenu();
            }
        }
    }

    // printf("\nQuiting...\n\n");
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
    const float DATA_PRICE_PER_GB = 100.00F;
    const float ONE_GB = 1.00F;
    float userPrice;
    float dataAmount;

    printf("\n=================Buy Data:=================\n");
    printf("1GB data costs #%.2f\n", DATA_PRICE_PER_GB);

    userPrice = getUserPrice();

    printf("\n You are buying #%.2f Naira worth of data", userPrice);

    dataAmount = (ONE_GB * userPrice) / DATA_PRICE_PER_GB;

    return dataAmount;
}

float buyAirtime (void) {
    const float AIRTIME_PRICE_PER_1 = 1.00F;
    float userPrice;
    float airtimeAmount;

    printf("\n=================Buy Airtime:=================\n");
    printf("1 Unit of airtime costs #%.2f\n", AIRTIME_PRICE_PER_1);

    userPrice = getUserPrice();

    printf("\n You are buying #%.2f Naira worth of airtime", userPrice);

    airtimeAmount = AIRTIME_PRICE_PER_1 * userPrice;
    
    printf("AirtimeAmount bought: %f", airtimeAmount);
    return airtimeAmount;
}

float getUserPrice() {
    float input;

    printf("\nHow much money do you want to buy with?: ");
    scanf("%f", &input);
    while (input < 1) {
        printf("Invalid amount specified. Amount must be greater than 0!\n > ");
        scanf("%f", &input);
    }

    return input;
}