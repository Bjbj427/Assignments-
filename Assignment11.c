#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int simpleHash(char password[]) {
    int hash = 0;
    for (int i = 0; password[i] != '\0'; i++) {
        hash += password[i];
    }
    return hash;
}

int main() {
    FILE *file;
    char username[50], password[50];
    char fileUsername[50];
    int fileHashedPassword;
    int balance = 1000;

    printf("Welcome to F3DS BANK\n");
    printf("SIGN UP\n");
    printf("Enter Username\n");
    scanf("%s", username);
    printf("Enter Password\n");
    scanf("%s", password);

    int hashpassword = simpleHash(password);

    file = fopen("user.txt", "w");
    fprintf(file, "%s\n%d\n%d", username, hashpassword, balance);
    fclose(file);

    printf("Account created successfully proceed to login\n");

    while(1) {
        printf("Enter Username\n");
        scanf("%s", username);
        printf("Enter Password\n");
        scanf("%s", password);

        file = fopen("user.txt", "r");
        fscanf(file, "%s", fileUsername);
        fscanf(file, "%d", &fileHashedPassword);
        fscanf(file, "%d", &balance);
        fclose(file);

        int hashedInput = simpleHash(password);

        if(strcmp(username, fileUsername) == 0 && hashedInput == fileHashedPassword) {
            printf("Login successful!\n");
            break;
        } else {
            printf("Wrong username or password! Try again.\n");
        }
    }

    return 0;
}
