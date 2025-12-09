#include<stdio.h>
int main (){
    char code [10];
    int mainchoice , subchoice ;
    printf("Enter ussd code : ");
    scanf("%s", code);

    if(strcmp(code, "*333#" )!=0){
        printf("Incorrect ussd code\n");
        
    return 0;
    }

    printf("Welcome to Jide's Network\n");
    printf("1. Airtime Services\n");
    printf("2. Data Services\n");
    printf("3. Account Information\n");
    printf("4. Exit\n");
    printf("Enter your option : ");
    scanf("%d", &mainchoice);

         switch(mainchoice) {
         case 1:
            printf("\nAirtime Services\n");
            printf("1. Recharge Airtime\n");
            printf("2. Borrow Airtime\n");
            printf("3. Transfer Airtime\n");
            printf("4. Back to Main Menu\n");
            printf("Enter option: ");
            scanf("%d", &subchoice);

                  switch(subchoice) {
                case 1: printf("You selected Recharge Airtime\n"); break;
                case 2: printf("You selected Borrow Airtime\n"); break;
                case 3: printf("You selected Transfer Airtime\n"); break;
                case 4: printf("Returning to main menu...\n"); break;
                default: printf("Invalid Airtime option\n");
            }
            break;
         case 2:
            printf("\nData Services\n");
            printf("1. Buy Data Plan\n");
            printf("2. Check Data Balance\n");
            printf("3. Get Data Bonus\n");
            printf("4. Back to Main Menu\n");
            printf("Enter option: ");
            scanf("%d", &subchoice);

            switch(subchoice) {
                case 1: printf("You selected Buy Data Plan\n"); break;
                case 2: printf("You selected Check Data Balance\n"); break;
                case 3: printf("You selected Get Data Bonus\n"); break;
                case 4: printf("Returning to main menu...\n"); break;
                default: printf("Invalid Data option\n");
            }
            break;

         case 3:
            printf("\nAccount Information\n");
            printf("1. Check Airtime Balance\n");
            printf("2. Check Bonus Balance\n");
            printf("3. SIM Registration Status\n");
            printf("4. Back to Main Menu\n");
            printf("Enter option: ");
            scanf("%d", &subchoice);

            switch(subchoice) {
                case 1: printf("You selected Check Airtime Balance\n"); break;
                case 2: printf("You selected Check Bonus Balance\n"); break;
                case 3: printf("You selected SIM Registration Status\n"); break;
                case 4: printf("Returning to main menu...\n"); break;
                default: printf("Invalid Account option\n");
            }
            break;

         case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid main menu choice\n");
    }

   return 0;
}