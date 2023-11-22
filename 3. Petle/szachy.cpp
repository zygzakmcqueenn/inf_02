#include <iostream>
#include <string>

using namespace std;

class ChessBoard {
    public:
        void printBoard() {
            // Print the y-axis labels
            cout << "  a b c d e f g h" << endl;
            
            // Print the board
            for (int i = 8; i >= 1; i--) {
                cout << i << " ";
                for (int j = 1; j <= 8; j++) {
                    if ((i + j) % 2 == 0) {
                        cout << "+"; // black square
                    } else {
                        cout << "-"; // white square
                    }
                    cout << " ";
                }
                cout << i << endl;
            }
            
            // Print the y-axis labels again
            cout << "  a b c d e f g h" << endl;
        }
};

int main() {
    ChessBoard board;
    board.printBoard();
    return 0;
}