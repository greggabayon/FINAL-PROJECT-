#include <iostream>
#include <string>
using namespace std;

class GuessingGame {
private:
    string name;
    string levels[3] = {"Easy", "Medium", "Hard"};
    int answers[3] = {5, 25, 500};

public:
    void greetPlayer() {
        cout << "What's your name? ";
        cin >> name;
        cout << "Hello, " << name << "!" << endl << endl;
    }

    void play() {
        for (int round = 0; round < 3; ++round) {
            cout << "\n--- LEVEL: " << levels[round] << " ---" << endl;
            cout << "Guess the number!" << endl;

            int guess;
            int answer = answers[round];

            while (true) {
                cout << "Your guess: ";
                cin >> guess;

                if (guess < answer) {
                    cout << "TRY AGAIN! HIGHER" << endl;
                } else if (guess > answer) {
                    cout << "TRY AGAIN! LOWER" << endl;
                } else {
                    cout << "CORRECT! The number was " << answer << "." << endl;
                    break;
                }
            }
        }

        cout << "\nGreat job, " << name << "! You completed all levels!" << endl;
    }
};

int main() {
    cout << "Guess the number game!" << endl << endl;

    // Game notes and creators
    cout << "Created by: Greg Abayon, Arwil Araneta, Anito Bacog, Anica Martinez, John Rei Orienda" << endl;
    cout << "\nIMPORTANT NOTES:\n";
    cout << "I. Level Order: Easy → Medium → Hard" << endl;
    cout << "II. Each level has a fixed number to guess!" << endl;
    cout << "- Easy: 1 to 9\n- Medium: 10 to 99\n- Hard: 100 to 999" << endl;
    cout << "*********************************************************" << endl;

    GuessingGame game;
    game.greetPlayer();
    game.play();

    return 0;
}
