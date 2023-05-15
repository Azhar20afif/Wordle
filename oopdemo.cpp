#include <iostream>
#include <string>
using namespace std;

class WordlyGame {
private:
    string words[3] = {"late", "tale", "alte"};
    int correct;
    int total;
    int lives;

public:
    WordlyGame() {
        correct = 0;
        total = 3;
        lives = 5;
    }       

    void play() {
        cout << "\t\t\t\tWELCOME TO WORDLY" << endl;

        while (true) {
            bool match = false;
            string guess;
            cout << "Total words you have to guess: " << total << endl;
            cout << "Enter a word formed by these letters" << endl;
            cout << "(1) a\t(2) t\t(3) l\t(4) e" << endl;
            cin >> guess;

            for (int i = 0; i < 3; i++) {
                if (guess == words[i]) {
                    correct++;
                    total--;
                    match = true;
                }
            }

            if (!match) {
                lives--;
            }

            if (correct == 3 || lives == 0) {
                break;
            }
        }
    }
};

int main() {
    WordlyGame game;
    game.play();

    return 0;
}
