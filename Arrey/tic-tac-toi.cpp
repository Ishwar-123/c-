#include <iostream>
using namespace std;

int main() {
    char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
    char currentPlayer = 'X';
    int move, row, col;

    while (true) {
        // Display the board
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << board[i][j] << ' ';
            }
            cout << endl;
        }

        // Player input
        cout << "Player " << currentPlayer << ", choose your position (1-9): ";
        cin >> move;

        // Convert move to board coordinates
        row = (move - 1) / 3;
        col = (move - 1) % 3;

        // Validate move
        if (move < 1 || move > 9 || board[row][col] == 'X' || board[row][col] == 'O') {
            cout << "Invalid move, try again.\n";
            continue;
        }

        // Place the move
        board[row][col] = currentPlayer;

        // Check for a win (rows, columns, diagonals)
        for (int i = 0; i < 3; ++i) {
            if ((board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) || // Row
                (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)) { // Column
                cout << "Player " << currentPlayer << " wins!\n";
                return 0;
            }
        }
        if ((board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) || // Diagonal
            (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)) {
            cout << "Player " << currentPlayer << " wins!\n";
            return 0;
        }

        // Check for draw
        bool draw = true;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (board[i][j] != 'X' && board[i][j] != 'O') {
                    draw = false;
                }
            }
        }
        if (draw) {
            cout << "It's a draw!\n";
            return 0;
        }

        // Switch player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}

