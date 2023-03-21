#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 15

// Define the structure for player
typedef struct {
    char name[20];
    int position;
} Player;

// Function to check if the current player has won the game
int hasWon(Player player) {
    return player.position >= BOARD_SIZE * BOARD_SIZE;
}

int main() {
    int numPlayers, currentPlayerIndex = 0, dice;
    Player players[4];
    srand(time(NULL));

    printf("Welcome to Ludo Game!\n\n");
    printf("Enter the number of players (2 or 4): ");
    scanf("%d", &numPlayers);

    // Initializing the players
    for (int i = 0; i < numPlayers; i++) {
        printf("\nEnter player %d name: ", i+1);
        scanf("%s", players[i].name);
        players[i].position = -1;
    }

    // Initializing the board
    int board[BOARD_SIZE][BOARD_SIZE];
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = 0;
        }
    }

    // Game loop
    while (1) {
        Player currentPlayer = players[currentPlayerIndex];

        printf("\nIt's %s's turn.\n", currentPlayer.name);
        printf("Press any key to roll the dice.\n");
        getchar();

        // Roll the dice
        dice = rand() % 6 + 1;
        printf("You rolled a %d.\n", dice);

        if (currentPlayer.position == -1 && dice != 6) {
            printf("You can't move until you roll a 6.\n");
        } else {
            // Move the player's token
            currentPlayer.position += dice;
            if (currentPlayer.position >= BOARD_SIZE * BOARD_SIZE) {
                printf("Congratulations %s, you have won the game!\n", currentPlayer.name);
                break;
            }
            printf("You moved to %d.\n", currentPlayer.position);
        }

        // Check if the current player has won the game
        if (hasWon(currentPlayer)) {
            printf("Congratulations %s, you have won the game!\n", currentPlayer.name);
            break;
        }

        // Move to the next player
        currentPlayerIndex++;
        if (currentPlayerIndex == numPlayers) {
            currentPlayerIndex = 0;
        }
    }

    return 0;
}
