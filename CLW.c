#include <stdio.h>


    // int numbers[5] = {5, 2, 8, 12, 3};
    // int j;
    // int smallest = numbers[0];
    // int largest = numbers[0],difference;

// if(numbers[j] < smallest) {
//     smallest = numbers[j];}

// if(numbers[j] > largest) {
//     largest = numbers[j];}
//     }

// difference = largest - smallest;

// printf("Difference : %d", difference);
// printf("\nJide is the best  frr\n");


int main() {
    char matrix[3][3];
    char value;
    int round = 1;

    printf("Welcome to Jide's X and O game\n");

    /* Filling the matrix one by one */
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {

            printf("Round %d: Enter X or O: ", round);
            scanf(" %c", &value);

            /* Basic validation */
            while(value != 'X' && value != 'O' && value != 'x' && value != 'o') {
                printf("Invalid! Enter X or O: ");
                scanf(" %c", &value);
            }

            matrix[i][j] = value;  /* Store in matrix */
            round++;
        }
    }

    /* Print final matrix */
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}





// int even;
//     int numbers[10];
//     printf("Enter 10 numbers : \n");

//     for(int i= 0; i <=10; i++){
//         scanf( "%d", &numbers[i]);
//     }
//     even = 
//     printf("\n Even numbers :\n");
//     for(int i= 0; i <=10; i++){
//         printf
//     }


// int num, sum = 0  ;

// for (int i = 1; i <= 4; i++) {
//     printf("Enter number %d: ", i);
//     scanf("%d", &num);

//     while( num < 0 ){
//     printf("Invalid! Number must be Greater than 0\n");
//     printf("Enter number %d: ", i);
//     scanf("%d", &num); 
//     }

//     sum += num;
// }

// printf("The sum is :  %d", sum );



//     return 0;
// }
