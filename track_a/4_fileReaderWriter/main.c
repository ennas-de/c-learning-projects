#include <stdio.h>
#include <unistd.h>

FILE *file;

int readFile();
int writeFile();
int appendFile();

int main() {
    printf("================WELCOME!=================\n\n");
    
    int option;

    printf("Select an option:\n");
    printf("1. Write to file.\n");
    printf("2. Read from file.\n");
    printf("3. Append to an existing file.\n");
    printf("> ");
    scanf("%d", &option);

    if (option == 1) {
        printf("Writing...\n");

        writeFile();
    } else if (option == 2) {
        printf("Reading...\n");

        readFile();
    } else if (option == 3) {
        printf("Appending...\n");

        appendFile();
    } else {
        printf("Invalid selection. Exiting...\n\n");
        return 1;
    }
    
    // fclose(file);
    return 0;
}

int writeFile () {
    file = fopen("./data/data.txt", "w");
    if (file == NULL) {
        perror("Failed to open file.\n");
        return 1;
    }

    fprintf(file, "I am Abdulhakeem Muhammed!\n");

    sleep(2);
    printf("File writen to successfully!\n\n");

    fclose(file);
    return 0;
}

int readFile() {
    file = fopen("./data/data.txt", "r");
    if (file == NULL) {
        perror("Failed to open file.\n");
        return 1;
    }

    char line[100];

    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    printf("\n");

    sleep(2);
    printf("File successfully read!.\n");

    fclose(file);
    return 0;
}

int appendFile() {
    file = fopen("./data/data.txt", "a");
    if (file == NULL) {
        perror("Failed to open file.\n");
        return 1;
    }

    fputs("Appending to file.\n", file);
    fprintf(file, "This is another line.\n");
    printf("\n");

    sleep(2);
    printf("File successfully appended to.\n");

    fclose(file);
    return 0;
}