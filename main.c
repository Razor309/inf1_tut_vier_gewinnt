#include <stdio.h>

#define ROWS 6
#define COLS 7

typedef struct {
    char board[ROWS][COLS];
} ConnectFour;

/**
 * @brief Initialisiert das Spielfeld mit Leerzeichen.
 */
void initGame(ConnectFour* game) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            game->board[i][j] = ' ';
        }
    }
}

/**
 * @brief Gibt das aktuelle Spielfeld auf der Konsole aus.
 */
void printBoard(const ConnectFour* game) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("%c ", game->board[i][j]);
        }
        printf("\n");
    }
}

/**
 * @brief Setzt ein Spielstück in die angegebene Spalte des Spielfelds.
 * @param column Die Spalte, in die das Spielstück platziert werden soll.
 * @param player Der Spieler, der das Spielstück platziert ('X' oder 'O').
 * @return 1, wenn das Spielstück erfolgreich platziert wurde, sonst 0.
 */
int dropPiece(ConnectFour* game, int column, char player) {
    for (int i = ROWS - 1; i >= 0; --i) {
        if (game->board[i][column] == ' ') {
            game->board[i][column] = player;
            return 1;
        }
    }
    return 0; // Spalte ist voll
}

/**
 * @brief Überprüft, ob ein Spieler das Spiel gewonnen hat.
 * @return 1, wenn ein Spieler gewonnen hat, sonst 0.
 */
int checkWin(const ConnectFour* game) {
    // Implementiere die Logik zur Überprüfung des Gewinns
    // Hier sollte deine Logik für Vier-Gewinnt stehen
    // Du kannst horizontal, vertikal und diagonal überprüfen
    return 0;
}

int main() {
    ConnectFour game;
    initGame(&game);

    char currentPlayer = 'X';

    while (!checkWin(&game)) {
        printBoard(&game);

        int column;
        printf("Spieler %c, wähle eine Spalte (0-%d): ", currentPlayer, COLS - 1);
        scanf("%d", &column);

        if (column < 0 || column >= COLS) {
            printf("Ungültige Spalte! Bitte wähle erneut.\n");
            continue;
        }

        if (dropPiece(&game, column, currentPlayer)) {
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } else {
            printf("Die Spalte ist voll! Bitte wähle erneut.\n");
        }
    }

    printBoard(&game);
    printf("Spieler %c gewinnt!\n", currentPlayer);

    return 0;
}
