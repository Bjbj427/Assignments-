#include <stdio.h>

int main() {
    char board[3][3] = {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };

    char player1[50], player2[50];
    char symbol;
    int slot, row, col;

    printf("Enter your name (X): ");
    scanf("%s", player1);

    printf("Enter your name (O): ");
    scanf("%s", player2);

    for(int move = 1; move <= 9; move++) {

        // Print the board
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                printf("%c", board[i][j]);
                if(j < 2) printf("|");
            }
            printf("\n");
            if(i < 2) printf("-----\n");
        }

        // Decide player's turn
        if(move % 2 != 0) {
            printf("%s, choose your slot (1-9) for X: ", player1);
            symbol = 'X';
        } else {
            printf("%s, choose your slot (1-9) for O: ", player2);
            symbol = 'O';
        }

        scanf("%d", &slot);
        row = (slot - 1) / 3;
        col = (slot - 1) % 3;

        if(board[row][col] == 'X' || board[row][col] == 'O') {
            printf("Slot already used! Pick another one.\n");
            move--; // repeat this turn
            continue;
        }

        board[row][col] = symbol;
    }

    // Print final board
    printf("Final board:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if(j < 2) printf("|");
        }
        printf("\n");
        if(i < 2) printf("-----\n");
    }

    printf("Game don finish mehn!\n");
    return 0;
}
